#include "tree_erase062z.h"
#define OFFSET(type, field) __builtin_offsetof(type, field)

void *sdk_tree_read_pointer062z(const void *field)
{
    void *value;
    __builtin_memcpy(&value, field, sizeof(value));
    return value;
}

void sdk_tree_write_pointer062z(void *field, void *value)
{
    __builtin_memcpy(field, &value, sizeof(value));
}

static SdkWord062s offset(enum SdkTreeField062z field)
{
    if (field == SDK_TREE_PARENT062Z)
        return OFFSET(SdkTreeNodeLayout062z, parent);
    if (field == SDK_TREE_LEFT062Z)
        return OFFSET(SdkTreeNodeLayout062z, left);
    return OFFSET(SdkTreeNodeLayout062z, right);
}

void *sdk_tree_link062z(const void *node, enum SdkTreeField062z field)
{
    return sdk_tree_read_pointer062z((const SdkByte062s *)node + offset(field));
}

void sdk_tree_set_link062z(void *node, enum SdkTreeField062z field, void *value)
{
    sdk_tree_write_pointer062z((SdkByte062s *)node + offset(field), value);
}

SdkByte062s sdk_tree_color062z(const void *node)
{
    return *(const SdkByte062s *)node;
}

void sdk_tree_set_color062z(void *node, SdkByte062s black)
{
    *(SdkByte062s *)node = black;
}

void *sdk_tree_head062z(const void *store)
{
    return sdk_tree_read_pointer062z((const SdkByte062s *)store +
        OFFSET(SdkTreeStoreLayout062z, head));
}

void sdk_tree_rotate062z(void *store, void *node, SdkWord062s left)
{
    enum SdkTreeField062z outward = left ? SDK_TREE_RIGHT062Z : SDK_TREE_LEFT062Z;
    enum SdkTreeField062z inward = left ? SDK_TREE_LEFT062Z : SDK_TREE_RIGHT062Z;
    void *replacement = sdk_tree_link062z(node, outward);
    void *middle = sdk_tree_link062z(replacement, inward);
    sdk_tree_set_link062z(node, outward, middle);
    if (middle != 0)
        sdk_tree_set_link062z(middle, SDK_TREE_PARENT062Z, node);
    void *parent = sdk_tree_link062z(node, SDK_TREE_PARENT062Z);
    sdk_tree_set_link062z(replacement, SDK_TREE_PARENT062Z, parent);
    void *head = sdk_tree_head062z(store);
    if (parent == head)
        sdk_tree_set_link062z(head, SDK_TREE_PARENT062Z, replacement);
    else if (sdk_tree_link062z(parent, SDK_TREE_LEFT062Z) == node)
        sdk_tree_set_link062z(parent, SDK_TREE_LEFT062Z, replacement);
    else
        sdk_tree_set_link062z(parent, SDK_TREE_RIGHT062Z, replacement);
    sdk_tree_set_link062z(replacement, inward, node);
    sdk_tree_set_link062z(node, SDK_TREE_PARENT062Z, replacement);
}
