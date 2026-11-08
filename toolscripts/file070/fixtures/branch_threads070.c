typedef struct BranchThreadSlot070 {
    EffectQueueWorker067 *worker;
    void (*entry)(EffectQueueWorker067 *);
    void *thread;
    void *start;
    void *paused;
    void *resume;
    void *mutex;
    unsigned int identity;
    unsigned int creates;
    unsigned int joins;
    unsigned int closes;
    unsigned int sleeps;
    unsigned int exited;
    unsigned long long nanoseconds;
} BranchThreadSlot070;

typedef struct BranchFixture070 {
    BranchThreadSlot070 slots[2];
    QueueWinApi067 api;
    EffectQueueManager067 *managers[2];
    unsigned int manager_count;
    unsigned int native;
    unsigned int parent_identity;
    unsigned int cpu_identity;
    unsigned int cycles;
    unsigned int namespace_device[2];
    unsigned int namespace_flags[2];
    unsigned int returned;
    unsigned int finished;
    unsigned int mode;
    volatile unsigned int pause_marker;
} BranchFixture070;

static BranchFixture070 branch_fixture070;

__attribute__((noinline)) void effect_branch_fixture_sleep_yield070(unsigned int index) { branch_fixture070.pause_marker = index; __atomic_signal_fence(__ATOMIC_SEQ_CST); }
__attribute__((noinline)) void effect_branch_fixture_join_yield070(unsigned int index) { branch_fixture070.pause_marker = index; __atomic_signal_fence(__ATOMIC_SEQ_CST); }

static unsigned int branch_slot070(EffectQueueWorker067 *worker, unsigned int create)
{
    for (unsigned int index = 0; index < 2; ++index)
        if (branch_fixture070.slots[index].worker == worker) return index;
    if (create)
        for (unsigned int index = 0; index < 2; ++index)
            if (branch_fixture070.slots[index].worker == 0) {
                branch_fixture070.slots[index].worker = worker;
                return index;
            }
    __builtin_trap();
}

static const void *branch_identity070(void)
{
    BranchFixture070 *fixture = &branch_fixture070;
    if (!fixture->native)
        return fixture->cpu_identity < 2 ? &fixture->slots[fixture->cpu_identity].identity : &fixture->parent_identity;
    unsigned int identity = fixture->api.thread_id();
    if (identity == fixture->parent_identity) return &fixture->parent_identity;
    for (unsigned int index = 0; index < 2; ++index)
        if (fixture->slots[index].identity == identity) return &fixture->slots[index].identity;
    __builtin_trap();
}

static void *branch_allocate070(void *context, EffectQueueAllocation067 role, unsigned int logical, __SIZE_TYPE__ physical)
{
    if (context != &branch_fixture070) __builtin_trap();
    void *pointer = graph_allocate065(0x670100u + role, logical, physical, _Alignof(void *), 0);
    if (role == EFFECT_QUEUE_MANAGER067 && pointer != 0) {
        if (branch_fixture070.manager_count >= 2) __builtin_trap();
        branch_fixture070.managers[branch_fixture070.manager_count++] = pointer;
    }
    return pointer;
}

static void branch_release070(void *context, EffectQueueAllocation067 role, void *pointer, unsigned int logical, __SIZE_TYPE__ physical)
{
    if (context != &branch_fixture070) __builtin_trap();
    EffectGraphAllocationFixture065 *record = graph_fixture065.records + graph_slot065(pointer);
    if (record->role != 0x670100u + role || record->logical_bytes != logical || record->physical_bytes != physical) __builtin_trap();
    if (role == EFFECT_QUEUE_WORKER067 && branch_fixture070.native) {
        BranchThreadSlot070 *slot = branch_fixture070.slots + branch_slot070(pointer, 0);
        if (!slot->exited || !slot->closes || slot->thread || !branch_fixture070.api.close(slot->mutex)) __builtin_trap();
        slot->mutex = 0;
    }
    graph_release065(pointer, 0, 0);
}

