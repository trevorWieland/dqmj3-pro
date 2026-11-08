#include "task062u.h"

void sdk_task_set_state062u(SdkTask062u *task, SdkWord062s state)
{
    task->state = (SdkByte062s)state;
    if (state == 5) {
        SdkTaskCompletion062u completion = task->completion;
        if (completion)
            completion(task, &task->capture);
    }
}

void sdk_task_complete062u(SdkTask062u *task)
{
    sdk_task_set_state062u(task, 5);
}

void sdk_task_state_four062u(SdkTask062u *task)
{
    sdk_task_set_state062u(task, 4);
}

void sdk_task_state_two062u(SdkTask062u *task)
{
    sdk_task_set_state062u(task, 2);
}

void sdk_task_state_three062u(SdkTask062u *task)
{
    sdk_task_set_state062u(task, 3);
}

void sdk_task_set_delay062u(SdkTask062u *task, SdkSigned062s delay)
{
    sdk_task_set_state062u(task, 1);
    task->delay = delay;
}

void sdk_task_dispatch062u(SdkTask062u *task)
{
    const SdkTaskMethods062u *methods =
        (const SdkTaskMethods062u *)task->reference.methods;
    methods->work(task);
}
