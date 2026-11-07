#include "record_storage.h"
#include "prefix_fixture.h"
#include "record_cases.h"

__declspec(dllimport) void *malloc(unsigned long long bytes);
__declspec(dllimport) void free(void *pointer);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) void ExitProcess(unsigned int result) __attribute__((noreturn));

#if PREFIX_OPAQUE_FULL012
typedef SqPrefixCollectable012 FullRecordNode012;
#define record_prefix012(object) ((object).prefix)
#else
typedef SqRef FullRecordNode012;
#define record_prefix012(object) (object)
#endif

typedef struct { SqU32 before; SqPrototypePrefix011 prefix; SqU32 after; } WeakRecordEnvelope012;
typedef struct { SqU32 before; FullRecordNode012 prefix; SqU32 after; } FullRecordEnvelope012;
static SqU32 reallocations, previous_bytes, replacement_bytes, record_stride;

void *sq_reallocate(void *pointer, SqU32 previous, SqU32 replacement)
{
    void *next = malloc(replacement);
    if (previous) __builtin_memcpy(next, pointer, previous);
    free(pointer);
    reallocations++;
    previous_bytes = previous / record_stride;
    replacement_bytes = replacement / record_stride;
    return next;
}

void sq_deallocate(void *pointer, SqU32 bytes) { (void)pointer; (void)bytes; ExitProcess(93); }
void sq_prefix_unhandled012(SqU32 type, void *object) { (void)type; (void)object; ExitProcess(94); }

static SqObject make_object(SqU32 kind, void *pointer)
{
    SqPrefixObject012 value = {kind == 1 ? 0x08002000u : kind == 2 ? 0x08000040u : 0x05000002u, {.reference = 0}};
    if (kind) value.value.reference = pointer;
    else value.value.integer = 17;
    SqObject stored;
    __builtin_memcpy(&stored, &value, sizeof(stored));
    return stored;
}

static SqPrefixObject012 load_object(const void *storage)
{
    SqPrefixObject012 value;
    __builtin_memcpy(&value, storage, sizeof(value));
    return value;
}

static SqU32 object_hash(SqU32 hash, const void *storage, void *const *nodes)
{
    SqPrefixObject012 value = load_object(storage);
    SqU32 logical = value.value.bits;
    if (value.type & 0x08000000u) {
        logical = 0;
        for (SqU32 node = 0; node < 4; node++) if (value.value.reference == nodes[node]) logical = node + 1;
    }
    return (hash * 33 + value.type) * 33 + logical;
}

