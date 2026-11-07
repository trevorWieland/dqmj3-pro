#include "fixture_internal.h"

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

int _fltused;
static SqPrototypeU32 words[4096];

void mainCRTStartup(void)
{
    void *arena=malloc(0x40000);
    if(!arena || !fixture_table_bind019(arena,0x40000,&sq_table_vtable019,&sq_prototype_vtable011,
        &sq_native_closure_vtable013,&sq_script_closure_vtable017,&sq_weak_vtable014,&sq_string_vtable015,
        &sq_prototype_base_vtable011)) ExitProcess(96);
    for(SqPrototypeU32 value=0;value<6;value++) for(SqPrototypeU32 old=0;old<5;old++)
        for(SqPrototypeU32 query=0;query<4;query++) {
            fixture_table_prepare019(value,old,query);
            fixture_table_run019(1);
            SqPrototypeU32 count=fixture_table_snapshot019(words,4096);
            if(!count)ExitProcess(97);
            printf("{\"value_kind\":%u,\"old_kind\":%u,\"query_kind\":%u,\"words\":[",value,old,query);
            for(SqPrototypeU32 index=0;index<count;index++)printf("%s%u",index?",":"",words[index]);
            printf("]}\n");
        }
    free(arena);
    ExitProcess(0);
}
