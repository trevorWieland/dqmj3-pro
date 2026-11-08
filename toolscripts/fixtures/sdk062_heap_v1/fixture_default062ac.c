#include "heap062ac.h"

const SdkByte062s heap_identity062ac = 0;
static void *current_thread;

static void *thread_owner(void)
{
    return current_thread;
}

static void wait_arbiter(_Atomic(SdkSigned062s) *address)
{
    (void)address;
    __builtin_trap();
}

static void signal_arbiter(_Atomic(SdkSigned062s) *address, SdkWord062s count)
{
    (void)address;
    (void)count;
    __builtin_trap();
}

void fixture_default_bind062ac(void *thread)
{
    current_thread = thread;
    sdk_environment062s.platform.thread_owner = thread_owner;
    sdk_environment062s.platform.wait_arbiter = wait_arbiter;
    sdk_environment062s.platform.signal_arbiter = signal_arbiter;
    sdk_environment062s.platform.allocate = 0;
    sdk_environment062s.platform.dispose = 0;
    heap_environment062ac.enabled = 1;
}

_Noreturn void heap_initialization_failure062ac(void)
{
    __builtin_trap();
}

void fixture_default_callback062ac(SdkWord062s enabled)
{
    sdk_environment062s.platform.allocate = enabled ? heap_default_bytes062ac : 0;
}

void fixture_default_disabled062ac(void)
{
    heap_environment062ac.enabled = 0;
    heap_environment062ac.heap = 0;
    heap_environment062ac.allocator = 0;
}
