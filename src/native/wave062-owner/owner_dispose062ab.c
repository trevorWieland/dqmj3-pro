#include "owner062ab.h"

void sdk_owner_dispose062ab(void *payload)
{
    if (payload == 0)
        return;
    SdkByte062s *allocation = (SdkByte062s *)payload - 8;
    void (*dispose)(void *);
    SdkByte062s *output = (SdkByte062s *)&dispose;
    for (SdkWord062s i = 0; i < sizeof(dispose); ++i)
        output[i] = allocation[i];
    if (dispose != 0)
        dispose(allocation);
    else
        sdk_owner_default_dispose062ab(allocation);
}

void sdk_owner_release062ab(SdkOwner062ab *owner)
{
    sdk_owner_dispose062ab(sdk_owner_destroy062ab(owner));
}
