/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CC_MD5state_st {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7[16];
    int _field8;
};

struct Ciitp;

struct Cpp {
    int _field1;
    char *_field2;
    int _field3;
    char *_field4;
    struct CppActions *_field5;
    struct TokenBuffer *_field6;
    struct Token *_field7;
    struct Token *_field8;
    struct Token *_field9;
    struct Token *_field10;
    struct TokenStream *_field11;
    id _field12;
    id _field13;
    char _field14;
    struct StringTable *_field15;
    struct _NSZone *_field16;
    char _field17;
    struct _NSZone *_field18;
    int _field19;
    int _field20;
    int _field21;
    struct Source *_field22;
    struct Source *_field23;
    struct Source *_field24;
    struct Source *_field25;
    struct Source *_field26;
    struct Source *_field27;
    struct Place *_field28;
    struct Place *_field29;
    char _field30;
    struct Place *_field31;
    struct Place *_field32;
    char *_field33;
    char _field34;
    char _field35;
    char _field36;
    id _field37;
    id _field38;
    id _field39;
    struct Header *_field40;
    id _field41;
    struct Place *_field42;
    id _field43;
    id _field44;
    id _field45;
    struct TokenBuffer *_field46;
    int _field47;
    char **_field48;
    int _field49;
    char *_field50;
    int _field51;
    int _field52;
    char *_field53;
    char *_field54;
    struct TokenList *_field55;
    struct TokenList *_field56;
    char *_field57;
    char *_field58;
    long long _field59;
    struct TrustedSet *_field60;
    struct TrustedSet *_field61;
    struct TrustedSet *_field62;
    struct Ciitp *_field63;
    int _field64;
    int _field65;
    char *_field66;
    int _field67;
    int _field68;
    struct _HeaderMap *_field69;
    char _field70;
    char _field71;
    char _field72;
    char _field73;
    char _field74;
    char _field75;
    char _field76;
    char _field77;
    char _field78;
    char _field79;
    char _field80;
    char _field81;
    char _field82;
    char _field83;
    char _field84;
    char _field85;
    char _field86;
    char _field87;
    char _field88;
    char _field89;
    char _field90;
    char _field91;
    int _field92;
    char _field93;
    char _field94;
    int _field95;
    int _field96;
    id _field97;
    id _field98;
    char _field99;
    struct Resword *_field100;
};

struct CppActions;

struct Header;

struct Lex {
    char _field1;
    struct _NXStream *_field2;
    id _field3;
    struct TokenBuffer *_field4;
    struct Token *_field5;
    struct Token *_field6;
    struct StringTable *_field7;
    struct _NSZone *_field8;
    struct Resword *_field9;
    int _field10;
    unsigned int _field11;
    unsigned int _field12;
    long long _field13;
    char *_field14;
    char *_field15;
    int _field16;
    int _field17;
    struct NXNamedStream *_field18;
    int _field19;
    int _field20;
    char _field21;
    char _field22;
    char _field23;
    char _field24;
    char _field25;
    char _field26;
    char _field27;
};

struct NXNamedStream {
    char *_field1;
    struct _NXStream *_field2;
    int _field3;
    struct _NXStream *_field4;
    int _field5;
};

struct ObjcActions;

struct ObjcParse {
    char _field1;
    struct TokenStream *_field2;
    id _field3;
    struct ObjcActions *_field4;
    struct Token *_field5;
    struct Token *_field6;
    int _field7;
    struct Token *_field8;
    char _field9;
    char _field10;
    char _field11;
    char _field12;
    char _field13;
    id _field14;
    int _field15;
    id _field16;
    int *_field17;
    id _field18;
    int _field19;
};

struct PBXHeaderMapBucket {
    unsigned int _field1;
    struct PBXHeaderMapBucketValue _field2;
};

struct PBXHeaderMapBucketValue {
    unsigned int _field1;
    unsigned int _field2;
};

struct PBXIndexCParseActions {
    void **_field1;
    struct ObjcParse *_field2;
    id _field3;
    char _field4;
    id _field5;
    char _field6;
    id _field7;
    char _field8;
    id _field9;
    char _field10;
    id _field11;
    id _field12;
    struct dispatch_queue_s *_field13;
    id _field14;
    char _field15[1024];
    id _field16;
    unsigned long long _field17;
    int _field18;
    char _field19;
    char _field20;
    char _field21;
    unsigned long long _field22;
    unsigned long long _field23;
    unsigned long long _field24;
};

struct PBXIndexCppActions {
    void **_field1;
    struct Cpp *_field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    struct dispatch_queue_s *_field7;
};

struct Place;

struct RefactoringCppActions {
    void **_field1;
    struct Cpp *_field2;
    char _field3;
    int _field4;
    char _field5;
    id _field6;
    id _field7;
    id _field8;
    int _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
    id _field15;
};

struct Resword;

struct Source;

struct StringTable {
    struct _NSZone *_field1;
    char _field2;
    struct _Body _field3;
    struct _Body *_field4;
    struct _RBTree _field5[10009];
    struct _NodeList _field6;
};

struct Token;

struct TokenBuffer;

struct TokenList;

struct TokenStream;

struct TrustedSet;

struct _Body {
    unsigned int _field1;
    struct _Body *_field2;
    char _field3[8000];
};

struct _HeaderMap;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _NSZone;

struct _NXStream {
    unsigned int _field1;
    char *_field2;
    char *_field3;
    int _field4;
    int _field5;
    long long _field6;
    int _field7;
    int _field8;
    struct stream_functions *_field9;
    void *_field10;
};

struct _NodeList {
    int _field1;
    struct _NodeList *_field2;
    struct _NodeList *_field3;
    struct _RBNode _field4[1000];
};

