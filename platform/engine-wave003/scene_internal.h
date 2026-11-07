#ifndef DQM_TEXTURE_SCENE_INTERNAL_H
#define DQM_TEXTURE_SCENE_INTERNAL_H
typedef struct { const unsigned char *data, *name; int size, name_size; } SceneMember;
typedef struct { SceneMember members[64]; int count; } SceneArchive;
typedef struct { int width, height; const unsigned int *pixels; } SceneTexture;
typedef struct { int supported, texture; unsigned char black[4], white[4]; } SceneMaterial;
typedef struct { int pane, material, alpha, supported; float uv[8]; unsigned char colors[16]; } ScenePicture;
typedef struct { SceneTexture textures[16]; SceneMaterial materials[32]; ScenePicture pictures[128]; int texture_count, material_count, picture_count; } Scene;
int scene_archive_open(const unsigned char *data, int size, SceneArchive *archive);
int scene_archive_texture(const SceneArchive *archive, const unsigned char *name, int length);
int scene_render(const Scene *scene, unsigned int *pixels, int width, int height);
#endif
