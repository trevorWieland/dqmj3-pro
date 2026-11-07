#include "table_helpers_fixture.h"

__declspec(dllimport) void *malloc(__SIZE_TYPE__ bytes);
__declspec(dllimport) void free(void *pointer);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) __attribute__((noreturn)) void ExitProcess(unsigned int status);

SqTable019 *fixture_original_initialize019(SqTable019 *a,SqPrefixState012 *b,SqPrototypeI32 c)
{(void)a;(void)b;(void)c;ExitProcess(95);}
SqPrototypeU32 fixture_original_new_slot019(SqTable019 *a,const SqPrefixObject012 *b,const SqPrefixObject012 *c)
{(void)a;(void)b;(void)c;ExitProcess(95);}
SqPrototypeU32 fixture_original_set019(SqTable019 *a,const SqPrefixObject012 *b,const SqPrefixObject012 *c)
{(void)a;(void)b;(void)c;ExitProcess(95);}
SqPrototypeU32 fixture_original_get019(SqTable019 *a,const SqPrefixObject012 *b,SqPrefixObject012 *c)
{(void)a;(void)b;(void)c;ExitProcess(95);}
void *fixture_original_assign019(void *a,const void *b) {(void)a;(void)b;ExitProcess(95);}
void fixture_original_release019(SqTable019 *a) {(void)a;ExitProcess(95);}
SqString015 *fixture_original_string_create019(SqPrefixState012 *a,const SqStringByte015 *b,SqPrototypeI32 c)
{(void)a;(void)b;(void)c;ExitProcess(95);}
void fixture_original_string_release019(SqString015 *a) {(void)a;ExitProcess(95);}
SqWeakReference014 *fixture_original_weak_create019(SqPrototypePrefix011 *a,SqPrototypeU32 b)
{(void)a;(void)b;ExitProcess(95);}

void fixture_original_rehash021(SqTable019 *a,SqPrototypeU32 b){(void)a;(void)b;ExitProcess(95);}
SqPrototypeU32 fixture_original_delegate021(SqTable019 *a,SqTable019 *b){(void)a;(void)b;ExitProcess(95);}
void fixture_original_native_release021(SqNativeClosure013 *a){(void)a;ExitProcess(95);}
int _fltused;
static SqPrototypeU32 words[4096];

void mainCRTStartup(void)
{
    void *arena=malloc(0x40000);
    if(!arena || !fixture_table_bind019(arena,0x40000,&sq_table_vtable019,&sq_prototype_vtable011,
        &sq_native_closure_vtable013,&sq_script_closure_vtable017,&sq_weak_vtable014,&sq_string_vtable015,
        &sq_prototype_base_vtable011)) ExitProcess(96);
    static const SqPrototypeU32 cases[][3]={
        {0,0,0},
        {0,1,0},
        {0,4,0},
        {0,5,0},
        {0,9,0},
        {0,17,0},
        {0,32,0},
        {1,4,0},
        {1,4,1},
        {1,4,2},
        {1,8,0},
        {1,8,1},
        {1,8,2},
        {1,16,0},
        {1,16,1},
        {1,16,2},
        {2,8,3},
        {2,8,11},
        {2,4,0},
        {2,4,8},
        {2,4,3},
        {2,16,1},
        {3,4,0},
        {3,4,1},
        {3,4,2},
        {3,4,3},
        {2,8,43},
        {4,4,0},
        {4,8,1}
    };
    for(SqPrototypeU32 item=0;item<sizeof(cases)/sizeof(cases[0]);item++) {
#ifdef SQ_HELPER_ONLY_MODE
        if(cases[item][0]!=SQ_HELPER_ONLY_MODE || cases[item][1]!=SQ_HELPER_ONLY_REQUESTED || cases[item][2]!=SQ_HELPER_ONLY_FLAGS)continue;
#endif
        fixture_helpers_prepare021(cases[item][0],cases[item][1],cases[item][2]);
        fixture_helpers_run021(1);
        SqPrototypeU32 count=fixture_helpers_snapshot021(words,4096);
        if(!count)ExitProcess(97);
        printf("{\"mode\":%u,\"requested\":%u,\"flags\":%u,\"words\":[",cases[item][0],cases[item][1],cases[item][2]);
        for(SqPrototypeU32 index=0;index<count;index++)printf("%s%u",index?",":"",words[index]);
        printf("]}\n");
    }
    free(arena);
    ExitProcess(0);
}
