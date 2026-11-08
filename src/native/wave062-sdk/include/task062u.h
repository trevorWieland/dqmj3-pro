#ifndef TASK062U_H
#define TASK062U_H
#include "object062t.h"

typedef struct SdkTask062u SdkTask062u;
typedef struct SdkExtendedTask062u SdkExtendedTask062u;
typedef __INTPTR_TYPE__ SdkOffset062u;
typedef union SdkTaskCapture062u {
    SdkWord062s bits;
    void *pointer;
} SdkTaskCapture062u;
typedef void (*SdkTaskCompletion062u)(SdkTask062u *, SdkTaskCapture062u *);
typedef struct SdkTaskMethods062u {
    SdkReferenceMethods062t reference;
    void (*dispatch)(SdkTask062u *);
    void (*work)(SdkTask062u *);
    void (*unknown_0010)(SdkTask062u *);
    void (*prepare)(SdkTask062u *, SdkWord062s);
    void (*unknown_0018)(SdkTask062u *);
    void (*complete)(SdkTask062u *);
    SdkWord062s (*query)(SdkTask062u *);
    void (*unknown_0024)(SdkTask062u *);
} SdkTaskMethods062u;
struct SdkTask062u {
    SdkReference062t reference;
    SdkTask062u *next;
    SdkTask062u *previous;
    SdkByte062s flag_0014;
    SdkTaskCompletion062u completion;
    SdkTaskCapture062u capture;
    SdkByte062s flag_0020;
    SdkByte062s tag_0021;
    SdkByte062s state;
    SdkSigned062s delay;
    SdkWord062s iterations;
    SdkWord062s unknown_002c;
    SdkWord062s clock_low;
    SdkWord062s clock_high;
    SdkByte062s flag_0038;
    SdkByte062s flag_0039;
    SdkSigned062s repeat_delay;
};
typedef void (*SdkTaskMember062u)(SdkExtendedTask062u *);
struct SdkExtendedTask062u {
    SdkTask062u common;
    SdkWord062s saved_clock_low;
    SdkWord062s saved_clock_high;
    SdkWord062s run_count;
    const void *member_methods;
    SdkTaskMember062u member;
    SdkOffset062u member_descriptor;
    const void *label;
    SdkWord062s unknown_005c;
    SdkWord062s budget_low;
    SdkWord062s budget_high;
};
extern const SdkTaskMethods062u sdk_task_base_methods062u;
extern const SdkTaskMethods062u sdk_task_extended_methods062u;
extern const SdkByte062s sdk_task_member_identity062u;
SdkTask062u *sdk_task_initialize062u(SdkTask062u *, SdkWord062s,
    const SdkByte062s *);
SdkExtendedTask062u *sdk_task_extended_initialize062u(SdkExtendedTask062u *,
    SdkWord062s, const SdkByte062s *);
void sdk_task_set_state062u(SdkTask062u *, SdkWord062s);
void sdk_task_complete062u(SdkTask062u *);
void sdk_task_state_four062u(SdkTask062u *);
void sdk_task_state_two062u(SdkTask062u *);
void sdk_task_state_three062u(SdkTask062u *);
void sdk_task_set_delay062u(SdkTask062u *, SdkSigned062s);
void sdk_task_dispatch062u(SdkTask062u *);
void sdk_task_default_work062u(SdkTask062u *);
void sdk_runtime_code062u(SdkWord062s, void *);
#endif
