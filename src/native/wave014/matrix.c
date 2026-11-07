#include "projection.h"

void fn_001ad06c(Matrix3x4 *output, const Matrix3x4 *left, const Matrix3x4 *right)
{
    Matrix3x4 result;
    for (unsigned int row = 0; row < 3; ++row) {
        for (unsigned int column = 0; column < 3; ++column) {
            float value = left->m[row][0] * right->m[0][column];
            value += left->m[row][1] * right->m[1][column];
            value += left->m[row][2] * right->m[2][column];
            result.m[row][column] = value;
        }
        float translation = left->m[row][3] + left->m[row][0] * right->m[0][3];
        translation += left->m[row][1] * right->m[1][3];
        translation += left->m[row][2] * right->m[2][3];
        result.m[row][3] = translation;
    }
    *output = result;
}

int fn_001ad184(Matrix3x4 *output, const Matrix3x4 *input)
{
    const float a = input->m[0][0], b = input->m[0][1], c = input->m[0][2];
    const float d = input->m[1][0], e = input->m[1][1], f = input->m[1][2];
    const float g = input->m[2][0], h = input->m[2][1], i = input->m[2][2];
    float diagonal0 = (a * e) * i - (g * e) * c;
    float diagonal1 = (b * f) * g - (d * b) * i;
    float diagonal2 = (c * d) * h - (a * h) * f;
    float determinant = (diagonal0 + diagonal1) + diagonal2;
    if (determinant == 0)
        return 0;
    float reciprocal = 1.0f / determinant;
    Matrix3x4 result;
    result.m[0][0] = (e * i - h * f) * reciprocal;
    result.m[0][1] = -((b * i - h * c) * reciprocal);
    result.m[0][2] = (b * f - e * c) * reciprocal;
    result.m[1][0] = -((d * i - g * f) * reciprocal);
    result.m[1][1] = (a * i - g * c) * reciprocal;
    result.m[1][2] = -((a * f - d * c) * reciprocal);
    result.m[2][0] = (d * h - g * e) * reciprocal;
    result.m[2][1] = -((a * h - g * b) * reciprocal);
    result.m[2][2] = (a * e - d * b) * reciprocal;
    for (unsigned int row = 0; row < 3; ++row) {
        float translation = -(result.m[row][0] * input->m[0][3]);
        translation -= result.m[row][1] * input->m[1][3];
        translation -= result.m[row][2] * input->m[2][3];
        result.m[row][3] = translation;
    }
    *output = result;
    return 1;
}
