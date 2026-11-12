/* Destroy and release every object an owner holds in two pointer ranges.
 *
 * STATUS: reconstructed, byte-identical at all four addresses (184 bytes each,
 * 736 bytes).
 *
 * The 184-byte body at 0x003bfd60 appears byte for byte at four addresses. It
 * walks two half-open ranges of object pointers; for each non-null object it
 * calls virtual slot 6 (the destructor), re-reads the slot because the
 * destructor may clear it, calls virtual slot 1 (the deallocator) when a pointer
 * remains, and clears the slot.
 *
 * The two ranges are the same code at different offsets, which is why the body
 * is written once and the ranges are walked by the same loop twice. Slot
 * numbers are the original's virtual-table byte offsets 0x18 and 0x04 divided
 * by the pointer size.
 */

typedef struct OwnedObject OwnedObject;
struct OwnedObject {
    void (**vtable)(OwnedObject *);   /* 0x00 */
};

typedef struct OwnedRanges OwnedRanges;
struct OwnedRanges {
    unsigned int reserved0[0x2a];     /* 0x00 .. 0xa7: not addressed here */
    OwnedObject **first;              /* 0xa8 */
    OwnedObject **firstEnd;           /* 0xac */
    unsigned int reservedb0;          /* 0xb0: not addressed here */
    OwnedObject **second;             /* 0xb4 */
    OwnedObject **secondEnd;          /* 0xb8 */
};

#define OWNED_RANGES_DESTROY(name)                                           \
    void name(OwnedRanges *owner)                                            \
    {                                                                        \
        OwnedObject **slot;                                                  \
        for (slot = owner->second; slot != owner->secondEnd; ++slot) {       \
            OwnedObject *object = *slot;                                     \
            if (object) {                                                    \
                object->vtable[6](object);                                   \
                object = *slot;                                              \
                if (object)                                                  \
                    object->vtable[1](object);                               \
                *slot = 0;                                                   \
            }                                                                \
        }                                                                    \
        for (slot = owner->first; slot != owner->firstEnd; ++slot) {         \
            OwnedObject *object = *slot;                                     \
            if (object) {                                                    \
                object->vtable[6](object);                                   \
                object = *slot;                                              \
                if (object)                                                  \
                    object->vtable[1](object);                               \
                *slot = 0;                                                   \
            }                                                                \
        }                                                                    \
    }

OWNED_RANGES_DESTROY(fn_003bfd60)
OWNED_RANGES_DESTROY(fn_003fc820)
OWNED_RANGES_DESTROY(fn_00438b90)
OWNED_RANGES_DESTROY(fn_00583248)
