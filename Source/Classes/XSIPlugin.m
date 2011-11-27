/*
 *  Copyright (c) 2011, Lars Schneider
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *  Redistributions of source code must retain the above copyright notice, this
 *  list of conditions and the following disclaimer.
 *  Redistributions in binary form must reproduce the above copyright notice,
 *  this list of conditions and the following disclaimer in the documentation
 *  and/or other materials provided with the distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 */

#import "XSIPlugin.h"

#import <DevToolsCore/PBXProject.h>
#import <DevToolsCore/PBXGroup.h>
#import <DevToolsCore/PBXReference.h>
#import <DevToolsCore/PBXTarget.h>

id objc_getClass(const char* name);

static Class PBXProjectClass;
static Class PBXReferenceClass;


static XSIPlugin *plugin;
static NSConnection *connection;


@implementation XSIPlugin


+ (void)pluginDidLoad:(NSBundle *)bundle
{
    // Create DevToolsCore classes
    PBXProjectClass = objc_getClass("PBXProject");
    PBXReferenceClass = objc_getClass("PBXReference");
    
    // Initialize plugin, open connection and wait for commands
    plugin = [[XSIPlugin alloc] init];
    connection = [[NSConnection alloc] init];
    
    if ([connection registerName:XSI_PLUGIN_CONNECTION_NAME])
    {
        [connection setRootObject:plugin];
        NSLog(@"Xcode scripting interface waiting for commands...");
    }
    else
    {
        NSLog(@"Xcode scripting interface setup failed");
        plugin = nil;
        connection = nil;
    }
}


- (NSString *)pluginVersion
{
    NSLog(@"aa");
    return XSI_PLUGIN_VERSION;
}


// Adds a group and all its children to a target
- (void)addGroup:(PBXReference *)group toTarget:(PBXTarget *)target
{
    for (PBXReference *reference in [group children])
    {
        if ([reference isGroup])
        {
            [self addGroup:reference toTarget:target];
        }
        else
        {
            [target addReference:reference];
        }
    }
}


// Removes a group an all its children from a target
- (void)removeGroup:(PBXReference *)group fromTarget:(PBXTarget *)target
{
    for (PBXReference *reference in [group children])
    {
        if ([reference isGroup])
        {
            [self removeGroup:reference fromTarget:target];
        }
        else
        {
            [target removeReference:reference];
        }
    }
}

- (BOOL)addFilesWithPath:(NSString *)groupPath
                toTarget:(NSString *)targetName
               inProject:(NSString *)projectPath
{
    PBXProject *project = [PBXProjectClass projectWithFile:projectPath];
    PBXGroup *rootGroup = [project rootGroup];
    PBXTarget *target = [project targetNamed:targetName];
    
    if (project == nil)
    {
        NSLog(@"Project not found.");
        return NO;
    }
    
    if (rootGroup == nil)
    {
        NSLog(@"Root group not found.");
        return NO;
    }
    
    if (target == nil)
    {
        NSLog(@"Target not found.");
        return NO;
    }
    
    NSArray *newReferences = [rootGroup insertFiles:[NSArray arrayWithObject:groupPath]
                                            atIndex:0
                                               copy:NO
                            createGroupsRecursively:YES];
    
    if (newReferences.count == 0)
    {
        NSLog(@"Adding files from `%@` failed.", groupPath);
        return NO;
    }
    
    for (PBXReference *group in newReferences)
    {
        //[rootGroup moveObject:group toIndex:0];
        [self addGroup:group toTarget:target];
    }
    
    return YES;
}


- (BOOL)removeRootLevelGroupWithName:(NSString *)groupName
                          fromTarget:(NSString *)targetName
                           inProject:(NSString *)projectPath
{
    PBXProject *project = [PBXProjectClass projectWithFile:projectPath];
    PBXGroup *rootGroup = [project rootGroup];
    PBXTarget *target = [project targetNamed:targetName];
    
    if (project == nil)
    {
        NSLog(@"Project not found.");
        return NO;
    }
    
    if (rootGroup == nil)
    {
        NSLog(@"Root group not found.");
        return NO;
    }
    
    if (target == nil)
    {
        NSLog(@"Target not found.");
        return NO;
    }
    
    NSMutableSet *groupsToBeDeleted = [NSMutableSet set];
    
    NSLog(@"Iterating over all children of the root group...");
    for (PBXReference *item in [rootGroup children])
    {
        NSLog(@"- %@", [item name]);
        if ([item isGroup] && [[item name] isEqualToString:groupName])
        {
            // We found our group
            NSLog(@"  -> Add group to deletion set.");
            [groupsToBeDeleted addObject:item];
        }        
    }
    
    // Tell the call if anything went wrong or if the group was not found.
    if (groupsToBeDeleted.count == 0)
    {
        NSLog(@"Group with name `%@` not found.", groupName);
        return NO;
    }
 
     NSLog(@"Deleting all groups (%lu) at root level that match the name `%@`...", groupsToBeDeleted.count, groupName);
    for (PBXReference *group in groupsToBeDeleted)
    {
        [self removeGroup:group fromTarget:target];
        [group removeFromGroup];
    }
    
    return YES;
}
    

@end
