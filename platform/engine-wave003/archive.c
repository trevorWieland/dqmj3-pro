#include "scene_internal.h"

static unsigned int u32(const unsigned char *p) { return p[0] | ((unsigned int)p[1] << 8) | ((unsigned int)p[2] << 16) | ((unsigned int)p[3] << 24); }
static int u16(const unsigned char *p) { return p[0] | ((int)p[1] << 8); }
static int equal(const unsigned char *a, const unsigned char *b, int length) { int i; for (i = 0; i < length; ++i) if (a[i] != b[i]) return 0; return 1; }

int scene_archive_open(const unsigned char *data, int size, SceneArchive *archive) {
    unsigned int start, names, count, multiplier, previous = 0;
    int i, j;
    if (!data || !archive || size < 40 || size > 8388608 || u32(data) != 0x43524153u || u16(data + 4) != 20 ||
        u16(data + 6) != 0xfeff || u32(data + 8) != (unsigned int)size || u32(data + 16) != 256 ||
        u32(data + 20) != 0x54414653u || u16(data + 24) != 12) return 0;
    count = (unsigned int)u16(data + 26); multiplier = u32(data + 28); start = u32(data + 12);
    if (!count || count > 64 || !multiplier || 40 + count * 16 > (unsigned int)size || start < 40 + count * 16 || start > (unsigned int)size) return 0;
    names = 40 + count * 16;
    if (u32(data + names - 8) != 0x544e4653u || u32(data + names - 4) != 8) return 0;
    for (i = 0; i < (int)count; ++i) {
        const unsigned char *node = data + 32 + i * 16;
        unsigned int hash = u32(node), attr = u32(node + 4), begin = u32(node + 8), end = u32(node + 12);
        unsigned int name, computed = 0;
        int length = 0, segment = 0;
        if ((i && hash < previous) || attr >> 24 != 1 || begin > end || end > (unsigned int)size - start ||
            (attr & 0xffffffu) > (start - names) / 4) return 0;
        previous = hash; name = names + (attr & 0xffffffu) * 4;
        if (name >= start) return 0;
        while (name + length < start && data[name + length]) {
            unsigned char value = data[name + length];
            if (++length > 127 || value < 33 || value > 126 || value == '\\' || value == ':' || (value == '.' && !segment)) return 0;
            if (value == '/') { if (!segment) return 0; segment = 0; } else ++segment;
            computed = computed * multiplier + value;
        }
        if (!length || !segment || name + length >= start || computed != hash) return 0;
        for (j = 0; j < i; ++j) {
            SceneMember *old = &archive->members[j];
            if ((old->name_size == length && equal(old->name, data + name, length)) ||
                (begin < (unsigned int)(old->data - data) + old->size - start && end > (unsigned int)(old->data - data) - start)) return 0;
        }
        archive->members[i].name = data + name; archive->members[i].name_size = length;
        archive->members[i].data = data + start + begin; archive->members[i].size = (int)(end - begin);
    }
    archive->count = (int)count;
    return 1;
}

int scene_archive_texture(const SceneArchive *archive, const unsigned char *name, int length) {
    int i;
    if (!archive || !name || length < 1 || length > 63) return -1;
    for (i = 0; i < length; ++i) if (name[i] < 33 || name[i] > 126 || name[i] == '/' || name[i] == '\\' || name[i] == ':') return -1;
    for (i = 0; i < archive->count; ++i) {
        const SceneMember *member = &archive->members[i];
        if (member->name_size == length + 5 && equal(member->name, (const unsigned char *)"timg/", 5) && equal(member->name + 5, name, length)) return i;
    }
    return -1;
}