struct _PBXCStrPoolHashBucket {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _PBXCStringStorageHashBucket {
    unsigned int _field1;
    unsigned int :8;
    unsigned int :8;
    unsigned int :4;
    unsigned int :4;
    unsigned int :8;
};

struct _RBNode {
    char *_field1;
    struct _RBNode *_field2[2];
    int _field3;
};

struct _RBTree {
    struct _RBNode *_field1;
    unsigned int _field2;
};

struct _XCAttributeRunBaseFlags {
    unsigned int attributesAreObjects:1;
    unsigned int attributesShouldBeAutoreleased:1;
    unsigned int coalescesAttributes:1;
    unsigned int unassigned:29;
};

struct _XCDiffContextFlags {
    unsigned int defaultDiffMergeDirection:3;
    unsigned int ignoresCase:1;
    unsigned int ignoresLeadingSpaces:1;
    unsigned int ignoresSpacesInRuns:1;
    unsigned int ignoresTrailingSpaces:1;
    unsigned int ignoresLineEnds:1;
    unsigned int ignoresCommon:1;
    unsigned int preservesMergeDirection:1;
    unsigned int userChangedIgnoresCase:1;
    unsigned int userChangedIgnoresLeadingSpaces:1;
    unsigned int userChangedIgnoresSpacesInRuns:1;
    unsigned int userChangedIgnoresTrailingSpaces:1;
    unsigned int userChangedIgnoresLineEnds:1;
    unsigned int userChangedAutoupdatingDelay:1;
    unsigned int userChangedNumberOfContextTokens:1;
    unsigned int needsUpdateDiffDescriptors:1;
    unsigned int delegateRespondsToWillChangeDiffDescriptors:1;
    unsigned int delegateRespondsToDidChangeDiffDescriptors:1;
    unsigned int delegateRespondsToDidAddDiffDescriptors:1;
    unsigned int delegateRespondsToWillRemoveDiffDescriptors:1;
    unsigned int RESERVED:10;
};

struct _XCDiffDescriptorFlags {
    unsigned int descriptorType:2;
    unsigned int mergeDirection:3;
    unsigned int RESERVED:27;
};

struct _XCDiffMergeDataSourceFlags {
    unsigned int needsUpdate:1;
    unsigned int RESERVED:31;
};

struct _XCDiffToken {
    struct _NSRange _field1;
    unsigned long long _field2;
    int _field3;
};

struct _XCRefactoringLineInfo {
    struct _NSRange lineRange;
    unsigned long long startLineColumn;
    unsigned long long endLineColumn;
};

struct _XCRefactoringNibFileToolTaskFlags {
    unsigned int isOutputCompleted:1;
    unsigned int RESERVED:31;
};

struct _XCStringListNode {
    struct _XCStringListNode *_field1;
    unsigned int :24;
    unsigned int :1;
    unsigned int :7;
    char _field2[0];
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    void *_field9;
    void *_field10;
    void *_field11;
    void *_field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _pbxfileheader {
    struct _pbxfilerec {
        struct _pbxsymrec _field1;
        struct _pbxsymrec _field2;
    } _field1;
    struct _pbxfileinfo {
        unsigned int :2;
        unsigned int :14;
        unsigned char _field1;
        unsigned char _field2;
        unsigned int _field3;
        unsigned int :2;
        unsigned int :1;
        unsigned int :29;
        union _pbxsymbollocation _field4;
    } _field2;
};

struct _pbxpathentry {
    unsigned int _field1;
    unsigned int _field2;
};

struct _pbxsymrec {
    unsigned int :6;
    unsigned int :1;
    unsigned int :2;
    unsigned int :3;
    unsigned int :1;
    unsigned int :19;
    unsigned int _field1;
};

struct _pbxtypedesc {
    unsigned int :6;
    unsigned int :1;
    unsigned int :1;
    unsigned char _field1[7];
};

struct _projInfo {
    char _field1;
    char _field2;
    char _field3;
    char _field4;
    id _field5;
};

struct dispatch_queue_s;

struct fsid {
    int _field1[2];
};

struct sockaddr_un {
    unsigned char sun_len;
    unsigned char sun_family;
    char sun_path[104];
};

struct stat {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    struct timespec _field8;
    struct timespec _field9;
    struct timespec _field10;
    struct timespec _field11;
    long long _field12;
    long long _field13;
    int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    long long _field18[2];
};

struct statfs {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct fsid _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    char _field13[16];
    char _field14[1024];
    char _field15[1024];
    unsigned int _field16[8];
};

struct stream_functions;

struct timespec {
    long long _field1;
    long long _field2;
};

#if 0
// Names with conflicting types:
typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
} _pbxbtreeheader_01a06060;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
} _pbxbtreecursor_81b114c9;

typedef struct {
    unsigned int node;
    unsigned int entry;
    unsigned int depth;
    unsigned int value;
    unsigned int stamp;
} _pbxbtreecursor_23e470bf;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    void *_field4;
    unsigned long long _field5;
} _pbxbtreecursor_805e2d1e;

typedef struct {
    unsigned long long node;
    unsigned long long entry;
    unsigned long long depth;
    void *value;
    unsigned long long stamp;
} _pbxbtreecursor_4f04ce2b;

typedef struct {
    unsigned long long _field1;
    void *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
} _pbxbtreeheader_5892dcee;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    id _field8;
} CDStruct_026f2692;

typedef struct {
    unsigned long long hi;
    unsigned long long lo;
} CDStruct_7eef4560;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *bytes;
    unsigned long long offset;
    unsigned long long length;
    unsigned long long capacity;
} CDStruct_cdb8c6f3;

#pragma mark Named Unions

union _pbxsymbollocation {
    unsigned int rawBits;
    struct {
        unsigned int vectorRow:28;
        unsigned int arrayIndex:4;
    } location;
};

