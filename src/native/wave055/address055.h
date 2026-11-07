#ifndef DQMJ3_ADDRESS055_H
#define DQMJ3_ADDRESS055_H

typedef unsigned int AddressWord055;

typedef struct AddressWindow055 {
    AddressWord055 base;
    AddressWord055 length;
} AddressWindow055;

typedef struct AddressOffsets055 {
    AddressWord055 second;
    AddressWord055 first;
} AddressOffsets055;

typedef struct AddressRegion055 {
    AddressWord055 target_address;
    AddressWord055 opaque;
    AddressWord055 length;
} AddressRegion055;

#if defined(_WIN32)
#define ADDRESS_API055 __declspec(dllexport)
#else
#define ADDRESS_API055
#endif

extern ADDRESS_API055 AddressWindow055 address_first055;
extern ADDRESS_API055 AddressWindow055 address_second055;
extern ADDRESS_API055 AddressOffsets055 address_offsets055;
extern ADDRESS_API055 AddressRegion055 *address_region055;

ADDRESS_API055 AddressWord055 address_first_base055(void);
ADDRESS_API055 AddressWord055 address_first_length055(void);
ADDRESS_API055 AddressWord055 address_second_base055(void);
ADDRESS_API055 AddressWord055 address_second_length055(void);
ADDRESS_API055 AddressWord055 address_first_map055(AddressWord055 address,AddressWord055 length);
ADDRESS_API055 AddressWord055 address_second_map055(AddressWord055 address,AddressWord055 length);
ADDRESS_API055 AddressWord055 address_second_enabled055(void);
ADDRESS_API055 AddressWord055 address_region_length055(void);
ADDRESS_API055 AddressWord055 address_region_base055(void);
ADDRESS_API055 AddressWord055 address_convert055(AddressWord055 address);
ADDRESS_API055 AddressWord055 address_convert_entry055(AddressWord055 address);

_Static_assert(sizeof(AddressWord055) == 4, "target address token width");
_Static_assert(sizeof(AddressRegion055) == 12, "explicit portable region binding");

#endif
