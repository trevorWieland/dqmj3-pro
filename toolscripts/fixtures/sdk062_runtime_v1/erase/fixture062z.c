#include "tree_erase062z.h"
#define OFFSET(type, field) __builtin_offsetof(type, field)
const SdkWord062s fixture_tree_prefix_layout062z[] = {
    sizeof(void *), sizeof(SdkTreeNodeLayout062z),
    OFFSET(SdkTreeNodeLayout062z, parent), OFFSET(SdkTreeNodeLayout062z, left),
    OFFSET(SdkTreeNodeLayout062z, right), OFFSET(SdkNode062s, parent),
    OFFSET(SdkNode062s, left), OFFSET(SdkNode062s, right),
    OFFSET(SdkTreeStoreLayout062z, free_nodes),
    OFFSET(SdkTreeStoreLayout062z, head), OFFSET(SdkTreeStoreLayout062z, count),
    OFFSET(SdkMap062s, free_nodes), OFFSET(SdkMap062s, head), OFFSET(SdkMap062s, count)
};
