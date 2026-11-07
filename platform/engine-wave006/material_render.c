#include "scene_internal.h"
#include "layout.h"

static float interpolate(float a, float b, float c, float d, float u, float v) { return (a * (1 - u) + b * u) * (1 - v) + (c * (1 - u) + d * u) * v; }

int scene_render(const Scene *scene, unsigned int *pixels, int width, int height) {
    int i, drawn = 0;
    scene_projection_begin(scene->picture_count);
    for (i = 0; i < width * height; ++i) pixels[i] = 0xff20242cu;
    for (i = 0; i < scene->picture_count; ++i) {
        const ScenePicture *picture = &scene->pictures[i];
        const SceneMaterial *material = &scene->materials[picture->material];
        float p[8], ax, ay, bx, by, determinant;
        SceneProjection projection;
        int x, y, j;
        if (!picture->supported || !material->supported || !engine_layout_value(picture->pane, 9)) continue;
        if (!scene_projection_prepare(scene, i, &projection)) return -1;
        for (j = 0; j < 8; ++j) p[j] = engine_layout_value(picture->pane, j) / 1000.0f;
        ax = p[2] - p[0]; ay = p[3] - p[1]; bx = p[6] - p[0]; by = p[7] - p[1];
        determinant = ax * by - ay * bx;
        if (determinant > -0.000001f && determinant < 0.000001f) continue;
        ++drawn;
        for (y = 0; y < height; ++y) for (x = 0; x < width; ++x) {
            float dx = x + 0.5f - p[0], dy = y + 0.5f - p[1];
            float u = (dx * by - dy * bx) / determinant, v = (dy * ax - dx * ay) / determinant;
            unsigned int sample, destination, channels[4];
            int c, alpha;
            if (u < 0 || v < 0 || u >= 1 || v >= 1) continue;
            if (!material_fragment(scene, material, picture, &projection, u, v, &sample)) return -1;
            for (c = 0; c < 4; ++c) {
                int shift = c == 3 ? 24 : 16 - c * 8;
                int value = (sample >> shift) & 255;
                int tint = (int)(interpolate(picture->colors[c], picture->colors[4 + c], picture->colors[8 + c], picture->colors[12 + c], u, v) + 0.5f);
                if (!material->detailed) value = (material->black[c] * (255 - value) + material->white[c] * value + 127) / 255;
                channels[c] = (unsigned int)((value * tint + 127) / 255);
            }
            alpha = (int)(channels[3] * picture->alpha + 127) / 255;
            destination = pixels[y * width + x]; sample = 0xff000000u;
            for (c = 0; c < 3; ++c) {
                int shift = 16 - c * 8;
                sample |= (unsigned int)((channels[c] * alpha + ((destination >> shift) & 255) * (255 - alpha) + 127) / 255) << shift;
            }
            pixels[y * width + x] = sample;
        }
    }
    return drawn;
}
