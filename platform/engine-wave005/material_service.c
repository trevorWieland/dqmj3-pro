#include "material_service.h"

static MaterialByte *arena;
static unsigned int capacity, used;
static Material objects[32];
static MaterialTextureResource resources[16];
static const char *resource_names[16];
static unsigned int resource_count, object_count;
static MaterialResolver resolver;
static MaterialContext context;
static MaterialAccessor accessor;

static unsigned int word(const unsigned char *p) { return p[0] | (unsigned int)p[1] << 8 | (unsigned int)p[2] << 16 | (unsigned int)p[3] << 24; }
static void *allocate(MaterialHeap *heap, MaterialWord bytes, MaterialWord alignment) {
    unsigned int start = (used + 3) & ~3u, i;
    if (!arena || alignment != 4 || !bytes || start > capacity || bytes > capacity - start) return 0;
    for (i = 0; i < bytes; ++i) arena[start + i] = 0;
    used = start + bytes;
    return arena + start;
}
static void release(MaterialHeap *heap, void *memory) { }
static MaterialTextureResource *lookup(MaterialAccessor *owner, const char *name) {
    unsigned int index;
    if (owner != &accessor) return 0;
    for (index = 0; index < resource_count; ++index) if (name == resource_names[index]) return &resources[index];
    return 0;
}
static const MaterialHeapVtable heap_vtable = {{0, 0}, allocate, release};
static MaterialHeap heap = {&heap_vtable};
static const MaterialAccessorVtable accessor_vtable = {{0, 0, 0, 0, 0}, lookup};

int material_memory_bind(void *memory, int bytes) {
    __UINTPTR_TYPE__ address = (__UINTPTR_TYPE__)memory;
    if (!memory || address % 4 || bytes < 16 || bytes > 1048576 || address + (unsigned int)bytes < address) return 0;
    arena = memory; capacity = (unsigned int)bytes; used = 0;
    return 1;
}
void material_memory_clear(void) { arena = 0; capacity = used = object_count = resource_count = 0; }
int material_memory_input(const unsigned char *data, int size) {
    __UINTPTR_TYPE__ begin = (__UINTPTR_TYPE__)data, allocation = (__UINTPTR_TYPE__)arena;
    if (!arena || !data || size < 0 || begin + (unsigned int)size < begin) return 0;
    return !(begin < allocation + capacity && allocation < begin + (unsigned int)size);
}

int material_service_begin(const unsigned char *names, int bytes, const Scene *scene) {
    unsigned char *copy;
    unsigned int count, index, j;
    object_count = resource_count = used = 0;
    if (!arena || !names || bytes < 12 || (count = word(names + 8)) != (unsigned int)scene->texture_count || !count || count > 16 || 12 + count * 4 > (unsigned int)bytes) return 0;
    copy = allocate(&heap, (unsigned int)bytes, 4);
    if (!copy) return 0;
    for (index = 0; index < (unsigned int)bytes; ++index) copy[index] = names[index];
    for (index = 0; index < count; ++index) {
        unsigned int offset = word(copy + 12 + index * 4), length = 0;
        MaterialTextureResource *resource = &resources[index];
        if (offset < count * 4 || offset >= (unsigned int)bytes - 12) return 0;
        while (offset + 12 + length < (unsigned int)bytes && copy[offset + 12 + length]) if (++length > 63) return 0;
        if (!length || offset + 12 + length >= (unsigned int)bytes || scene->textures[index].format < 0 || scene->textures[index].format > 13) return 0;
        resource_names[index] = (const char *)copy + 12 + offset;
        for (j = 0; j < index; ++j) if (resource_names[j] == resource_names[index]) return 0;
        resource->image = index + 1;
        resource->width = resource->originalWidth = (MaterialHalf)scene->textures[index].width;
        resource->height = resource->originalHeight = (MaterialHalf)scene->textures[index].height;
        resource->format = (MaterialByte)scene->textures[index].format;
        resource->layout = 0; resource->reserved = 0; resource->alternateImage = 0;
    }
    resource_count = count;
    accessor.vtable = &accessor_vtable;
    resolver.names = (const MaterialNames *)copy; resolver.reserved[0] = resolver.reserved[1] = 0; resolver.accessor = &accessor;
    context.primary = context.alternate = &resolver; context.usePrimary = context.reserved2a = context.flags = 0;
    material_set_heap(&heap);
    return 1;
}

const Material *material_service_construct(const unsigned char *wire, int bytes, int index) {
    MaterialByte *copy;
    Material *material;
    unsigned int flags, expected, i;
    if (!wire || bytes < 40 || index < 0 || index >= 32 || (unsigned int)index != object_count) return 0;
    flags = word(wire + 36);
    expected = flags == 0 ? 40 : flags == 0x15 ? 72 : flags == 0x8015 ? 92 : flags == 0x18802a ? 164 : 0;
    if (!expected || (unsigned int)bytes != expected) return 0;
    copy = allocate(&heap, expected, 4);
    if (!copy) return 0;
    for (i = 0; i < expected; ++i) copy[i] = wire[i];
    material = &objects[index];
    if (fn_00554a30(material, (const MaterialWire *)copy, 0, &context) != material || (flags && !material->storage)) return 0;
    ++object_count;
    return material;
}
int material_service_count(void) { return (int)object_count; }
int material_service_bytes(void) { return (int)used; }
const Material *stage_sdk_material(int index) { return index >= 0 && (unsigned int)index < object_count ? &objects[index] : (const Material *)0; }
