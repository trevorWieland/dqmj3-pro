#include "layout.h"
#if defined(_WIN32)
int _fltused = 0;
#endif

typedef struct { float matrix[6]; float points[8]; int type, visible; } Pane;
typedef struct { Pane panes[128]; int count, width, height; } Layout;
static Layout layouts[2];
static int active;

static unsigned int u32(const unsigned char *data) {
    return data[0] | ((unsigned int)data[1] << 8) | ((unsigned int)data[2] << 16) | ((unsigned int)data[3] << 24);
}

static int tag(const unsigned char *data, const char *value) {
    return data[0] == value[0] && data[1] == value[1] && data[2] == value[2] && data[3] == value[3];
}

static int number(const unsigned char *data, float *output) {
    union { unsigned int bits; float real; } value;
    value.bits = u32(data);
    if ((value.bits & 0x7f800000u) == 0x7f800000u) return 0;
    *output = value.real;
    return value.real >= -100000.0f && value.real <= 100000.0f;
}

static void sine_cosine(float degrees, float *sine, float *cosine) {
    float x, squared, sign = 1.0f;
    while (degrees > 180.0f) degrees -= 360.0f;
    while (degrees < -180.0f) degrees += 360.0f;
    if (degrees > 90.0f) { degrees = 180.0f - degrees; sign = -1.0f; }
    if (degrees < -90.0f) { degrees = -180.0f - degrees; sign = -1.0f; }
    x = degrees * 0.017453292519943295f;
    squared = x * x;
    *sine = x * (1.0f + squared * (-1.0f / 6.0f + squared * (1.0f / 120.0f + squared * (-1.0f / 5040.0f + squared * (1.0f / 362880.0f - squared / 39916800.0f)))));
    *cosine = sign * (1.0f + squared * (-1.0f / 2.0f + squared * (1.0f / 24.0f + squared * (-1.0f / 720.0f + squared * (1.0f / 40320.0f + squared * (-1.0f / 3628800.0f + squared / 479001600.0f))))));
}

void engine_layout_reset(void) { layouts[0].count = layouts[1].count = 0; active = 0; }
int engine_layout_count(void) { return layouts[active].count; }
int engine_layout_size(int dimension) { return dimension == 0 ? layouts[active].width : layouts[active].height; }

int engine_layout_value(int pane, int field) {
    Pane *value;
    if (pane < 0 || pane >= layouts[active].count || field < 0 || field > 9) return 0;
    value = &layouts[active].panes[pane];
    if (field == 8) return value->type;
    if (field == 9) return value->visible;
    return (int)(value->points[field] * 1000.0f);
}

int engine_layout_load(const unsigned char *data, int size) {
    Layout *layout = &layouts[1 - active];
    unsigned int position = 20, sections, section;
    int depth = 0, stack[16], last = -1, pushable = 0, has_layout = 0;
    if (!data || size < 20 || size > 65536 || !tag(data, "FLYT") || data[4] != 255 || data[5] != 254 ||
        data[6] != 20 || data[7] || u32(data + 8) != 0x07020100u || u32(data + 12) != (unsigned int)size || data[18] || data[19]) return 0;
    sections = data[16] | ((unsigned int)data[17] << 8);
    if (!sections || sections > 256) return 0;
    layout->count = 0;
    for (section = 0; section < sections; ++section) {
        const unsigned char *block;
        unsigned int length;
        int type = 0;
        if (position > (unsigned int)size - 8) return 0;
        block = data + position;
        length = u32(block + 4);
        if (length < 8 || length % 4 || length > (unsigned int)size - position) return 0;
        if (tag(block, "lyt1")) {
            float width, height;
            if (has_layout || length < 28 || block[8] != 1 || !number(block + 12, &width) || !number(block + 16, &height) ||
                width < 1 || width > 4096 || height < 1 || height > 4096 || width != (int)width || height != (int)height) return 0;
            layout->width = (int)width; layout->height = (int)height; has_layout = 1;
        } else if (tag(block, "pas1")) {
            if (!pushable || last < 0 || depth >= 16 || length != 8) return 0;
            stack[depth++] = last;
            pushable = 0;
        } else if (tag(block, "pae1")) {
            if (!depth || length != 8) return 0;
            --depth; pushable = 0;
        } else {
            if (tag(block, "pan1")) type = 1;
            if (tag(block, "pic1")) type = 2;
            if (tag(block, "txt1")) type = 3;
            if (tag(block, "prt1")) type = 4;
            if (tag(block, "bnd1")) type = 5;
            if (tag(block, "wnd1")) type = 6;
            if (type) {
                Pane *pane, *parent = depth ? &layout->panes[stack[depth - 1]] : (Pane *)0;
                float values[10], local[6], sine, cosine;
                int i, name_end = 0;
                if (!has_layout || length < 84 || layout->count >= 128 || block[9] != 0) return 0;
                for (i = 12; i < 44; ++i) if (!block[i]) name_end = 1;
                if (!name_end) return 0;
                for (i = 0; i < 10; ++i) if (!number(block + 44 + i * 4, &values[i])) return 0;
                if (values[2] != 0 || values[3] != 0 || values[4] != 0 || values[8] < 0 || values[8] > 8192 || values[9] < 0 || values[9] > 8192) return 0;
                pane = &layout->panes[layout->count];
                sine_cosine(values[5], &sine, &cosine);
                local[0] = cosine * values[6]; local[1] = -sine * values[7];
                local[2] = sine * values[6]; local[3] = cosine * values[7];
                local[4] = values[0]; local[5] = values[1];
                if (parent) {
                    float *p = parent->matrix;
                    pane->matrix[0] = p[0] * local[0] + p[1] * local[2];
                    pane->matrix[1] = p[0] * local[1] + p[1] * local[3];
                    pane->matrix[2] = p[2] * local[0] + p[3] * local[2];
                    pane->matrix[3] = p[2] * local[1] + p[3] * local[3];
                    pane->matrix[4] = p[0] * local[4] + p[1] * local[5] + p[4];
                    pane->matrix[5] = p[2] * local[4] + p[3] * local[5] + p[5];
                } else for (i = 0; i < 6; ++i) pane->matrix[i] = local[i];
                for (i = 0; i < 6; ++i) if (!(pane->matrix[i] >= -100000 && pane->matrix[i] <= 100000)) return 0;
                for (i = 0; i < 4; ++i) {
                    float x = (i == 0 || i == 3 ? -0.5f : 0.5f) * values[8];
                    float y = (i < 2 ? 0.5f : -0.5f) * values[9];
                    pane->points[i * 2] = pane->matrix[0] * x + pane->matrix[1] * y + pane->matrix[4] + layout->width * 0.5f;
                    pane->points[i * 2 + 1] = layout->height * 0.5f - (pane->matrix[2] * x + pane->matrix[3] * y + pane->matrix[5]);
                    if (!(pane->points[i * 2] >= -100000 && pane->points[i * 2] <= 100000 &&
                          pane->points[i * 2 + 1] >= -100000 && pane->points[i * 2 + 1] <= 100000)) return 0;
                }
                pane->type = type;
                pane->visible = !!(block[8] & 1) && block[10] != 0 && (!parent || parent->visible);
                last = layout->count++;
                pushable = 1;
            } else pushable = 0;
        }
        position += length;
    }
    if (position != (unsigned int)size || depth || !has_layout || !layout->count) return 0;
    active = 1 - active;
    return 1;
}
