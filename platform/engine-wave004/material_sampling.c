#include "scene_internal.h"

static float interpolate(float a, float b, float c, float d, float u, float v) { return (a * (1 - u) + b * u) * (1 - v) + (c * (1 - u) + d * u) * v; }
static int floor_int(float value) { int result = (int)value; return result > value ? result - 1 : result; }
static int index(int value, int extent, int mode) {
    int limit;
    if (!mode) return value < 0 ? 0 : value >= extent ? extent - 1 : value;
    limit = mode == 1 ? extent : extent * 2;
    value %= limit;
    if (value < 0) value += limit;
    return mode == 2 && value >= extent ? limit - value - 1 : value;
}

static unsigned int sample(const SceneTexture *texture, float u, float v, int wrap_s, int wrap_t) {
    unsigned int result = 0;
    int x, y, channel;
    float fx, fy;
    if (texture->uniform) return texture->pixels[0];
    if (u < -1000000 || u > 1000000 || v < -1000000 || v > 1000000) return 0;
    if ((wrap_s & 3) == 0) { if (u < 0) u = 0; if (u > 1) u = 1; }
    else u -= floor_int(u / ((wrap_s & 3) == 2 ? 2 : 1)) * ((wrap_s & 3) == 2 ? 2 : 1);
    if ((wrap_t & 3) == 0) { if (v < 0) v = 0; if (v > 1) v = 1; }
    else v -= floor_int(v / ((wrap_t & 3) == 2 ? 2 : 1)) * ((wrap_t & 3) == 2 ? 2 : 1);
    fx = u * texture->width - (wrap_s & 4 ? 0.5f : 0);
    fy = v * texture->height - (wrap_t & 4 ? 0.5f : 0);
    x = floor_int(fx); y = floor_int(fy);
    fx = wrap_s & 4 ? fx - x : 0; fy = wrap_t & 4 ? fy - y : 0;
    for (channel = 0; channel < 4; ++channel) {
        int shift = channel * 8;
        float colors[4];
        int i;
        for (i = 0; i < 4; ++i) {
            unsigned int color = texture->pixels[index(y + i / 2, texture->height, wrap_t & 3) * texture->width + index(x + i % 2, texture->width, wrap_s & 3)];
            colors[i] = (float)((color >> shift) & 255);
        }
        result |= (unsigned int)(interpolate(colors[0], colors[1], colors[2], colors[3], fx, fy) + 0.5f) << shift;
    }
    return result;
}

static unsigned int color(const unsigned char *rgba) { return ((unsigned int)rgba[3] << 24) | ((unsigned int)rgba[0] << 16) | ((unsigned int)rgba[1] << 8) | rgba[2]; }
static unsigned int constant(const SceneMaterial *material, int selector) {
    unsigned int value;
    if (selector < 2) return color(selector ? material->white : material->black);
    value = material->constants[selector - 2];
    return (value & 0xff00ff00u) | ((value & 255) << 16) | ((value >> 16) & 255);
}

static int source(unsigned int flags, int input, unsigned int a, unsigned int b, unsigned int k, int shift) {
    int id = (int)(flags >> (input * 4)) & 15;
    unsigned int value = id == 3 ? a : id == 4 ? b : k;
    return (int)(value >> shift) & 255;
}

int material_fragment(const Scene *scene, const SceneMaterial *material, const ScenePicture *picture, float u, float v, unsigned int *output) {
    unsigned int samples[2], result = 0;
    int i, channel;
    for (i = 0; i < material->references; ++i) {
        const SceneTexture *texture = &scene->textures[material->texture_ids[i]];
        const float *srt = material->transform[i];
        float tu, tv;
        if (texture->uniform) { samples[i] = texture->pixels[0]; continue; }
        if (material->mapping[i] == 4) {
            tu = ((u - 0.5f) * picture->width - material->projection[0]) / (texture->width * material->projection[2]) + 0.5f;
            tv = ((v - 0.5f) * picture->height + material->projection[1]) / (texture->height * material->projection[3]) + 0.5f;
        } else {
            tu = interpolate(picture->uv[0], picture->uv[2], picture->uv[4], picture->uv[6], u, v);
            tv = interpolate(picture->uv[1], picture->uv[3], picture->uv[5], picture->uv[7], u, v);
        }
        tu = (tu - 0.5f) * srt[3] + 0.5f + srt[0]; tv = (tv - 0.5f) * srt[4] + 0.5f + srt[1];
        if (!(tu >= -1000000 && tu <= 1000000 && tv >= -1000000 && tv <= 1000000)) return 0;
        samples[i] = sample(texture, tu, tv, material->wrap_s[i], material->wrap_t[i]);
    }
    if (!material->detailed) { *output = samples[0]; return 1; }
    for (channel = 0; channel < 4; ++channel) {
        int shift = channel == 3 ? 24 : 16 - channel * 8;
        unsigned int flags = channel == 3 ? material->alpha_flags : material->color_flags;
        unsigned int k = constant(material, channel == 3 ? material->selectors >> 4 : material->selectors & 15);
        int value = source(flags, 0, samples[0], samples[1], k, shift);
        if (((flags >> 24) & 15) == 1) value = (value * source(flags, 1, samples[0], samples[1], k, shift) + 127) / 255;
        result |= (unsigned int)value << shift;
    }
    *output = result;
    return 1;
}
