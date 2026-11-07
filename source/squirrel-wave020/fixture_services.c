#include "fixture_internal.h"

static _Noreturn void unsupported(SqPrototypeU32 reason)
{
    lookup_fixture020.fault = reason;
    for (;;) { }
}

void *sq_opaque_array_allocate012(SqPrototypeU32 bytes) { (void)bytes; unsupported(80); }
void *sq_reallocate(void *storage, SqU32 old_bytes, SqU32 new_bytes)
{
    (void)storage; (void)old_bytes; (void)new_bytes; unsupported(81);
}

_Bool sq_lookup_invoke020(void *vm, const SqPrefixObject012 *callable, SqPrototypeI32 arguments,
    SqPrototypeI32 base, SqPrefixObject012 *destination, SqPrototypeU32 raise_error)
{
    lookup_fixture020.invoke_calls++;
    fixture_event020(2, arguments, (SqPrototypeU32)base);
    if (vm != fixture_vm020() || arguments != 2 || raise_error || callable->type != 0x08000100u) unsupported(82);
    if (lookup_fixture020.variant == 14) return 0;
    SqScriptClosure017 *closure = callable->value.reference;
    SqPrototype011 *prototype = closure->function.value.reference;
    SqPrefixObject012 result = {0x05000002u, {.integer = arguments + prototype->stack_size + 700}};
    if (lookup_fixture020.variant == 65) {
        sq_prefix_clear(&fixture_class020(0)->members44.values[0].primary);
        sq_prefix_clear(&fixture_class020(1)->members44.values[0].primary);
        for (SqPrototypeI32 index = 0; index < fixture_table_at020(0x9100)->node_count; ++index)
            sq_prefix_clear(&fixture_table_at020(0x9100)->nodes[index].value);
        SqString015 *key = fixture_key020()->value.reference;
        for (SqPrototypeU32 table_index = 0; table_index < 10; ++table_index) {
            SqTable019 *table = fixture_table_at020(0xa000 + table_index * 0x100);
            for (SqPrototypeI32 index = 0; index < table->node_count; ++index) {
                SqPrefixObject012 *slot = &table->nodes[index].key;
                if (slot->type == 0x08000010u && slot->value.reference == key) sq_prefix_clear(slot);
            }
            table->used = 0;
        }
        for (SqPrototypeI32 index = 0; index < fixture_table_at020(0x9200)->node_count; ++index)
            sq_prefix_clear(&fixture_table_at020(0x9200)->nodes[index].key);
        fixture_table_at020(0x9200)->used = 0;
        fixture_observe_key020(key);
    }
    sq_prefix_assign(destination, &result);
    return 1;
}

void *sq_lookup_reallocate020(void *storage, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes)
{
    fixture_event020(3, old_bytes, new_bytes);
    if (new_bytes > 8192) unsupported(83);
    unsigned char *result = table_fixture019.memory + (storage == table_fixture019.memory + 0x2c000 ? 0x34000 : 0x2c000);
    for (SqPrototypeU32 index = 0; index < old_bytes && index < new_bytes; ++index) result[index] = ((const unsigned char *)storage)[index];
    if (lookup_fixture020.variant == 62) {
        fixture_shared020()->scratch = (void *)(table_fixture019.memory + 0x34000);
        fixture_shared020()->scratch_capacity = 777;
        fixture_vm020()->shared = fixture_state019(1);
    }
    lookup_fixture020.scratch_calls++;
    return result;
}

void sq_lookup_format_integer020(char *destination, SqPrototypeI32 integer)
{
    char digits[16];
    SqPrototypeU32 count = 0, value = integer < 0 ? 0u - (SqPrototypeU32)integer : (SqPrototypeU32)integer;
    do { digits[count++] = (char)('0' + value % 10); value /= 10; } while (value);
    if (integer < 0) *destination++ = '-';
    while (count) *destination++ = digits[--count];
    *destination = 0;
}

void sq_lookup_format_float020(char *destination, double value)
{
    (void)destination; (void)value; unsupported(84);
}

void sq_lookup_vformat020(char *destination, const char *format, SqLookupVarargs020 arguments)
{
    while (*format) {
        if (*format != '%') { *destination++ = *format++; continue; }
        ++format;
        if (*format == '%') { *destination++ = *format++; continue; }
        SqPrototypeU32 precision = 0xffffffffu;
        if (*format == '.') {
            precision = 0; ++format;
            while (*format >= '0' && *format <= '9') precision = precision * 10 + (SqPrototypeU32)(*format++ - '0');
        }
        if (*format++ != 's') unsupported(85);
        const char *value = __builtin_va_arg(arguments, const char *);
        for (SqPrototypeU32 index = 0; index < precision && value[index]; ++index) *destination++ = value[index];
    }
    *destination = 0;
}

#ifdef _WIN32
int _fltused;
#endif
