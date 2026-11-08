#include "construction072_source_fixture.c"

static unsigned int construction_dependency_results072[22];

void effect_construction_fixture_dependencies072(void)
{
    ConstructionFixture072 *fixture = &construction_fixture072;
    unsigned int *result = construction_dependency_results072;
    EffectQueueMutex067 mutex = {7, fixture->workspace[0], 9};
    effect_file_atomic_initialize072(&mutex);
    result[0] = mutex.kind;
    result[1] = mutex.owner == fixture->workspace[0];
    result[2] = mutex.depth;
    result[3] = effect_file_cached_service072(&fixture->state);
    unsigned int selector[3] = {0, 0, 0}, handle = 0, received = 0;
    unsigned char empty = 0;
    result[4] = (unsigned int)effect_file_open_direct072(&fixture->state, &handle, 3,
        1, &empty, 1, 2, selector, 12, 1, 0);
    result[5] = (unsigned int)effect_file_read_ipc072(&fixture->state, &handle, &received,
        0, result + 7, 40);
    result[6] = received;
    int priority = 0;
    result[17] = (unsigned int)effect_file_priority_ipc072(&fixture->state, &fixture->state.service_handle, &priority);
    result[18] = (unsigned int)priority;
    EffectFileIpc069 message = {0x08080000, 0};
    result[19] = (unsigned int)construction_close_message072(fixture, handle, &message);
    result[20] = message.header;
    result[21] = (unsigned int)construction_close072(fixture, handle);
}

const unsigned int *effect_construction_fixture_dependency_results072(void)
{
    return construction_dependency_results072;
}
