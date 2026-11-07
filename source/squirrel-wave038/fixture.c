#include "fixture.h"

SqCaptureFixture038 capture_fixture038;

#ifdef _WIN32
__declspec(dllexport)
#endif
void fixture_prepare038(SqPrototypeU32 variant,SqPrototypeU32 cleanup)
{
    fixture_prepare034(0,cleanup);capture_fixture038=(SqCaptureFixture038){0};
    capture_fixture038.variant=variant;capture_fixture038.cleanup=cleanup;
    SqPrefixObject012 null={0x01000001u,{.reference=0}};
    capture_fixture038.parent=capture_fixture038.child=capture_fixture038.result_value=null;
    capture_fixture038.value=capture_fixture038.default_value=capture_fixture038.anchor=null;
}

#ifdef _WIN32
__declspec(dllexport)
#endif
SqPrototypeU32 fixture_execute038(void)
{
    fixture_setup020();fixture_call_initialize023();fixture_capture_program038();
    fixture_check_graph030();
    return capture_fixture038.result&&!class_fixture030.fault&&!table_fixture019.fault;
}
