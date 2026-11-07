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

void *fn_00194ee4(MaterialWord bytes, MaterialWord alignment)
{
    return material_heap->vtable->allocate(material_heap, bytes, alignment & 255);
}
void fn_0019fb94(void *allocation)
{
    material_heap->vtable->release(material_heap, allocation);
}
MaterialColor *fn_0017d8f8(MaterialColor *color)
{
    color->rgba = 0;
    return color;
}
void *fn_00101a1c(void *first, MaterialColor *(*construct)(MaterialColor *), MaterialWord stride, MaterialWord count)
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
void fn_00166824(MaterialWord *destination, const MaterialWord *source)
{
    MaterialWord second = source[1];
    destination[0] = source[0];
    destination[1] = second;
}