static void exercise(const RecordCase012 *test, SqU32 index)
{
    WeakRecordEnvelope012 weak[2] = {{0}};
    FullRecordEnvelope012 full[2] = {{0}};
    void *nodes[4] = {&weak[0].prefix, &full[0].prefix, &weak[1].prefix, &full[1].prefix};
    for (SqU32 node = 0; node < 2; node++) {
        weak[node].before = full[node].before = 0x13579bdfu;
        weak[node].after = full[node].after = 0x2468ace0u;
        weak[node].prefix.vtable = &sq_prefix_weak_vtable012;
        record_prefix012(full[node].prefix).vtable = &sq_prefix_full_vtable012;
    }
    weak[1].prefix.references = record_prefix012(full[1].prefix).references = 7;
    SqU32 secondary = test->fill_kind == 1 ? 2 : test->fill_kind == 2 ? 1 : 0;
    SqClassMember009 member_fill = {make_object(test->fill_kind, nodes[2 + (test->fill_kind == 2)]),
                                  make_object(secondary, nodes[2 + (secondary == 2)])};
    SqCallInfo call_fill = {0};
    call_fill.closure = member_fill.primary;
    call_fill.previous_base = 17;
    call_fill.previous_top = 19;
    call_fill.target = -1;
    call_fill.calls = 2;
    call_fill.varargs_size = 3;
    call_fill.varargs_base = 4;
    record_stride = test->group ? sizeof(SqClassMember009) : sizeof(SqCallInfo);
    void *values = test->capacity ? malloc(test->capacity * record_stride) : 0;
    SqCallVector calls = {values, test->size, test->capacity};
    SqClassMemberVector009 members = {values, test->size, test->capacity};
    for (SqU32 position = 0; position < test->size; position++) {
        SqU32 kind = (position + 1) % 3;
        SqObject primary = make_object(kind, nodes[kind == 2]);
        if (kind == 1) weak[0].prefix.references++;
        if (kind == 2) record_prefix012(full[0].prefix).references++;
        if (test->group) {
            SqU32 other = position % 2 == 0 ? 2 : 1;
            members.values[position] = (SqClassMember009){primary, make_object(other, nodes[other == 2])};
            if (other == 1) weak[0].prefix.references++;
            else record_prefix012(full[0].prefix).references++;
        } else {
            calls.values[position] = call_fill;
            calls.values[position].closure = primary;
            calls.values[position].previous_base = position + 1;
            calls.values[position].previous_top = position + 3;
            calls.values[position].target = position + 5;
        }
    }
    __builtin_memset(&sq_prefix_observer012, 0, sizeof(sq_prefix_observer012));
    SqPrefixObject012 observed = {0x05000002u, {.integer = 17}};
    sq_prefix_observer012.destination = &observed;
    sq_prefix_observer012.incoming = test->fill_kind ? nodes[2 + (test->fill_kind == 2)] : 0;
    reallocations = previous_bytes = replacement_bytes = 0;
    if (test->group) sq_prefix_member_resize012(&members, test->requested, &member_fill);
    else sq_prefix_call_resize012(&calls, test->requested, &call_fill);
    SqU32 size = test->group ? members.size : calls.size;
    SqU32 capacity = test->group ? members.capacity : calls.capacity;
    SqU32 hash = 0, signature = 0, canaries = 1;
    for (SqU32 position = 0; position < size; position++) {
        if (test->group) {
            hash = object_hash(hash, &members.values[position].primary, nodes);
            hash = object_hash(hash, &members.values[position].secondary, nodes);
        } else {
            SqCallInfo *frame = &calls.values[position];
            hash = object_hash(hash, &frame->closure, nodes);
            SqU32 fields[] = {(SqU32)frame->previous_base, (SqU32)frame->previous_top, (SqU32)frame->target,
                              (SqU32)frame->calls, (SqU32)frame->root, frame->varargs_size, frame->varargs_base};
            for (SqU32 field = 0; field < 7; field++) signature = signature * 33 + fields[field];
        }
    }
    for (SqU32 node = 0; node < 2; node++)
        canaries &= weak[node].before == 0x13579bdfu && weak[node].after == 0x2468ace0u &&
                    full[node].before == 0x13579bdfu && full[node].after == 0x2468ace0u;
    printf("{\"case\":%u,\"counts\":[%u,%u,%u,%u],\"size\":%u,\"capacity\":%u,\"objectHash\":%u,\"recordHash\":%u,"
           "\"callback\":[%u,%u,%u,%u,%u],\"services\":[%u,%u,%u],\"canaries\":%u}\n",
           index, weak[0].prefix.references, record_prefix012(full[0].prefix).references,
           weak[1].prefix.references, record_prefix012(full[1].prefix).references, size, capacity, hash, signature,
           sq_prefix_observer012.calls, sq_prefix_observer012.kind, sq_prefix_observer012.released_count,
           sq_prefix_observer012.destination_type, sq_prefix_observer012.incoming_count,
           reallocations, previous_bytes, replacement_bytes, canaries);
    free(test->group ? (void *)members.values : (void *)calls.values);
}

void mainCRTStartup(void)
{
    for (SqU32 index = 0; index < sizeof(record_cases012) / sizeof(record_cases012[0]); index++) exercise(record_cases012 + index, index);
    ExitProcess(0);
}
