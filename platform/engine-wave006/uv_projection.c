#include "scene_internal.h"
#include "material_service.h"
#include "layout.h"

static unsigned int snapshots[128][2][8];
static int picture_count;

void scene_projection_begin(int pictures)
{
    picture_count = pictures;
    for (int picture = 0; picture < 128; ++picture)
        for (int reference = 0; reference < 2; ++reference)
            for (int field = 0; field < 8; ++field)
                snapshots[picture][reference][field] = 0;
}

unsigned int stage_projection_value(int picture, int reference, int field)
{
    return picture >= 0 && picture < picture_count && reference >= 0 && reference < 2 && field >= 0 && field < 8 ?
        snapshots[picture][reference][field] : 0;
}

int scene_projection_prepare(const Scene *scene, int picture_index, SceneProjection *output)
{
    const ScenePicture *picture = &scene->pictures[picture_index];
    const SceneMaterial *material = &scene->materials[picture->material];
    const Material *constructed = stage_sdk_material(picture->material);
    ProjectionPane pane;
    ProjectionViewport viewport = {{0}, 320, 240};
    ProjectionDraw draw = {0};
    draw.view = (Matrix3x4){{{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}}};
    draw.viewport = &viewport;
    if (!constructed || !engine_layout_world(picture->pane, &pane) || material->references < 1 || material->references > 2) return 0;
    output->world = pane.world;
    for (int reference = 0; reference < material->references; ++reference) {
        const MaterialTexture *textures = (const MaterialTexture *)constructed->storage;
        const MaterialTransform *transforms = (const MaterialTransform *)(textures + (constructed->capacity & 3));
        TextureMatrix *matrix = &output->texture[reference];
        if (material->mapping[reference] == 4) {
            Matrix3x4 inverse;
            if ((material->projection_flags & 2) && !(material->projection_flags & 1) && (pane.width <= 0 || pane.height <= 0)) return 0;
            if (material->projection_flags & 4) {
                if (!fn_001ad184(&inverse, &pane.world)) return 0;
                for (int row = 0; row < 3; ++row) for (int column = 0; column < 4; ++column)
                    if (!(inverse.m[row][column] >= -100000000 && inverse.m[row][column] <= 100000000)) return 0;
            }
            fn_0054befc(matrix, &draw, &pane, constructed, (unsigned int)reference, 4, 0);
        } else {
            float srt[6];
            fn_0055492c(srt, transforms + reference, textures + reference);
            *matrix = (TextureMatrix){{{srt[0], srt[1], 0, srt[2]}, {srt[3], srt[4], 0, srt[5]}}};
        }
        for (int row = 0; row < 2; ++row) for (int column = 0; column < 4; ++column) {
            union { float real; unsigned int bits; } value;
            value.real = matrix->m[row][column];
            if (!(value.real >= -100000000 && value.real <= 100000000)) return 0;
            snapshots[picture_index][reference][row * 4 + column] = value.bits;
        }
    }
    return 1;
}
