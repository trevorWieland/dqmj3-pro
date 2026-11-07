#ifndef DQMJ3_STORAGE_FIXTURE055_H
#define DQMJ3_STORAGE_FIXTURE055_H
#include "resource_view055.h"

typedef struct StateStorageObservation055 {
    StateWord055 arguments[4];
    StateResource055 *observed_resource;
    StateWord055 flags;
    StateWord055 name;
    StateWord055 last_delta_bits;
    const StateWord055 *storage[6];
    void *returned;
} StateStorageObservation055;

extern STATE_API055 StateWord055 *state_storage_begin055;
extern STATE_API055 StateWord055 *state_storage_end055;
extern STATE_API055 StateWord055 *state_storage_cursor055;
extern STATE_API055 StateResource055 *state_storage_observer055;
extern STATE_API055 StateStorageObservation055 state_storage_observations055[64];
extern STATE_API055 StateWord055 state_storage_calls055;
extern STATE_API055 const unsigned char *state_storage_context_bytes055;
extern STATE_API055 StateWord055 state_storage_context_observations055[64];
STATE_API055 void *state_storage_fixture055(StateWord055 flags,StateWord055 alignment,StateWord055 reserved,StateWord055 bytes);
STATE_API055 const StateWord055 *state_storage_layout055(void);

#endif
