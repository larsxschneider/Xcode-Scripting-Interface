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

#import <Foundation/Foundation.h>
#import "XSIPlugin.h"
#include <boost/program_options.hpp>


namespace po = boost::program_options;
using namespace std;


#define XSI_CLI_VERSION "0.1 alpha"


int main (int argc, const char * argv[])
{
    try {
        
        string xcodeProjectPath;
        string command;
        string groupName;
        string groupPath;
        string targetName;
        
        po::options_description desc("Allowed options");
        desc.add_options()
        ("help", "produce help screen")
        ("version", "print the version number")
        ("xcode-project-path", po::value(&xcodeProjectPath), "Path of the Xcode project that you want to modify.")
        ("command", po::value(&command), "Command that you want to execute on the xcode project:\n  addGroupToRootLevel\n  removeGroupFromRootLevel")
        ("group-name", po::value(&groupName), "Name of the group you want to create or remove.")
        ("group-path", po::value(&groupPath), "Path that contains all files and folders you want to add to the created group.")
        ("target-name", po::value(&targetName), "Target to which all files in the new group are added.")
        ;
        
        po::variables_map vm;        
        po::store(po::parse_command_line(argc, argv, desc), vm);
        po::notify(vm);    
        
        if (vm.count("help")) {
            cout << "Usage: xcodescript [options]\n";
            cout << desc << "\n";
            return 1;
        }
        
        XSIPlugin *proxy = (XSIPlugin *)[NSConnection rootProxyForConnectionWithRegisteredName:XSI_PLUGIN_CONNECTION_NAME 
                                                                                          host:nil];
        
        if ([proxy pluginVersion] == nil)
        {
            cout << "Connection to XSI plugin failed. Is Xcode running?" << "\n";
            return 1;
        }
        
        if (vm.count("version"))
        {
            cout << "xcodescript version: " << XSI_CLI_VERSION << "\n";
            cout << "XSI plugin version: " << [[proxy pluginVersion] cStringUsingEncoding:NSASCIIStringEncoding] << "\n";
            return 1;
        }
       
        NSString *xcodeProjectPathString = [NSString stringWithCString:xcodeProjectPath.c_str() encoding:NSASCIIStringEncoding];
        NSString *commandString = [NSString stringWithCString:command.c_str() encoding:NSASCIIStringEncoding];
        NSString *targetNameString = [NSString stringWithCString:targetName.c_str() encoding:NSASCIIStringEncoding];
        BOOL result = NO;
        
                        cout << "xcodescript version: " << xcodeProjectPath << "\n";
        
        if ([commandString isEqualToString:@"addGroupToRootLevel"])
        {
            NSString *groupPathString = [NSString stringWithCString:groupPath.c_str()
                                                           encoding:NSASCIIStringEncoding];
            
            if (groupPathString && targetNameString && xcodeProjectPathString)
            {
                result = [proxy addFilesWithPath:groupPathString
                                        toTarget:targetNameString
                                       inProject:xcodeProjectPathString];
            }
            else
            {
                cout << "Insuffient options for `addGroupToRootLevel`\n";
                return 1;
            }

        }
        else if ([commandString isEqualToString:@"removeGroupFromRootLevel"])
        {
            NSString *groupNameString = [NSString stringWithCString:groupName.c_str() encoding:NSASCIIStringEncoding];
            
            if (groupNameString && targetNameString && xcodeProjectPathString)
            {
                result = [proxy removeRootLevelGroupWithName:groupNameString
                                                  fromTarget:targetNameString
                                                   inProject:xcodeProjectPathString];
            }
            else
            {
                cout << "Insuffient options for `removeGroupFromRootLevel`\n";
                return 1;
            }
        }
        else
        {
            cout << "Unknown command: " << command << "\n";
            return 1;
        }
        
        if (result == NO)
        {
            cout << "Error occured.\n";
            return 1;
        }
        
    }
    catch(exception& e) {
        cerr << "error: " << e.what() << "\n";
        return 1;
    }
    
    return 0;
}

