#include "scene_internal.h"
#include "../engine-wave002/layout.h"

static float interpolate(float a, float b, float c, float d, float u, float v) { return (a * (1 - u) + b * u) * (1 - v) + (c * (1 - u) + d * u) * v; }

int scene_render(const Scene *scene, unsigned int *pixels, int width, int height) {
    int i, drawn = 0;
    for (i = 0; i < width * height; ++i) pixels[i] = 0xff20242cu;
    for (i = 0; i < scene->picture_count; ++i) {
        const ScenePicture *picture = &scene->pictures[i];
        const SceneMaterial *material = &scene->materials[picture->material];
        const SceneTexture *texture;
        float p[8], ax, ay, bx, by, determinant;
        int x, y, j;
        if (!picture->supported || !material->supported || !engine_layout_value(picture->pane, 9)) continue;
        texture = &scene->textures[material->texture];
        for (j = 0; j < 8; ++j) p[j] = engine_layout_value(picture->pane, j) / 1000.0f;
        ax = p[2] - p[0]; ay = p[3] - p[1]; bx = p[6] - p[0]; by = p[7] - p[1];
        determinant = ax * by - ay * bx;
        if (determinant > -0.000001f && determinant < 0.000001f) continue;
        ++drawn;
        for (y = 0; y < height; ++y) for (x = 0; x < width; ++x) {
            float dx = x + 0.5f - p[0], dy = y + 0.5f - p[1];
            float u = (dx * by - dy * bx) / determinant, v = (dy * ax - dx * ay) / determinant;
            float tu, tv;
            unsigned int sample, destination, channels[4];
            int sx, sy, c, alpha;
            if (u < 0 || v < 0 || u >= 1 || v >= 1) continue;
            tu = interpolate(picture->uv[0], picture->uv[2], picture->uv[4], picture->uv[6], u, v);
            tv = interpolate(picture->uv[1], picture->uv[3], picture->uv[5], picture->uv[7], u, v);
            sx = (int)(tu * texture->width); sy = (int)(tv * texture->height);
            if (sx < 0) sx = 0; if (sy < 0) sy = 0;
            if (sx >= texture->width) sx = texture->width - 1; if (sy >= texture->height) sy = texture->height - 1;
            sample = texture->pixels[sy * texture->width + sx];
            for (c = 0; c < 4; ++c) {
                int shift = c == 3 ? 24 : 16 - c * 8;
                int value = (sample >> shift) & 255;
                int tint = (int)(interpolate(picture->colors[c], picture->colors[4 + c], picture->colors[8 + c], picture->colors[12 + c], u, v) + 0.5f);
                value = (material->black[c] * (255 - value) + material->white[c] * value + 127) / 255;
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
