#include "task062u.h"
#define AT(type, field) __builtin_offsetof(type, field)

const SdkTaskMethods062u sdk_task_base_methods062u = {
    {0, 0}, sdk_task_dispatch062u, sdk_task_default_work062u, 0, 0, 0,
    sdk_task_complete062u, 0, 0
};
const SdkTaskMethods062u sdk_task_extended_methods062u = {
    {0, 0}, sdk_task_dispatch062u, 0, 0, 0, 0,
    sdk_task_complete062u, 0, 0
};
const SdkByte062s sdk_task_member_identity062u = 0;
const SdkWord062s fixture_task_layout062u[] = {
    sizeof(SdkTask062u), AT(SdkTask062u, next), AT(SdkTask062u, previous),
    AT(SdkTask062u, flag_0014), AT(SdkTask062u, completion),
    AT(SdkTask062u, capture), AT(SdkTask062u, flag_0020),
    AT(SdkTask062u, tag_0021), AT(SdkTask062u, state),
    AT(SdkTask062u, delay), AT(SdkTask062u, iterations),
    AT(SdkTask062u, unknown_002c), AT(SdkTask062u, clock_low),
    AT(SdkTask062u, clock_high), AT(SdkTask062u, flag_0038),
    AT(SdkTask062u, flag_0039), AT(SdkTask062u, repeat_delay),
    sizeof(SdkExtendedTask062u), AT(SdkExtendedTask062u, saved_clock_low),
    AT(SdkExtendedTask062u, saved_clock_high), AT(SdkExtendedTask062u, run_count),
    AT(SdkExtendedTask062u, member_methods), AT(SdkExtendedTask062u, member),
    AT(SdkExtendedTask062u, member_descriptor), AT(SdkExtendedTask062u, label),
    AT(SdkExtendedTask062u, unknown_005c), AT(SdkExtendedTask062u, budget_low),
    AT(SdkExtendedTask062u, budget_high)
};

typedef struct TaskTrace062u {
    SdkWord062s calls;
    SdkWord062s state;
    SdkWord062s tag;
    SdkSigned062s delay;
    SdkWord062s refs;
    SdkTask062u *receiver;
    SdkTaskCapture062u *capture_address;
    SdkWord062s change_state;
} TaskTrace062u;

void fixture_task_completion062u(SdkTask062u *task, SdkTaskCapture062u *capture)
{
    TaskTrace062u *trace = capture->pointer;
    trace->calls++;
    trace->state = task->state;
    trace->tag = task->tag_0021;
    trace->delay = task->delay;
    trace->refs = __c11_atomic_load(&task->reference.references,
        __ATOMIC_RELAXED);
    trace->receiver = task;
    trace->capture_address = capture;
    if (trace->change_state)
        task->state = 3;
}

const SdkWord062s fixture_task_trace_layout062u[] = {
    sizeof(TaskTrace062u), AT(TaskTrace062u, calls), AT(TaskTrace062u, state),
    AT(TaskTrace062u, tag), AT(TaskTrace062u, delay), AT(TaskTrace062u, refs),
    AT(TaskTrace062u, receiver), AT(TaskTrace062u, capture_address),
    AT(TaskTrace062u, change_state)
};
