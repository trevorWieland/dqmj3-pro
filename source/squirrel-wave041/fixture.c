#include "fixture.h"

SqCaptureFixture041 capture_fixture041;

void fixture_capture_event041(SqPrototypeU32 kind,SqPrototypeU32 a,SqPrototypeU32 b,SqPrototypeU32 c)
{
    SqCaptureFixture041 *fixture=&capture_fixture041;
    if(fixture->events==32)sq_class_failure030();
    SqPrototypeU32 *row=fixture->event[fixture->events++];
    row[0]=kind;row[1]=a;row[2]=b;row[3]=c;
    row[4]=fixture_vm020()->error.type;
    row[5]=fixture_vm020()->error.type&0x08000000u?sq_prefix_count(fixture_vm020()->error.value.reference):0;
    row[6]=fixture->destination.type;
    row[7]=fixture->destination.type&0x08000000u?sq_prefix_count(fixture->destination.value.reference):0;
}

void fixture_capture_deallocate041(void *pointer,SqPrototypeU32 bytes)
{
    (void)bytes;SqCaptureFixture041 *fixture=&capture_fixture041;
    if(pointer==fixture->old_error_function) {
        fixture->old_error_frees++;
        fixture_capture_event041(1,fixture->old_error_frees,0,0);
    }
    if(pointer==fixture->old_destination) {
        fixture->old_destination_frees++;
        SqScriptClosure017 *closure=fixture->destination.value.reference;fixture->created=closure;
        fixture_capture_event041(2,closure->reference.prefix.references,0,0);
        SqWeakReference014 *weak=fn_00233b7c(&closure->reference.prefix,0x08000100u);
        SqPrefixObject012 value={0x08010000u,{.reference=weak}};sq_prefix_assign(&fixture->weak,&value);
        if(fixture->variant==64)sq_prefix_assign(&fixture->destination,&fixture->value);
        else sq_prefix_clear(&fixture->destination);
    }
    if(pointer==fixture->created&&fixture->created&&fixture->weak.type==0x08010000u) {
        const SqWeakReference014 *weak=fixture->weak.value.reference;
        fixture_capture_event041(3,fixture->created->reference.prefix.references,weak->object.type,0);
    }
}

#ifdef _WIN32
__declspec(dllexport)
#endif
void fixture_prepare041(SqPrototypeU32 variant,SqPrototypeU32 cleanup)
{
    fixture_prepare038(variant<54?variant:0,cleanup);capture_fixture041=(SqCaptureFixture041){0};
    capture_fixture041.variant=variant;capture_fixture041.cleanup=cleanup;
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    capture_fixture041.destination=capture_fixture041.value=capture_fixture041.default_value=null;
    capture_fixture041.weak=capture_fixture041.old_error=null;
}

#ifdef _WIN32
__declspec(dllexport)
#endif
SqPrototypeU32 fixture_execute041(void)
{
    if(capture_fixture041.variant<54)return fixture_execute038();
    fixture_setup020();fixture_call_initialize023();fixture_execute_storage034();
    fixture_capture_run041();fixture_check_graph030();
    return !class_fixture030.fault&&!table_fixture019.fault;
}
