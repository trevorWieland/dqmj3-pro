#include "contract_fixture.h"
__declspec(dllimport) void *malloc(__SIZE_TYPE__);
__declspec(dllimport) void free(void*);
__declspec(dllimport) int printf(const char*,...);
__declspec(dllimport) __attribute__((noreturn)) void ExitProcess(unsigned int);
void fixture_original_register022(void *vm,SqNativeCallable013 function,SqPrototypeU32 count)
{(void)vm;(void)function;(void)count;ExitProcess(95);}
SqPrototypeU32 fixture_original_call022(void *vm,const SqPrefixObject012 *callable,SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 flag)
{(void)vm;(void)callable;(void)arguments;(void)base;(void)result;(void)flag;ExitProcess(95);}
SqPrototypeI32 fixture_original_array022(void *vm){(void)vm;ExitProcess(95);}
void *fixture_original_assign022(void *a,const void *b){(void)a;(void)b;ExitProcess(95);}
void fixture_original_push022(void *a,const SqPrefixObject012 *b){(void)a;(void)b;ExitProcess(95);}
SqWeakReference014 *fixture_original_weak022(SqPrototypePrefix011 *owner,SqPrototypeU32 type){(void)owner;(void)type;ExitProcess(95);}
void fixture_error_prepare022(SqPrototypeU32);
void fixture_error_call022(SqPrototypeU32);
void fixture_error_cleanup022(SqPrototypeU32);
SqPrototypeU32 fixture_error_snapshot022(SqPrototypeU32*,SqPrototypeU32);
void fixture_native_profile_prepare022(SqPrototypeU32);
void fixture_native_profile_call022(SqPrototypeU32);
SqPrototypeU32 fixture_native_profile_snapshot022(SqPrototypeU32*,SqPrototypeU32);
int _fltused;
static SqPrototypeU32 words[4096];
void mainCRTStartup(void)
{
    void *memory=malloc(0x40000);
    if(!fixture_bind022(memory,0x40000,&sq_prototype_vtable011,&sq_native_closure_vtable013,
        &sq_opaque_array_vtable012,&sq_prototype_base_vtable011))ExitProcess(96);
    const SqPrototypeU32 lengths[]={0,1,5,16};
    for(SqPrototypeU32 length=0;length<4;length++)for(SqPrototypeU32 captures=0;captures<3;captures++)
        for(SqPrototypeU32 flags=0;flags<4;flags++)for(SqPrototypeU32 cleanup=0;cleanup<2;cleanup++) {
            fixture_prepare022(lengths[length],captures,flags);fixture_register022(1);fixture_call022(1);
            if(cleanup)fixture_cleanup022(1);
            SqPrototypeU32 count=fixture_snapshot022(words,4096);
            if(!count)ExitProcess(97);
            printf("{\"length\":%u,\"captures\":%u,\"flags\":%u,\"cleanup\":%u,\"words\":[",lengths[length],captures,flags,cleanup);
            for(SqPrototypeU32 index=0;index<count;index++)printf("%s%u",index?",":"",words[index]);
            printf("]}\n");
        }
    const SqPrototypeU32 modes[]={1,2,3,4,5,6,7,10,11,12,13,14,15};
    const SqPrototypeU32 raw_flags[]={0,0x80000000u,0x7fc12345u,0xffffffffu};
    for(SqPrototypeU32 item=0;item<sizeof(modes)/sizeof(modes[0]);item++)for(SqPrototypeU32 flag=0;flag<4;flag++)
        for(SqPrototypeU32 cleanup=0;cleanup<2;cleanup++) {
            fixture_contract_prepare022(modes[item],raw_flags[flag]);fixture_register022(1);fixture_contract_call022(1);
            if(cleanup)fixture_contract_cleanup022(1);
            SqPrototypeU32 count=fixture_contract_snapshot022(words,4096);
            printf("{\"kind\":\"contract\",\"mode\":%u,\"raise_error\":%u,\"cleanup\":%u,\"words\":[",modes[item],raw_flags[flag],cleanup);
            for(SqPrototypeU32 index=0;index<count;index++)printf("%s%u",index?",":"",words[index]);
            printf("]}\n");
        }
    for(SqPrototypeU32 kind=0;kind<3;kind++)for(SqPrototypeU32 cleanup=0;cleanup<2;cleanup++) {
        fixture_error_prepare022(kind);fixture_register022(1);fixture_error_call022(1);
        if(cleanup)fixture_error_cleanup022(1);
        SqPrototypeU32 count=fixture_error_snapshot022(words,4096);
        printf("{\"kind\":\"error\",\"mode\":%u,\"cleanup\":%u,\"words\":[",kind,cleanup);
        for(SqPrototypeU32 index=0;index<count;index++)printf("%s%u",index?",":"",words[index]);
        printf("]}\n");
    }
    for(SqPrototypeU32 profile=0;profile<15;profile++)if(profile!=11)for(SqPrototypeU32 cleanup=0;cleanup<2;cleanup++) {
        fixture_native_profile_prepare022(profile);fixture_register022(1);fixture_native_profile_call022(1);
        if(cleanup)fixture_cleanup022(1);
        SqPrototypeU32 count=fixture_native_profile_snapshot022(words,4096);
        printf("{\"kind\":\"native_profile\",\"mode\":%u,\"cleanup\":%u,\"words\":[",profile,cleanup);
        for(SqPrototypeU32 index=0;index<count;index++)printf("%s%u",index?",":"",words[index]);
        printf("]}\n");
    }
    free(memory);ExitProcess(0);
}
