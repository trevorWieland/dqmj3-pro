#include "services.h"


#if defined(_WIN32)
int _fltused = 0;
#endif

const MaterialVtable material_vtable = {0x4d41544c};
MaterialHeap *material_heap __attribute__((section(".material_heap"))) = 0;

void material_set_heap(MaterialHeap *heap) { material_heap = heap; }

MaterialWord material_abi(MaterialWord field)
{
    const MaterialWord values[] = {sizeof(Material), sizeof(MaterialGenerator), _Alignof(MaterialGenerator),
        __builtin_offsetof(Material, storage), __builtin_offsetof(Material, wire),
        __builtin_offsetof(MaterialContext, flags), sizeof(MaterialTextureResource)};
    return field < sizeof(values) / sizeof(values[0]) ? values[field] : 0;
}

/* material_allocate -- 0x00194ee4, 32 bytes, ARM, 30 call sites, draft.
 *
 * Allocates `bytes` from the bound material heap through its allocate operation,
 * forwarding the low byte of `alignment`.
 *
 * Evidence: the reconstructed body against MaterialHeap; the same heap object is
 * released by material_release below.
 */
void *material_allocate(MaterialWord bytes, MaterialWord alignment)
{
    return material_heap->vtable->allocate(material_heap, bytes, alignment & 255);
}
/* material_release -- 0x0019fb94, 24 bytes, ARM, 32 call sites, draft.
 *
 * Releases an allocation through the bound material heap's release operation.
 */
void material_release(void *allocation)
{
    material_heap->vtable->release(material_heap, allocation);
}
MaterialColor *fn_0017d8f8(MaterialColor *color)
{
    color->rgba = 0;
    return color;
}
/* material_construct_elements -- 0x00101a1c, 34 bytes, Thumb, 266 call sites, draft.
 *
 * Calls construct(element) for `count` elements starting at `first`, stepping
 * `stride` bytes: the array-construction loop the material code uses for its
 * colour runs.
 *
 * Evidence: the reconstructed body; the call sites pass a stack or material
 * buffer, a constructor and a fixed stride.
 */
void *material_construct_elements(void *first, MaterialColor *(*construct)(MaterialColor *), MaterialWord stride, MaterialWord count)
{
    MaterialByte *element = first;
    for (MaterialWord index = 0; index < count; ++index, element += stride)
        construct((MaterialColor *)element);
    return first;
}
void fn_005549f0(Material *material)
{
    material->colors[0].rgba = 0;
    material->colors[1].rgba = 0xffffffff;
    material->capacity = 0;
    material->used = 0;
    material->wire = 0;
    material->flags = 0;
    material->storage = 0;
}
/* material_word_pair_assign -- 0x00166824, 20 bytes, ARM, 145 call sites, draft.
 *
 * Copies two consecutive material words (8 bytes) from source to destination.
 * The second word is read before the first is written, so the pair may overlap.
 */
void material_word_pair_assign(MaterialWord *destination, const MaterialWord *source)
{
    MaterialWord second = source[1];
    destination[0] = source[0];
    destination[1] = second;
}
