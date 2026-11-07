#include "address055.h"

AddressWindow055 address_first055;
AddressWindow055 address_second055;
AddressOffsets055 address_offsets055;
AddressRegion055 *address_region055;

AddressWord055 address_first_base055(void) { return address_first055.base; }
AddressWord055 address_first_length055(void) { return address_first055.length; }
AddressWord055 address_second_base055(void) { return address_second055.base; }
AddressWord055 address_second_length055(void) { return address_second055.length; }

AddressWord055 address_first_map055(AddressWord055 address,AddressWord055 length) {
    AddressWord055 next = address+length;
    AddressWord055 base = address_first_base055();
    AddressWord055 end = base+address_first_length055();
    if (base <= address && address <= end && base <= next && next <= end && address < next)
        return address_offsets055.first+address;
    return 0;
}

AddressWord055 address_second_map055(AddressWord055 address,AddressWord055 length) {
    AddressWord055 next = address+length;
    AddressWord055 base = address_second_base055();
    if (base > address || address >= next)
        return 0;
    if (base+address_second_length055() < next)
        return 0;
    return address_offsets055.second+address;
}

AddressWord055 address_second_enabled055(void) {
    return address_second055.length != 0;
}

AddressWord055 address_region_length055(void) {
    return address_region055 ? address_region055->length : 0;
}

AddressWord055 address_region_base055(void) {
    if (!address_region055)
        return 0;
#if defined(__arm__) && !defined(__aarch64__)
    return (AddressWord055)(__UINTPTR_TYPE__)address_region055+128u;
#else
    return address_region055->target_address+128u;
#endif
}

AddressWord055 address_convert055(AddressWord055 address) {
    AddressWord055 converted = address_first_map055(address,1);
    if (converted)
        return converted;
    if (address-0x1f000000u < 0x600000u || address == 0x1f600000u)
        return address-0x7000000u;
    if (address_second_enabled055()) {
        converted = address_second_map055(address,1);
        if (converted)
            return converted;
    }
    AddressWord055 base = address_region_base055();
    AddressWord055 length = address_region_length055();
    if (!base || address < base || address >= base+length)
        return 0;
    return base >= 0x30000000u ? address-0x10000000u : address+0xc000000u;
}

AddressWord055 address_convert_entry055(AddressWord055 address) {
    return address_convert055(address);
}
