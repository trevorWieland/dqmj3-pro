#ifndef DQMJ3_CAPTURE_FIXTURE041_H
#define DQMJ3_CAPTURE_FIXTURE041_H
#include "capture.h"
#include "../squirrel-wave038/fixture.h"

typedef struct SqCaptureFixture041 {
    SqPrototypeU32 variant,cleanup,result,terminal_kind,terminal_reason,fail_allocation;
    SqPrototypeU32 events,event[32][8],old_destination_frees,old_error_frees;
    SqPrefixObject012 destination,value,default_value,weak,old_error;
    SqPrototype011 *function,*old_destination,*old_error_function;
    SqScriptClosure017 *created;
    SqPrototypeU32 key_length,key_nul;
    SqStringByte015 key[81];
} SqCaptureFixture041;
extern SqCaptureFixture041 capture_fixture041;
void fixture_capture_prepare041(SqPrototypeU32 variant,SqPrototypeU32 cleanup);
void fixture_capture_run041(void);
void fixture_capture_event041(SqPrototypeU32 kind,SqPrototypeU32 a,SqPrototypeU32 b,SqPrototypeU32 c);
void fixture_capture_deallocate041(void *pointer,SqPrototypeU32 bytes);
void *fixture_class_reallocate_saved034(void *storage,SqPrototypeU32 previous,SqPrototypeU32 next);
void fixture_prepare038(SqPrototypeU32 variant,SqPrototypeU32 cleanup);
SqPrototypeU32 fixture_execute038(void);
SqPrototypeU32 fixture_snapshot038(SqPrototypeU32 *out,SqPrototypeU32 capacity);

typedef void (*SqTerminalSink041)(SqPrototypeU32);
#ifdef _WIN32
__declspec(dllexport)
#endif
void fixture_terminal_sink041(SqTerminalSink041 sink);
#endif
