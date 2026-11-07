#include "fixture.h"
#include "fixture_cases.h"
__declspec(dllimport) void *malloc(__SIZE_TYPE__);
__declspec(dllimport) void free(void*);
__declspec(dllimport) int printf(const char*,...);
__declspec(dllimport) __attribute__((noreturn)) void ExitProcess(unsigned int);
void fixture_original_type_error025(void*a,SqPrototypeI32 b,SqPrototypeI32 c,SqPrototypeU32 d){(void)a;(void)b;(void)c;(void)d;ExitProcess(95);}
SqString015 *fixture_original_string025(SqPrefixState012*a,const SqStringByte015*b,SqPrototypeI32 c){(void)a;(void)b;(void)c;ExitProcess(95);}
void *fixture_original_assign025(void*a,const void*b){(void)a;(void)b;ExitProcess(95);}
SqWeakReference014 *fixture_original_weak025(SqPrototypePrefix011*a,SqPrototypeU32 b){(void)a;(void)b;ExitProcess(95);}
void fixture_original_register025(void*a,SqNativeCallable013 b,SqPrototypeU32 c){(void)a;(void)b;(void)c;ExitProcess(95);}
SqPrototypeU32 fixture_original_call025(void*a,const SqPrefixObject012*b,SqPrototypeI32 c,SqPrototypeI32 d,SqPrefixObject012*e,SqPrototypeU32 f){(void)a;(void)b;(void)c;(void)d;(void)e;(void)f;ExitProcess(95);}
int _fltused;
static SqPrototypeU32 words[8192];
void mainCRTStartup(void)
{
    void *memory=malloc(0x100000);if(!fixture_bind025(memory,0x100000))ExitProcess(96);
    for(SqPrototypeU32 item=0;item<sizeof(type_cases025)/sizeof(type_cases025[0]);item++) {
        SqTypeCase025 c=type_cases025[item];fixture_prepare025(c.index,c.mask,c.type,c.flags,1);fixture_run025(c.cleanup);
        SqPrototypeU32 count=fixture_snapshot025(words,8192);
        printf("{\"index\":%d,\"mask\":%u,\"type\":%u,\"flags\":%u,\"cleanup\":%u,\"words\":[",c.index,c.mask,c.type,c.flags,c.cleanup);
        for(SqPrototypeU32 i=0;i<count;i++)printf("%s%u",i?",":"",words[i]);printf("]}\n");
    }
    free(memory);ExitProcess(0);
}
