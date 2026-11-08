#include "effect_texture.h"

typedef struct TextureRequest065 {
    unsigned int region;
    unsigned int option;
    unsigned int selector;
    unsigned int bytes;
    unsigned int live;
} TextureRequest065;

typedef struct TextureFixture065 {
    unsigned int allocation_calls;
    unsigned int releases;
    unsigned int reports;
    unsigned int invalid;
    unsigned int fail_call;
    unsigned int release_order[2];
    unsigned int report_status;
    unsigned int report_detail;
    TextureRequest065 requests[2];
    _Alignas(256) unsigned char storage[2][4352];
} TextureFixture065;

static TextureFixture065 texture_fixture065;

static void *texture_fixture_allocate065(void *context, unsigned int region, unsigned int option,
                                         unsigned int selector, unsigned int bytes)
{
    TextureFixture065 *fixture = context;
    unsigned int index = fixture->allocation_calls++;
    if (index >= 2) {
        fixture->invalid = 1;
        return 0;
    }
    TextureRequest065 *request = fixture->requests + index;
    request->region = region;
    request->option = option;
    request->selector = selector;
    request->bytes = bytes;
    request->live = 0;
    if (region != 0x10000 || option != 0x100 || selector != 0 || bytes > 4096) {
        fixture->invalid = 1;
        return 0;
    }
    if (fixture->fail_call == index + 1)
        return 0;
    request->live = 1;
    return fixture->storage[index];
}

static void texture_fixture_release065(void *context, unsigned int region, unsigned int option,
                                       unsigned int selector, void *memory)
{
    TextureFixture065 *fixture = context;
    for (unsigned int index = 0; index < 2; ++index) {
        if (memory == fixture->storage[index]) {
            if (region != 0x10000 || option != 0x100 || selector != 0 ||
                !fixture->requests[index].live || fixture->releases >= 2) {
                fixture->invalid = 1;
                return;
            }
            fixture->requests[index].live = 0;
            fixture->release_order[fixture->releases++] = index;
            return;
        }
    }
    fixture->invalid = 1;
}

static void texture_fixture_report065(void *context, unsigned int status, unsigned int detail)
{
    TextureFixture065 *fixture = context;
    ++fixture->reports;
    fixture->report_status = status;
    fixture->report_detail = detail;
}

void *effect_texture_original_allocate065(unsigned int region, unsigned int option,
                                          unsigned int selector, unsigned int bytes)
{
    return texture_fixture_allocate065(&texture_fixture065, region, option, selector, bytes);
}

void effect_texture_original_release065(unsigned int region, unsigned int option,
                                        unsigned int selector, void *memory)
{
    texture_fixture_release065(&texture_fixture065, region, option, selector, memory);
}

void effect_texture_original_report065(unsigned int status, unsigned int detail)
{
    texture_fixture_report065(&texture_fixture065, status, detail);
}

static EffectTextureServices065 texture_services065 = {
    texture_fixture_allocate065, texture_fixture_release065, texture_fixture_report065, &texture_fixture065
};

const EffectTextureServices065 *effect_texture_fixture065_services(unsigned int allocate,
                                                                  unsigned int release, unsigned int report)
{
    texture_services065.allocate = allocate ? texture_fixture_allocate065 : 0;
    texture_services065.release = release ? texture_fixture_release065 : 0;
    texture_services065.report = report ? texture_fixture_report065 : 0;
    return &texture_services065;
}

void *effect_texture_fixture065_state(void)
{
    return &texture_fixture065;
}

void effect_texture_fixture065_reset(unsigned int fail_call)
{
    unsigned int *words = (unsigned int *)&texture_fixture065;
    for (unsigned int index = 0; index < sizeof(texture_fixture065) / 4; ++index)
        words[index] = 0xa5a5a5a5u;
    texture_fixture065.allocation_calls = 0;
    texture_fixture065.releases = 0;
    texture_fixture065.reports = 0;
    texture_fixture065.invalid = 0;
    texture_fixture065.fail_call = fail_call;
}

const unsigned int effect_texture_fixture_layout065[] = {
    sizeof(TextureFixture065), __builtin_offsetof(TextureFixture065, requests), sizeof(TextureRequest065),
    __builtin_offsetof(TextureFixture065, storage), sizeof(texture_fixture065.storage[0]),
    sizeof(EffectTextureServices065), sizeof(void *)
};
