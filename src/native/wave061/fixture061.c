#include "asset061.h"

#define O(type, member) ((Word058)__builtin_offsetof(type, member))

const Word058 fixture_layout061[] = {
    sizeof(void *), sizeof(AssetSpace061), sizeof(AssetWorkspace061),
    O(AssetWorkspace061, state), O(AssetWorkspace061, fixed), O(AssetWorkspace061, fast),
    sizeof(State058), sizeof(StreamState056), sizeof(Stream058),
    O(AssetSpace061, cursor), O(AssetSpace061, end)
};
