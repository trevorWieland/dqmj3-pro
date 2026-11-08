#include "owner062ab.h"

SdkWord062s fixture_owner_dispose_count062ab;
void *fixture_owner_dispose_blocks062ab[64];
void *fixture_owner_pool_heads062ab[64][3];
SdkOwner062ab *fixture_owner_current062ab;

void fixture_owner_dispose062ab(void *block)
{
    SdkWord062s index = fixture_owner_dispose_count062ab;
    if (index >= 64)
        __builtin_trap();
    fixture_owner_dispose_blocks062ab[index] = block;
    SdkOwner062ab *owner = fixture_owner_current062ab;
    fixture_owner_pool_heads062ab[index][0] = owner->timer.map.pools;
    fixture_owner_pool_heads062ab[index][1] = owner->map56.pools;
    fixture_owner_pool_heads062ab[index][2] = owner->map88.pools;
    fixture_owner_dispose_count062ab = index + 1;
}

void sdk_owner_default_dispose062ab(void *block)
{
    (void)block;
    __builtin_trap();
}
