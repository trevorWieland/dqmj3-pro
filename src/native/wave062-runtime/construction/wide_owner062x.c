#include "construction062x.h"

SdkWideUnit062x *sdk_wide_create062x(const SdkWideUnit062x **output,
    const SdkWideUnit062x *source)
{
    if (source == 0) {
        *output = 0;
        return 0;
    }
    SdkWord062s count = sdk_wide_length062x(source) + 1;
    SdkWord062s *storage = sdk_allocate062s(4 + count * 2);
    *storage = count;
    SdkWideUnit062x *text = (SdkWideUnit062x *)(storage + 1);
    *output = text;
    return sdk_wide_copy062x(text, source);
}

SdkWideName062x *sdk_wide_destroy062x(SdkWideName062x *name)
{
    const SdkWideUnit062x *text = name->text;
    name->methods = &sdk_wide_name_identity062x;
    if (text != 0 && (__UINTPTR_TYPE__)text != 4) {
        SdkByte062s *payload = (SdkByte062s *)text - 4;
        SdkWideAllocation062x *allocation =
            (SdkWideAllocation062x *)(payload - 8);
        if (allocation->dispose != 0)
            allocation->dispose(allocation);
        else
            sdk_wide_default_dispose062x(allocation);
    }
    return name;
}
