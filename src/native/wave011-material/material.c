#include "material.h"

static unsigned int texture_count(unsigned int counts) { return counts & 3; }
static unsigned int transform_count(unsigned int counts) { return (counts >> 2) & 3; }
static unsigned int generator_count(unsigned int counts) { return (counts >> 4) & 3; }
static unsigned int stage_count(unsigned int counts) { return (counts >> 6) & 7; }
static unsigned int projection_count(unsigned int counts) { return (counts >> 13) & 3; }
static unsigned int stage_size(unsigned int counts)
{
    return (counts & 0x1000) ? sizeof(MaterialDetailedStage) : sizeof(MaterialWord);
}
static MaterialTexture *textures(Material *material) { return (MaterialTexture *)material->storage; }
static MaterialTransform *transforms(Material *material)
{
    return (MaterialTransform *)(textures(material) + texture_count(material->capacity));
}
static MaterialGenerator *generators(Material *material)
{
    return (MaterialGenerator *)(transforms(material) + transform_count(material->capacity));
}
static MaterialWord *alpha_compare(Material *material)
{
    return (MaterialWord *)(generators(material) + generator_count(material->capacity));
}
static MaterialWord *blend_modes(Material *material)
{
    return alpha_compare(material) + ((material->capacity >> 9) & 1) * 2;
}
static MaterialByte *stages(Material *material)
{
    return (MaterialByte *)(blend_modes(material) + ((material->capacity >> 10) & 3));
}
static MaterialProjection *projections(Material *material)
{
    return (MaterialProjection *)(stages(material) + stage_count(material->capacity) * stage_size(material->capacity));
}
static MaterialWord *font_shadow(Material *material)
{
    return (MaterialWord *)(projections(material) + projection_count(material->capacity));
}
static MaterialDetailedHeader *detailed_header(Material *material)
{
    return (MaterialDetailedHeader *)(font_shadow(material) + ((material->capacity >> 15) & 1) * 2);
}
static unsigned int limited_stages(unsigned int count) { return count > 6 ? 6 : count; }
static void use_count(Material *material, unsigned int count, unsigned int mask, unsigned int shift)
{
    material->used = (MaterialHalf)((material->used & ~mask) | (count << shift));
}
static void copy_words(MaterialWord *destination, const MaterialWord *source, unsigned int count)
{
    for (unsigned int index = 0; index < count; ++index)
        destination[index] = source[index];
}

