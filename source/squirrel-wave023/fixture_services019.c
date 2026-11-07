#define sq_string_allocate_value015 fixture_allocate_string019_saved
#define sq_table_deallocate019 fixture_table_deallocate019_saved
#define sq_deallocate fixture_deallocate019_saved
#include "../squirrel-wave019/fixture_services.c"
#undef sq_string_allocate_value015
#undef sq_table_deallocate019
#undef sq_deallocate
#include "fixture_internal.h"

SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes)
{
    if (fixture_allocating023) {
        fixture_allocating023 = 0;
        fixture_event020(8, fixture_prototype019(1)->reference.references, 0);
        sq_prefix_clear(fixture_destination019());
    }
    return fixture_allocate_string019_saved(bytes);
}

void sq_table_deallocate019(void *owner, SqPrototypeU32 bytes)
{
    if (owner == table_fixture019.memory + 0x1d000 || owner == table_fixture019.memory + 0x1d800) {
        fixture_call_deallocate023(owner, bytes);
        return;
    }
    if (owner == fixture_table_at020(0x9100)) {
        if (bytes != sizeof(SqTable019)) table_fixture019.fault = 23;
        fixture_event020(7, 201, bytes == sizeof(SqTable019));
        table_fixture019.frees++;
        return;
    }
    fixture_table_deallocate019_saved(owner, bytes);
}

void sq_deallocate(void *owner, SqU32 bytes)
{
    if (owner == table_fixture019.memory + 0x1d000 || owner == table_fixture019.memory + 0x1d800)
        fixture_call_deallocate023(owner, bytes);
    else fixture_deallocate019_saved(owner, bytes);
}
