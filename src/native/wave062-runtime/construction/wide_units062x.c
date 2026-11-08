#include "construction062x.h"

SdkWord062s sdk_wide_length062x(const SdkWideUnit062x *text)
{
    SdkWord062s length = 0;
    while (*text != 0) {
        ++text;
        ++length;
    }
    return length;
}

SdkWideUnit062x *sdk_wide_copy062x(SdkWideUnit062x *destination,
    const SdkWideUnit062x *source)
{
    SdkWideUnit062x *result = destination;
    SdkWideUnit062x unit;
    do {
        unit = *source++;
        *destination++ = unit;
    } while (unit != 0);
    return result;
}