Material *fn_00554a30(Material *material, const MaterialWire *wire, const MaterialWire *replacement,
    const MaterialContext *context)
{
    material->vtable = &material_vtable;
    void *(*volatile initialize_colors)(void *, MaterialColor *(*)(MaterialColor *), MaterialWord, MaterialWord) = material_construct_elements;
    initialize_colors(material->colors, fn_0017d8f8, sizeof(MaterialColor), 2);
    fn_005549f0(material);
    MaterialResolver *resolver = context->primary;
    const MaterialWire *color_wire = wire;
    if (replacement) {
        if (context->flags & 1)
            color_wire = replacement;
        else if (context->usePrimary == 0) {
            resolver = context->alternate;
            color_wire = replacement;
            wire = replacement;
        }
    }
    material->wire = wire;
    material->colors[0] = color_wire->colors[0];
    material->colors[1] = color_wire->colors[1];
    unsigned int flags = wire->flags;
    unsigned int texture_total = flags & 3;
    unsigned int transform_total = (flags >> 2) & 3;
    unsigned int generator_total = (flags >> 4) & 3;
    unsigned int simple_total = (flags >> 6) & 7;
    unsigned int projection_total = (flags >> 15) & 3;
    unsigned int detailed_total = (flags >> 20) & 7;
    unsigned int has_alpha = (flags >> 9) & 1;
    unsigned int has_blend = (flags >> 10) & 1;
    unsigned int has_blend2 = (flags >> 12) & 1;
    unsigned int has_block14 = (flags >> 14) & 1;
    unsigned int has_shadow = (flags >> 17) & 1;
    unsigned int has_detailed = (flags >> 19) & 1;
    const MaterialTextureReference *wire_textures = (const MaterialTextureReference *)(wire + 1);
    const MaterialTransform *wire_transforms = (const MaterialTransform *)(wire_textures + texture_total);
    const MaterialGeneratorWire *wire_generators = (const MaterialGeneratorWire *)(wire_transforms + transform_total);
    const MaterialWord *wire_simple = (const MaterialWord *)(wire_generators + generator_total);
    const MaterialWord *wire_alpha = wire_simple + simple_total;
    const MaterialWord *wire_blend = wire_alpha + has_alpha * 2;
    const MaterialWord *wire_blend2 = wire_blend + has_blend;
    const MaterialProjection *wire_projection = (const MaterialProjection *)(wire_blend2 + has_blend2 + has_block14 * 3);
    const MaterialWord *wire_shadow = (const MaterialWord *)(wire_projection + projection_total);
    const MaterialDetailedHeader *wire_header = (const MaterialDetailedHeader *)(wire_shadow + has_shadow * 2);
    const MaterialDetailedStage *wire_detailed = (const MaterialDetailedStage *)((const MaterialByte *)wire_header + has_detailed * sizeof(*wire_header));
    simple_total = limited_stages(simple_total);
    detailed_total = limited_stages(detailed_total);
    material->flags = (MaterialByte)((material->flags & ~4u) | (((flags >> 18) & 1) << 2));
    fn_0019fdf4(material, texture_total, transform_total, generator_total,
        has_detailed ? detailed_total : simple_total, has_alpha, has_blend2 ? 2 : has_blend,
        has_block14, projection_total, has_shadow, has_detailed);
    material->flags = (MaterialByte)((material->flags & ~2u) | (((wire->flags >> 11) & 1) << 1));
    if (!material->storage)
        return material;
    for (unsigned int index = 0; index < texture_count(material->capacity); ++index)
        fn_005525ac(textures(material) + index);
    use_count(material, texture_total, 3, 0);
    material->flags &= (MaterialByte)~8u;
    for (unsigned int index = 0; index < texture_total; ++index) {
        const MaterialTextureReference *reference = wire_textures + index;
        const MaterialNames *names = resolver->names;
        const char *name = (const char *)names->offsets + names->offsets[reference->nameIndex];
        MaterialTextureResource *resource = resolver->accessor->vtable->texture(resolver->accessor, name);
        MaterialTexture *texture = textures(material) + index;
        fn_0019501c(texture, resource);
        fn_0019fbb0(texture, reference->samplerS & 3, reference->samplerT & 3);
        fn_005524ec(texture, (reference->samplerS >> 2) & 3, (reference->samplerT >> 2) & 3);
    }
    for (unsigned int index = 0; index < transform_count(material->capacity); ++index)
        transforms(material)[index] = (MaterialTransform){0, 0, 0, 0, 0};
    use_count(material, transform_total, 12, 2);
    material->flags &= (MaterialByte)~8u;
    for (unsigned int index = 0; index < transform_total; ++index)
        transforms(material)[index] = wire_transforms[index];
    for (unsigned int index = 0; index < generator_count(material->capacity); ++index) {
        generators(material)[index].kind = 0;
        generators(material)[index].source = 0;
    }
    use_count(material, generator_total, 48, 4);
    material->flags &= (MaterialByte)~8u;
    unsigned int projection_index = 0;
    for (unsigned int index = 0; index < generator_count(material->used); ++index) {
        MaterialGenerator *generator = generators(material) + index;
        generator->kind = wire_generators[index].kind;
        generator->source = wire_generators[index].source;
        generator->reserved = wire_generators[index].reserved;
        generator->projection = 0;
        if (generator->source >= 3 && generator->source <= 5)
            generator->projection = projections(material) + projection_index++;
    }
    if (has_detailed) {
        *detailed_header(material) = *wire_header;
        MaterialDetailedStage *destination = (MaterialDetailedStage *)stages(material);
        for (unsigned int index = detailed_total; index < stage_count(material->capacity); ++index) {
            destination[index] = (MaterialDetailedStage){0, 0, 0x22};
        }
        use_count(material, detailed_total, 448, 6);
        for (unsigned int index = 0; index < detailed_total; ++index)
            destination[index] = wire_detailed[index];
    } else if (simple_total) {
        MaterialWord *destination = (MaterialWord *)stages(material);
        for (unsigned int index = 0; index < stage_count(material->capacity); ++index)
            destination[index] &= 0xffff0000u;
        use_count(material, simple_total, 448, 6);
        copy_words(destination, wire_simple, simple_total);
    }
    if (has_alpha)
        copy_words(alpha_compare(material), wire_alpha, 2);
    if (has_blend)
        blend_modes(material)[0] = wire_blend[0];
    if (has_blend2)
        blend_modes(material)[1] = wire_blend2[0];
    if (projection_total) {
        for (unsigned int index = 0; index < projection_count(material->capacity); ++index)
            projections(material)[index] = (MaterialProjection){0, 0, 0, 0, 0};
        use_count(material, projection_total, 24576, 13);
        for (unsigned int index = 0; index < projection_total; ++index)
            projections(material)[index] = wire_projection[index];
    }
    if (has_shadow)
        material_word_pair_assign(font_shadow(material), wire_shadow);
    return material;
}