static void branch_mutex_initialize070(void *context, EffectQueueMutex067 *mutex)
{
    if (context != &branch_fixture070) __builtin_trap();
    EffectQueueWorker067 *worker = (void *)((unsigned char *)mutex - __builtin_offsetof(EffectQueueWorker067, mutex));
    BranchThreadSlot070 *slot = branch_fixture070.slots + branch_slot070(worker, 1);
    mutex->kind = 1; mutex->owner = 0; mutex->depth = 0;
    if (branch_fixture070.native) {
        slot->mutex = branch_fixture070.api.create_mutex(0, 0, 0);
        if (!slot->mutex) __builtin_trap();
    }
}

static void branch_mutex_lock070(void *context, EffectQueueMutex067 *mutex)
{
    if (context != &branch_fixture070) __builtin_trap();
    EffectQueueWorker067 *worker = (void *)((unsigned char *)mutex - __builtin_offsetof(EffectQueueWorker067, mutex));
    BranchThreadSlot070 *slot = branch_fixture070.slots + branch_slot070(worker, 0);
    if (branch_fixture070.native && branch_fixture070.api.wait(slot->mutex, 0xffffffffu) != 0) __builtin_trap();
    const void *identity = branch_identity070();
    if (mutex->kind != 1 || (mutex->owner != 0 && mutex->owner != identity)) __builtin_trap();
    mutex->owner = identity; ++mutex->depth;
}

static void branch_mutex_unlock070(void *context, EffectQueueMutex067 *mutex)
{
    if (context != &branch_fixture070) __builtin_trap();
    EffectQueueWorker067 *worker = (void *)((unsigned char *)mutex - __builtin_offsetof(EffectQueueWorker067, mutex));
    BranchThreadSlot070 *slot = branch_fixture070.slots + branch_slot070(worker, 0);
    if (mutex->owner != branch_identity070() || !mutex->depth) __builtin_trap();
    if (--mutex->depth == 0) mutex->owner = 0;
    if (branch_fixture070.native && !branch_fixture070.api.release_mutex(slot->mutex)) __builtin_trap();
}

static unsigned int branch_thread_entry070(void *context)
{
    BranchThreadSlot070 *slot = context;
    if (branch_fixture070.native) {
        slot->identity = branch_fixture070.api.thread_id();
        if (!branch_fixture070.api.set_event(slot->paused) || branch_fixture070.api.wait(slot->start, 0xffffffffu) != 0) __builtin_trap();
    } else branch_fixture070.cpu_identity = (unsigned int)(slot - branch_fixture070.slots);
    slot->entry(slot->worker);
    slot->exited = 1;
    return 0;
}

static int branch_create070(void *context, EffectQueueWorker067 *worker, void (*entry)(EffectQueueWorker067 *), unsigned int stack, unsigned int priority, int processor)
{
    if (context != &branch_fixture070 || stack != 4096 || priority != 15 || processor != -2) __builtin_trap();
    unsigned int index = branch_slot070(worker, 0);
    BranchThreadSlot070 *slot = branch_fixture070.slots + index;
    if (slot->creates++) __builtin_trap();
    slot->entry = entry;
    if (branch_fixture070.native) {
        slot->start = branch_fixture070.api.create_event(0, 1, 0, 0);
        slot->paused = branch_fixture070.api.create_event(0, 0, 0, 0);
        slot->resume = branch_fixture070.api.create_event(0, 0, 0, 0);
        slot->thread = branch_fixture070.api.create_thread(0, 0, branch_thread_entry070, slot, 0, 0);
        if (!slot->start || !slot->paused || !slot->resume || !slot->thread || branch_fixture070.api.wait(slot->paused, 30000) != 0) __builtin_trap();
    }
    worker->thread_token = 0x6700400u + index;
    worker->joined = 0; worker->thread_flag_05 = 0;
    return 0;
}

