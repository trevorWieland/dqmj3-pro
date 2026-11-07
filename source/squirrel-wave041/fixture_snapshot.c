#include "fixture.h"

#ifdef _WIN32
__declspec(dllexport)
#endif
SqPrototypeU32 fixture_snapshot041(SqPrototypeU32 *out,SqPrototypeU32 capacity)
{
    SqCaptureFixture041 *fixture=&capture_fixture041;
    SqPrototypeU32 at=fixture_snapshot038(out,capacity);
    if(fixture->variant<54)return at;
    out[at++]=0x041041;out[at++]=fixture->variant;out[at++]=fixture->cleanup;
    out[at++]=fixture->result;out[at++]=fixture->old_destination_frees;out[at++]=fixture->old_error_frees;
    out[at++]=fixture->events;
    for(SqPrototypeU32 index=0;index<fixture->events;index++)
        for(SqPrototypeU32 field=0;field<8;field++)out[at++]=fixture->event[index][field];
    SqPrefixObject012 error=fixture_vm020()->error;
    out[at++]=error.type;
    const SqString015 *text=error.type==0x08000010u?error.value.reference:0;
    out[at++]=text?(SqPrototypeU32)text->length:0;
    if(text)for(SqPrototypeI32 index=0;index<text->length;index++)out[at++]=(unsigned char)text->value[index];
    out[at++]=fixture->destination.type;
    out[at++]=fixture->destination.type&0x08000000u?sq_prefix_count(fixture->destination.value.reference):0;
    const SqWeakReference014 *weak=fixture->weak.type==0x08010000u?fixture->weak.value.reference:0;
    out[at++]=weak?weak->object.type:0;
    out[at++]=fixture->key_length;
    for(SqPrototypeU32 index=0;index<fixture->key_length;index++)out[at++]=(unsigned char)fixture->key[index];
    return at;
}
