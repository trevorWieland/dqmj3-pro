#include "scene_internal.h"

static unsigned int u32(const unsigned char *p) { return p[0] | ((unsigned int)p[1] << 8) | ((unsigned int)p[2] << 16) | ((unsigned int)p[3] << 24); }
static void set32(unsigned char *p, unsigned int value) { int i; for (i = 0; i < 4; ++i) p[i] = (unsigned char)(value >> (i * 8)); }
int candidate_poison(unsigned char *archive, int archive_size) {
    static SceneArchive parsed;
    int i, changed_pane = 0, changed_material = 0;
    if (!scene_archive_open(archive, archive_size, &parsed)) return 0;
    for (i = 0; i < parsed.count; ++i) if (parsed.members[i].size >= 20 && u32(parsed.members[i].data) == 0x54594c46u) {
        unsigned char *layout = (unsigned char *)parsed.members[i].data;
        int p = 20;
        while (p < parsed.members[i].size) {
            unsigned int tag = u32(layout + p);
            if (!changed_pane && (tag == 0x316e6170u || tag == 0x31636970u)) { set32(layout + p + 44, 0x42f60000u); changed_pane = 1; }
            if (tag == 0x3174616du) {
                unsigned int first = u32(layout + p + 12);
                set32(layout + p + first + 44, 0x7fc00000u); changed_material = 1;
            }
            p += (int)u32(layout + p + 4);
        }
    }
    return changed_pane && changed_material;
}
