#ifndef DQMJ3_WAVE011_MATERIAL_H
#define DQMJ3_WAVE011_MATERIAL_H

typedef unsigned char MaterialByte;
typedef unsigned short MaterialHalf;
typedef unsigned int MaterialWord;

typedef struct MaterialColor { MaterialWord rgba; } MaterialColor;
typedef struct MaterialTransform { float translateX, translateY, rotation, scaleX, scaleY; } MaterialTransform;
typedef struct MaterialProjection { float translateX, translateY, scaleX, scaleY; MaterialWord flags; } MaterialProjection;
typedef struct MaterialTexture { MaterialWord words[8]; } MaterialTexture;
typedef struct MaterialGenerator {
    MaterialByte kind, source;
    MaterialHalf reserved;
    MaterialProjection *projection;
} MaterialGenerator;
typedef struct MaterialDetailedHeader {
    MaterialWord selectors;
    MaterialColor constants[5];
    MaterialWord reserved;
} MaterialDetailedHeader;
typedef struct MaterialDetailedStage { MaterialWord colorInputs, alphaInputs, selectors; } MaterialDetailedStage;
typedef struct MaterialTextureReference {
    MaterialHalf nameIndex;
    MaterialByte samplerS, samplerT;
} MaterialTextureReference;
typedef struct MaterialGeneratorWire {
    MaterialByte kind, source;
    MaterialHalf reserved;
    MaterialWord reservedWord;
} MaterialGeneratorWire;
typedef struct MaterialWire {
    MaterialByte name[28];
    MaterialColor colors[2];
    MaterialWord flags;
} MaterialWire;
typedef struct MaterialTextureResource MaterialTextureResource;
typedef struct MaterialAccessor MaterialAccessor;
typedef struct MaterialAccessorVtable {
    void (*reserved[5])(void);
    MaterialTextureResource *(*texture)(MaterialAccessor *, const char *);
} MaterialAccessorVtable;
struct MaterialAccessor { const MaterialAccessorVtable *vtable; };
typedef struct MaterialNames {
    MaterialWord signature, bytes, count;
    MaterialWord offsets[];
} MaterialNames;
typedef struct MaterialResolver {
    const MaterialNames *names;
    MaterialWord reserved[2];
    MaterialAccessor *accessor;
} MaterialResolver;
typedef struct MaterialContext {
    MaterialByte reserved[32];
    MaterialResolver *primary, *alternate;
    MaterialHalf usePrimary, reserved2a, flags;
} MaterialContext;
typedef struct MaterialVtable MaterialVtable;
typedef struct Material {
    const MaterialVtable *vtable;
    MaterialWord reserved[26];
    MaterialColor colors[2];
    MaterialHalf capacity, used;
    MaterialByte *storage;
    MaterialByte flags;
    MaterialByte reserved7d[3];
    const MaterialWire *wire;
} Material;

extern const MaterialVtable material_vtable;
MaterialColor *fn_0017d8f8(MaterialColor *color);
void *material_construct_elements(void *first, MaterialColor *(*construct)(MaterialColor *), MaterialWord stride, MaterialWord count);
void fn_005549f0(Material *material);
MaterialWord fn_0019fdf4(Material *material, MaterialWord textures, MaterialWord transforms,
    MaterialWord generators, MaterialWord stages, MaterialWord alphaCompare, MaterialWord blendWords,
    MaterialWord block14, MaterialWord projections, MaterialWord fontShadow, MaterialWord detailed);
MaterialTexture *fn_005525ac(MaterialTexture *texture);
void fn_0019501c(MaterialTexture *texture, const MaterialTextureResource *resource);
void fn_0019fbb0(MaterialTexture *texture, MaterialWord s, MaterialWord t);
void fn_005524ec(MaterialTexture *texture, MaterialWord minification, MaterialWord magnification);
void material_word_pair_assign(MaterialWord *destination, const MaterialWord *source);
Material *fn_00554a30(Material *material, const MaterialWire *wire, const MaterialWire *replacement,
    const MaterialContext *context);

_Static_assert(sizeof(MaterialWord) == 4 && sizeof(MaterialHalf) == 2 && sizeof(MaterialByte) == 1, "wire widths");
_Static_assert(sizeof(MaterialWire) == 40 && sizeof(MaterialTextureReference) == 4, "wire prefix");
_Static_assert(sizeof(MaterialGeneratorWire) == 8 && sizeof(MaterialProjection) == 20, "wire records");
#if defined(__arm__)
_Static_assert(sizeof(Material) == 132 && __builtin_offsetof(Material, colors) == 108, "original material ABI");
_Static_assert(__builtin_offsetof(Material, storage) == 120 && __builtin_offsetof(Material, wire) == 128, "original pointers");
_Static_assert(__builtin_offsetof(MaterialContext, flags) == 44 && sizeof(MaterialGenerator) == 8, "original context ABI");
#endif

#endif
