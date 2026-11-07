#ifndef DQM_TEXTURE_SCENE_INTERNAL_H
#define DQM_TEXTURE_SCENE_INTERNAL_H
typedef struct { const unsigned char *data, *name; int size, name_size; } SceneMember;
typedef struct { SceneMember members[64]; int count; } SceneArchive;
typedef struct { int width, height; const unsigned int *pixels; int uniform, format, orientation; } SceneTexture;
typedef struct {
    int supported, texture, texture_ids[2], references, detailed;
    unsigned char black[4], white[4], wrap_s[2], wrap_t[2], mapping[2];
    float transform[2][5], projection[4];
    unsigned int color_flags, alpha_flags, selectors, constants[5];
} SceneMaterial;
typedef struct { int pane, material, alpha, supported; float uv[8], width, height; unsigned char colors[16]; } ScenePicture;
typedef struct { SceneTexture textures[16]; SceneMaterial materials[32]; ScenePicture pictures[128]; int texture_count, material_count, picture_count; } Scene;
int scene_archive_open(const unsigned char *data, int size, SceneArchive *archive);
int scene_archive_texture(const SceneArchive *archive, const unsigned char *name, int length);
int scene_render(const Scene *scene, unsigned int *pixels, int width, int height);
int scene_materials(const unsigned char *block, int size, const unsigned char *names, int names_size, Scene *scene, int *unsupported);
int material_fragment(const Scene *scene, const SceneMaterial *material, const ScenePicture *picture, float u, float v, unsigned int *color);
#endif
