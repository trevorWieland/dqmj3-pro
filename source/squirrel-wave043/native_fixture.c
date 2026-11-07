#include "fixture.h"
#include "fixture_cases.h"
__declspec(dllimport) void *malloc(__SIZE_TYPE__);
__declspec(dllimport) void free(void*);
__declspec(dllimport) int printf(const char*,...);
__declspec(dllimport) __attribute__((noreturn)) void ExitProcess(unsigned int);
SqPrototypeU32 fixture_original_execute028(void*a,const SqPrefixObject012*b,SqPrototypeI32 c,SqPrototypeI32 d,SqPrototypeI32 e,SqPrefixObject012*f,SqPrototypeU32 g,SqPrototypeI32 h){(void)a;(void)b;(void)c;(void)d;(void)e;(void)f;(void)g;(void)h;ExitProcess(95);}
SqPrototypeU32 fixture_original_call028(void*a,const SqPrefixObject012*b,SqPrototypeI32 c,SqPrototypeI32 d,SqPrefixObject012*e,SqPrototypeU32 f){(void)a;(void)b;(void)c;(void)d;(void)e;(void)f;ExitProcess(95);}
void fixture_original_register028(void*a,SqNativeCallable013 b,SqPrototypeU32 c){(void)a;(void)b;(void)c;ExitProcess(95);}
SqPrototypeI32 fixture_original_array028(void*a){(void)a;ExitProcess(95);}
void *fixture_original_assign028(void*a,const void*b){(void)a;(void)b;ExitProcess(95);}
SqString015 *fixture_original_string031(SqPrefixState012*a,const SqStringByte015*b,SqPrototypeI32 c){(void)a;(void)b;(void)c;ExitProcess(95);}
void fixture_original_push039(void*a,const SqPrefixObject012*b){(void)a;(void)b;ExitProcess(95);}
SqWeakReference014 *fixture_original_weak039(SqPrototypePrefix011*a,SqPrototypeU32 b){(void)a;(void)b;ExitProcess(95);}
SqClass030 *fixture_original_class_init039(SqClass030*a,SqPrefixState012*b,SqClass030*c){(void)a;(void)b;(void)c;ExitProcess(95);}
_Bool fixture_original_class_slot039(SqClass030*a,SqPrefixState012*b,const SqPrefixObject012*c,const SqPrefixObject012*d,SqPrototypeU32 e){(void)a;(void)b;(void)c;(void)d;(void)e;ExitProcess(95);}
SqClassInstance030 *fixture_original_instance039(SqClass030*a){(void)a;ExitProcess(95);}
SqPrototypeI32 fixture_original_string_next043(SqString015*a,const SqPrefixObject012*b,SqPrefixObject012*c,SqPrefixObject012*d){(void)a;(void)b;(void)c;(void)d;ExitProcess(95);}
SqPrototypeI32 fixture_original_table_next043(SqTable019*a,SqPrototypeU32 b,const SqPrefixObject012*c,SqPrefixObject012*d,SqPrefixObject012*e){(void)a;(void)b;(void)c;(void)d;(void)e;ExitProcess(95);}
SqPrototypeI32 fixture_original_class_next043(SqClass030*a,const SqPrefixObject012*b,SqPrefixObject012*c,SqPrefixObject012*d){(void)a;(void)b;(void)c;(void)d;ExitProcess(95);}
_Bool fixture_original_table_set043(SqTable019*a,const SqPrefixObject012*b,const SqPrefixObject012*c){(void)a;(void)b;(void)c;ExitProcess(95);}
SqTable019 *fixture_original_table_init043(SqTable019*a,SqPrefixState012*b,SqPrototypeI32 c){(void)a;(void)b;(void)c;ExitProcess(95);}
_Bool fixture_original_table_slot043(SqTable019*a,const SqPrefixObject012*b,const SqPrefixObject012*c){(void)a;(void)b;(void)c;ExitProcess(95);}
int _fltused;
static SqPrototypeU32 words[8192];
void mainCRTStartup(void)
{
    void *memory=malloc(0x100000);if(!fixture_bind028(memory,0x100000))ExitProcess(96);
    for(SqPrototypeU32 item=0;item<sizeof(execute_cases028)/sizeof(execute_cases028[0]);item++) {
        SqExecuteCase028 c=execute_cases028[item];fixture_prepare043(c.mode,c.value,c.flags,1);fixture_run043(c.cleanup);
        SqPrototypeU32 count=fixture_snapshot043(words,8192);
        printf("{\"mode\":%u,\"value\":%d,\"flags\":%u,\"cleanup\":%u,\"words\":[",c.mode,c.value,c.flags,c.cleanup);
        for(SqPrototypeU32 i=0;i<count;i++)printf("%s%u",i?",":"",words[i]);printf("]}\n");
    }
    free(memory);ExitProcess(0);
}
