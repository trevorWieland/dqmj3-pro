#include "projection.h"

void fn_0054befc(TextureMatrix *output, const ProjectionDraw *draw, const ProjectionPane *pane,
    const Material *material, unsigned int texture_index, int coordinate_source, unsigned int projection_index)
{
    unsigned int capacity = material->capacity;
    const MaterialTexture *textures = (const MaterialTexture *)material->storage;
    const MaterialTransform *transforms = (const MaterialTransform *)(textures + (capacity & 3));
    const MaterialGenerator *generators = (const MaterialGenerator *)(transforms + ((capacity >> 2) & 3));
    const MaterialByte *stages = (const MaterialByte *)(generators + ((capacity >> 4) & 3)) +
        ((capacity >> 9) & 1) * 8 + ((capacity >> 10) & 3) * 4;
    const MaterialProjection *parameters = (const MaterialProjection *)(stages +
        ((capacity >> 6) & 7) * ((capacity & 0x1000) ? 12 : 4)) + projection_index;
    unsigned int flags = parameters->flags;
    float width, height;
    if (flags & 1) {
        width = draw->viewport->width;
        height = draw->viewport->height;
    } else if (flags & 2) {
        width = pane->width;
        height = pane->height;
    } else {
        width = (float)(textures[texture_index].words[1] & 65535);
        height = (float)(textures[texture_index].words[1] >> 16);
    }
    float half_width = width * 0.5f, half_height = height * 0.5f;
    float inverse_span_x = 1.0f / (half_width + half_width);
    float inverse_span_y = 1.0f / (-half_height - half_height);
    float normalized_scale_x = 0.5f / parameters->scaleX;
    float normalized_scale_y = 0.5f / parameters->scaleY;
    float shift_x = parameters->translateX, shift_y = parameters->translateY;
    if (coordinate_source == 4 && !(flags & 4)) {
        shift_x += pane->world.m[0][3];
        shift_y += pane->world.m[1][3];
    }
    float translate_x = 0.5f - (shift_x / parameters->scaleX) / width;
    translate_x += -((half_width - half_width) * inverse_span_x) * normalized_scale_x;
    float translate_y = (shift_y / parameters->scaleY) / height + 0.5f;
    translate_y += -((half_height - half_height) * inverse_span_y) * normalized_scale_y;
    Matrix3x4 projection = {{{(inverse_span_x * 2.0f) * normalized_scale_x, 0, 0, translate_x},
        {0, (inverse_span_y * 2.0f) * normalized_scale_y, 0, translate_y}, {0, 0, 0, 1}}};
    if (coordinate_source == 4 && (flags & 4)) {
        Matrix3x4 inverse;
        fn_001ad184(&inverse, &pane->world);
        matrix_multiply(&projection, &projection, &inverse);
    }
    matrix_multiply(&projection, &projection, &draw->view);
    float srt[6];
    fn_0055492c(srt, transforms + texture_index, textures + texture_index);
    Matrix3x4 transform = {{{srt[0], srt[1], 0, srt[2]}, {srt[3], srt[4], 0, srt[5]}, {0, 0, 1, 0}}};
    matrix_multiply(&projection, &transform, &projection);
    for (unsigned int row = 0; row < 2; ++row)
        for (unsigned int column = 0; column < 4; ++column)
            output->m[row][column] = projection.m[row][column];
}
