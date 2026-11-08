#include "task062u.h"

SdkTask062u *sdk_task_initialize062u(SdkTask062u *task, SdkWord062s flag,
    const SdkByte062s *tag)
{
    __c11_atomic_store(&task->reference.references, 0, __ATOMIC_RELAXED);
    __c11_atomic_store(&task->reference.references, 1, __ATOMIC_RELAXED);
    task->reference.disposed = 0;
    task->next = 0;
    task->reference.methods = &sdk_task_base_methods062u.reference;
    task->previous = 0;
    task->capture.pointer = 0;
    task->flag_0020 = (SdkByte062s)flag;
    SdkByte062s value = *tag;
    task->tag_0021 = value;
    task->clock_low = 0;
    task->clock_high = 0;
    task->state = 0;
    task->delay = 0;
    task->iterations = 0;
    task->completion = 0;
    task->flag_0038 = 0;
    task->flag_0039 = 0;
    task->flag_0014 = 0;
    return task;
}

SdkExtendedTask062u *sdk_task_extended_initialize062u(SdkExtendedTask062u *task,
    SdkWord062s flag, const SdkByte062s *tag)
{
    sdk_task_initialize062u(&task->common, flag, tag);
    task->common.reference.methods = &sdk_task_extended_methods062u.reference;
    task->saved_clock_low = 0;
    task->saved_clock_high = 0;
    task->member_methods = &sdk_task_member_identity062u;
    task->member = 0;
    task->member_descriptor = 0;
    task->label = 0;
    task->run_count = 0;
    task->budget_low = 0;
    task->budget_high = 0;
    return task;
}
