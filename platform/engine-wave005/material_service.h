#ifndef DQM_CONSTRUCTED_MATERIAL_SERVICE_H
#define DQM_CONSTRUCTED_MATERIAL_SERVICE_H

#include "../../src/native/wave011-material/helpers/services.h"
#include "scene_internal.h"

int material_memory_bind(void *memory, int bytes);
void material_memory_clear(void);
int material_memory_input(const unsigned char *data, int size);
int material_service_begin(const unsigned char *names, int bytes, const Scene *scene);
const Material *material_service_construct(const unsigned char *wire, int bytes, int index);
int material_service_count(void);
int material_service_bytes(void);
const Material *stage_sdk_material(int index);
unsigned int stage_material_value(int index, int field);
int stage_material_count(void);

#endif
