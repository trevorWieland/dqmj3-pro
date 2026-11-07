#ifndef DQMJ3_WAVE011_MATERIAL_SERVICES_H
#define DQMJ3_WAVE011_MATERIAL_SERVICES_H

#include "../material.h"

struct MaterialTextureResource {
    MaterialWord image;
    MaterialHalf width, height;
    MaterialByte format, layout;
    MaterialHalf reserved;
    MaterialHalf originalWidth, originalHeight;
    MaterialWord alternateImage;
};
struct MaterialVtable { MaterialWord componentIdentity; };
typedef struct MaterialHeap MaterialHeap;
typedef struct MaterialHeapVtable {
    void (*reserved[2])(void);
    void *(*allocate)(MaterialHeap *, MaterialWord, MaterialWord);
    void (*release)(MaterialHeap *, void *);
} MaterialHeapVtable;
struct MaterialHeap { const MaterialHeapVtable *vtable; };

extern MaterialHeap *material_heap;
void material_set_heap(MaterialHeap *heap);
MaterialWord material_abi(MaterialWord field);
void *fn_00194ee4(MaterialWord bytes, MaterialWord alignment);
void fn_0019fb94(void *allocation);
void fn_0019fbd8(MaterialTexture *texture);
MaterialWord material_storage_bytes(MaterialWord textures, MaterialWord transforms, MaterialWord generators,
    MaterialWord stages, MaterialWord alpha, MaterialWord blends, MaterialWord projections,
    MaterialWord shadow, MaterialWord detailed);

_Static_assert(_Alignof(MaterialGenerator) == 4, "component generator alignment");
_Static_assert(sizeof(MaterialGenerator) == sizeof(void *) + 4, "component generator stride");
_Static_assert(__builtin_offsetof(Material, storage) == sizeof(void *) + 116, "component object pointers");

#endif
