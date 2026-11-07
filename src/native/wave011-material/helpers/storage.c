#include "services.h"

static MaterialWord textures(MaterialWord counts) { return counts & 3; }
static MaterialWord transforms(MaterialWord counts) { return (counts >> 2) & 3; }
static MaterialWord generators(MaterialWord counts) { return (counts >> 4) & 3; }
static MaterialWord stages(MaterialWord counts) { return (counts >> 6) & 7; }
static MaterialWord projections(MaterialWord counts) { return (counts >> 13) & 3; }
static MaterialByte *alpha_data(Material *material)
{
    MaterialWord capacity = material->capacity;
    return material->storage + textures(capacity) * sizeof(MaterialTexture) +
        transforms(capacity) * sizeof(MaterialTransform) + generators(capacity) * sizeof(MaterialGenerator);
}
static MaterialByte *blend_data(Material *material)
{
    return alpha_data(material) + ((material->capacity >> 9) & 1) * 8;
}
static MaterialByte *projection_data(Material *material)
{
    MaterialWord counts = material->capacity;
    return blend_data(material) + ((counts >> 10) & 3) * 4 + stages(counts) * ((counts & 0x1000) ? 12 : 4);
}
static MaterialByte *shadow_data(Material *material)
{
    return projection_data(material) + projections(material->capacity) * sizeof(MaterialProjection);
}
MaterialWord material_storage_bytes(MaterialWord texture_count, MaterialWord transform_count, MaterialWord generator_count,
    MaterialWord stage_count, MaterialWord alpha, MaterialWord blends, MaterialWord projection_count,
    MaterialWord shadow, MaterialWord detailed)
{
    return texture_count * sizeof(MaterialTexture) + transform_count * sizeof(MaterialTransform) +
        generator_count * sizeof(MaterialGenerator) + stage_count * (detailed ? 12 : 4) +
        alpha * 8 + blends * 4 + projection_count * sizeof(MaterialProjection) + shadow * 8 + (detailed ? 28 : 0);
}
MaterialWord fn_0019fdf4(Material *material, MaterialWord texture_count, MaterialWord transform_count,
    MaterialWord generator_count, MaterialWord stage_count, MaterialWord alpha, MaterialWord blends,
    MaterialWord block14, MaterialWord projection_count, MaterialWord shadow, MaterialWord detailed)
{
    MaterialWord capacity = material->capacity;
    (void)block14;
    if (textures(capacity) >= texture_count && transforms(capacity) >= transform_count &&
        generators(capacity) >= generator_count && stages(capacity) >= stage_count &&
        ((capacity >> 9) & 1) >= alpha && ((capacity >> 10) & 3) >= blends &&
        ((capacity >> 12) & 1) == detailed && projections(capacity) >= projection_count &&
        ((capacity >> 15) & 1) >= shadow)
        return 1;
    if (material->storage) {
        fn_0019fb94(material->storage);
        material->storage = 0;
        material->capacity = material->used = 0;
    }
    MaterialWord bytes = material_storage_bytes(texture_count, transform_count, generator_count, stage_count,
        alpha, blends, projection_count, shadow, detailed);
    material->storage = fn_00194ee4(bytes, 4);
    if (!material->storage)
        return 0;
    material->capacity = (MaterialHalf)((texture_count & 3) | (transform_count & 3) << 2 |
        (generator_count & 3) << 4 | (stage_count & 7) << 6 | (alpha & 1) << 9 |
        (blends & 3) << 10 | (detailed & 1) << 12 | (projection_count & 3) << 13 | (shadow & 1) << 15);
    material->used = (MaterialHalf)((material->used & ~12u) | (material->capacity & 12));
    MaterialTransform *transform = (MaterialTransform *)(material->storage + textures(material->capacity) * sizeof(MaterialTexture));
    for (MaterialWord index = 0; index < transforms(material->capacity); ++index)
        transform[index] = (MaterialTransform){0, 0, 0, 1, 1};
    material->used = (MaterialHalf)((material->used & ~0x200u) | (material->capacity & 0x200));
    if (material->capacity & 0x200) {
        MaterialWord *data = (MaterialWord *)alpha_data(material);
        data[0] = 0x207;
        data[1] = 0;
    }
    material->used = (MaterialHalf)((material->used & ~0xc00u) | (material->capacity & 0xc00));
    if (material->capacity & 0xc00) {
        MaterialWord *blend = (MaterialWord *)blend_data(material);
        blend[0] = 0x50400;
        if (((material->capacity >> 10) & 3) == 2)
            blend[1] = 0x50400;
    }
    material->used = (MaterialHalf)((material->used & ~0x1000u) | (material->capacity & 0x1000));
    if (material->capacity & 0x1000) {
        MaterialDetailedHeader *header = (MaterialDetailedHeader *)(shadow_data(material) + ((material->capacity >> 15) & 1) * 8);
        *header = (MaterialDetailedHeader){0, {{0}, {0}, {0}, {0}, {0}}, 0};
    }
    material->used = (MaterialHalf)((material->used & ~0x8000u) | (material->capacity & 0x8000));
    if (material->capacity & 0x8000) {
        MaterialByte *shadow_bytes = shadow_data(material);
        shadow_bytes[0] = shadow_bytes[1] = shadow_bytes[2] = 0;
        for (MaterialWord index = 3; index < 7; ++index)
            shadow_bytes[index] = 255;
    }
    return 1;
}
