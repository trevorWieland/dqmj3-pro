typedef unsigned int u32;

_Static_assert(sizeof(u32) == 4, "32-bit unsigned int storage required");
_Static_assert((u32)-1 == 4294967295u, "32 unsigned value bits required");
