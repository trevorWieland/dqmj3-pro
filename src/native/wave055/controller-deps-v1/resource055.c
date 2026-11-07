#include "resource055.h"

StateResourceIndex055 *state_resource_index055;

StateResource055 *state_resource_lookup055(StateWord055 index) {
    if (index >= 32u)
        return 0;
    StateResourceEntry055 *entry = state_resource_index055->entries[index];
    return entry ? entry->resource : 0;
}
