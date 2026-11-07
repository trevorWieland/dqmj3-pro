#ifndef DQMJ3_TREE_ERASE033_H
#define DQMJ3_TREE_ERASE033_H

typedef struct TreeNode033 {
    unsigned char black;
    unsigned char opaque[3];
    struct TreeNode033 *parent;
    struct TreeNode033 *left;
    struct TreeNode033 *right;
} TreeNode033;

typedef struct TreeControl033 {
    unsigned int opaque0;
    TreeNode033 *recycled;
    unsigned int opaque8;
    unsigned int opaque12;
    TreeNode033 *head;
    unsigned int count;
} TreeControl033;

typedef struct TreeIterator033 { TreeNode033 *node; } TreeIterator033;
_Static_assert(sizeof(unsigned int) == 4, "Tree count must be 32-bit");
TreeIterator033 *tree_erase033(TreeIterator033 *output, TreeControl033 *tree, const TreeIterator033 *input);
void tree_rebalance033(TreeControl033 *tree, TreeNode033 *node);

#endif