static int branch_join070(void *context, EffectQueueWorker067 *worker)
{
    if (context != &branch_fixture070) __builtin_trap();
    unsigned int index = branch_slot070(worker, 0);
    BranchThreadSlot070 *slot = branch_fixture070.slots + index;
    if (worker->thread_token != 0x6700400u + index) __builtin_trap();
    ++slot->joins;
    if (branch_fixture070.native) {
        if (!branch_fixture070.api.set_event(slot->start) || !branch_fixture070.api.set_event(slot->resume)
            || branch_fixture070.api.wait(slot->thread, 30000) != 0) __builtin_trap();
    } else while (!slot->exited) effect_branch_fixture_join_yield070(index);
    return 0;
}

static void branch_close070(void *context, EffectQueueWorker067 *worker)
{
    if (context != &branch_fixture070) __builtin_trap();
    BranchThreadSlot070 *slot = branch_fixture070.slots + branch_slot070(worker, 0);
    if (!slot->exited || slot->closes) __builtin_trap();
    ++slot->closes;
    if (branch_fixture070.native && (!branch_fixture070.api.close(slot->thread) || !branch_fixture070.api.close(slot->start)
        || !branch_fixture070.api.close(slot->paused) || !branch_fixture070.api.close(slot->resume))) __builtin_trap();
    slot->thread = 0;
}

static void branch_sleep070(void *context, unsigned long long nanoseconds)
{
    if (context != &branch_fixture070) __builtin_trap();
    unsigned int index = 2;
    for (unsigned int slot = 0; slot < 2; ++slot)
        if (branch_identity070() == &branch_fixture070.slots[slot].identity) index = slot;
    if (index == 2) __builtin_trap();
    BranchThreadSlot070 *slot = branch_fixture070.slots + index;
    ++slot->sleeps; slot->nanoseconds = nanoseconds;
    if (branch_fixture070.native) {
        if (!branch_fixture070.api.set_event(slot->paused) || branch_fixture070.api.wait(slot->resume, 30000) != 0) __builtin_trap();
        branch_fixture070.api.sleep(((unsigned int)nanoseconds + 999999u) / 1000000u);
    } else effect_branch_fixture_sleep_yield070(index);
}

static void branch_fatal070(void *context) { (void)context; __builtin_trap(); }
static const EffectQueueServices067 branch_services070 = {&branch_fixture070, branch_allocate070, branch_release070,
    branch_mutex_initialize070, branch_mutex_lock070, branch_mutex_unlock070, branch_create070, branch_join070,
    branch_close070, branch_sleep070, branch_fatal070};

void effect_branch_fixture_context070(unsigned int index) { branch_fixture070.cpu_identity = index; }
unsigned int effect_branch_fixture_thread_entry070(unsigned int index)
{
    if (index >= 2) __builtin_trap();
    return branch_thread_entry070(branch_fixture070.slots + index);
}
unsigned int effect_branch_fixture_native_step070(unsigned int index)
{
    BranchThreadSlot070 *slot = branch_fixture070.slots + index;
    if (!branch_fixture070.native || index >= 2) __builtin_trap();
    unsigned int paused = slot->sleeps;
    if (!branch_fixture070.api.set_event(slot->start) || (paused && !branch_fixture070.api.set_event(slot->resume))) __builtin_trap();
    return branch_fixture070.api.wait(slot->paused, 30000);
}
__UINTPTR_TYPE__ effect_branch_fixture_slot070(unsigned int index, unsigned int field)
{
    if (index >= 2) __builtin_trap();
    BranchThreadSlot070 *slot = branch_fixture070.slots + index;
    switch (field) {
    case 0: return (__UINTPTR_TYPE__)slot->worker;
    case 1: return slot->creates; case 2: return slot->joins; case 3: return slot->closes;
    case 4: return slot->sleeps; case 5: return slot->exited; case 6: return (__UINTPTR_TYPE__)slot->thread;
    case 7: return (__UINTPTR_TYPE__)slot->mutex;
    }
    __builtin_trap();
}
