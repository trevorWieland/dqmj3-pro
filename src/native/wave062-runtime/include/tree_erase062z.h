#ifndef TREE_ERASE062Z_H
#define TREE_ERASE062Z_H
#include "sdk062s.h"

typedef struct SdkTreeNodeLayout062z {
    SdkByte062s black;
    void *parent;
    void *left;
    void *right;
} SdkTreeNodeLayout062z;

typedef struct SdkTreeStoreLayout062z {
    void *pools;
    void *free_nodes;
    void *next;
    void *limit;
    void *head;
    SdkWord062s count;
} SdkTreeStoreLayout062z;

enum SdkTreeField062z { SDK_TREE_PARENT062Z, SDK_TREE_LEFT062Z, SDK_TREE_RIGHT062Z };
void *sdk_tree_read_pointer062z(const void *);
void sdk_tree_write_pointer062z(void *, void *);
void *sdk_tree_link062z(const void *, enum SdkTreeField062z);
void sdk_tree_set_link062z(void *, enum SdkTreeField062z, void *);
SdkByte062s sdk_tree_color062z(const void *);
void sdk_tree_set_color062z(void *, SdkByte062s);
void *sdk_tree_head062z(const void *);
void sdk_tree_rotate062z(void *, void *, SdkWord062s);
void sdk_tree_rebalance062z(void *, void *);
void *sdk_tree_erase062z(void *, void *, const void *);
#endif
