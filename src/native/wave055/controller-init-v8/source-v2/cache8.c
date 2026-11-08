#include "cache8.h"

StateCatalogue8 state_catalogue8;
StateWord055 state_cache_masks8[3][6];

static void include_group8(StateWord055 mask[6],const StateWord055 *indices,StateWord055 capacity) {
    for (StateWord055 i=0;i<capacity && indices[i]!=189;i++)
        mask[indices[i]/32]|=1u<<(indices[i]&31);
}

int state_cache_construct8(StateFullCache8 *cache) {
    state_apply_globals055.selection=&cache->common;
    unsigned char *bytes=(unsigned char *)cache;
    for (StateWord055 i=0;i<sizeof(*cache);i++)
        bytes[i]=0;
    state_apply_globals055.opaque[0]=1;
    state_apply_globals055.opaque[1]=1;
    state_apply_globals055.stage_mode=0xffffffffu;
    state_builtin_catalogue8(&state_catalogue8);
    state_register_numbers8(state_apply_headers055);
    state_cache_defaults8(cache);
    for (StateWord055 i=0;i<189;i++) {
        cache->common.values[i]=cache->default_values[i];
        cache->formats[i]=cache->default_formats[i];
    }
    for (StateWord055 group=0;group<3;group++)
        for (StateWord055 word=0;word<6;word++)
            state_cache_masks8[group][word]=0;
    include_group8(state_cache_masks8[0],state_apply_globals055.list_values,24);
    include_group8(state_cache_masks8[1],state_apply_globals055.list_auxiliary,6);
    include_group8(state_cache_masks8[1],state_apply_globals055.list_primary,6);
    include_group8(state_cache_masks8[2],state_apply_globals055.list_remaining,157);
    return 0;
}
