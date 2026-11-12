#ifndef DQMJ3_WAVE014_PROJECTION_H
#define DQMJ3_WAVE014_PROJECTION_H

#include "../wave011-material/material.h"

#if defined(__arm__)
#define DQM_VFP __attribute__((pcs("aapcs-vfp")))
#else
#define DQM_VFP
#endif

typedef struct Matrix3x4 { float m[3][4]; } Matrix3x4;
typedef struct TextureMatrix { float m[2][4]; } TextureMatrix;
typedef struct ProjectionViewport {
    unsigned int reserved[6];
    float width, height;
} ProjectionViewport;
typedef struct ProjectionDraw {
    unsigned char reserved[116];
    Matrix3x4 view;
    unsigned int reservedA4[3];
    const ProjectionViewport *viewport;
} ProjectionDraw;
typedef struct ProjectionPane {
    unsigned char reserved[60];
    float width, height;
    unsigned int reserved44;
    Matrix3x4 world;
} ProjectionPane;
typedef struct SineCosineEntry {
    float sine, cosine, sineStep, cosineStep;
} SineCosineEntry;

extern const SineCosineEntry derived_sine_cosine[256];
void matrix_multiply(Matrix3x4 *output, const Matrix3x4 *left, const Matrix3x4 *right);
int fn_001ad184(Matrix3x4 *output, const Matrix3x4 *input);
DQM_VFP void sine_cosine(float *sine, float *cosine, float indexed_angle);
void fn_0055492c(float output[6], const MaterialTransform *transform, const MaterialTexture *texture);
void fn_0054befc(TextureMatrix *output, const ProjectionDraw *draw, const ProjectionPane *pane,
    const Material *material, unsigned int texture_index, int coordinate_source, unsigned int projection_index);

_Static_assert(sizeof(float) == 4 && sizeof(Matrix3x4) == 48 && sizeof(TextureMatrix) == 32, "matrix ABI");
_Static_assert(__builtin_offsetof(ProjectionDraw, view) == 116 && __builtin_offsetof(ProjectionDraw, viewport) == 176, "draw ABI");
_Static_assert(sizeof(ProjectionPane) == 120 && __builtin_offsetof(ProjectionPane, world) == 72, "pane ABI");

#endif
