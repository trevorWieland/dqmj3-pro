/* Release an owned object through its virtual table.
 *
 * STATUS: reconstructed, byte-identical at all fifteen addresses (40 bytes
 * each, 600 bytes).
 *
 * The 40-byte body at 0x0079ecac appears byte for byte at fifteen addresses:
 * the original build instantiated the same handle template once per element
 * type, and the released object's destructor is reached through slot 1 of its
 * virtual table, so the instantiation does not depend on the element type.
 *
 * The handle itself is returned unchanged, which is what a `release()` that
 * hands the handle back for chaining does.
 */

typedef struct ReleasedObject ReleasedObject;
struct ReleasedObject {
    void (**vtable)(ReleasedObject *);   /* 0x00 */
};

#define OWNED_OBJECT_RELEASE(name)                                           \
    void *name(void *handle)                                                 \
    {                                                                        \
        ReleasedObject *released = *(ReleasedObject **)handle;               \
        if (released)                                                        \
            released->vtable[1](released);                                   \
        return handle;                                                       \
    }

OWNED_OBJECT_RELEASE(fn_0079ecac)
OWNED_OBJECT_RELEASE(fn_0079ed1c)
OWNED_OBJECT_RELEASE(fn_0079ed44)
OWNED_OBJECT_RELEASE(fn_0079ed6c)
OWNED_OBJECT_RELEASE(fn_0079ed94)
OWNED_OBJECT_RELEASE(fn_0079ede4)
OWNED_OBJECT_RELEASE(fn_0079ee0c)
OWNED_OBJECT_RELEASE(fn_0079ee34)
OWNED_OBJECT_RELEASE(fn_0079ee5c)
OWNED_OBJECT_RELEASE(fn_0079ee84)
OWNED_OBJECT_RELEASE(fn_0079eeac)
OWNED_OBJECT_RELEASE(fn_0079ef28)
OWNED_OBJECT_RELEASE(fn_0079ef50)
OWNED_OBJECT_RELEASE(fn_0079ef78)
OWNED_OBJECT_RELEASE(fn_0079efd4)
