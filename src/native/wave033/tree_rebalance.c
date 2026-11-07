#include "tree_erase.h"

static int black(const TreeNode033 *node)
{
    return !node || node->black == 1;
}

static void left(TreeControl033 *tree, TreeNode033 *node)
{
    TreeNode033 *pivot = node->right;
    node->right = pivot->left;
    if (pivot->left) pivot->left->parent = node;
    pivot->parent = node->parent;
    if (tree->head->parent == node) tree->head->parent = pivot;
    else if (node->parent->left == node) node->parent->left = pivot;
    else node->parent->right = pivot;
    pivot->left = node;
    node->parent = pivot;
}

static void right(TreeControl033 *tree, TreeNode033 *node)
{
    TreeNode033 *pivot = node->left;
    node->left = pivot->right;
    if (pivot->right) pivot->right->parent = node;
    pivot->parent = node->parent;
    if (tree->head->parent == node) tree->head->parent = pivot;
    else if (node->parent->left == node) node->parent->left = pivot;
    else node->parent->right = pivot;
    pivot->right = node;
    node->parent = pivot;
}

void tree_rebalance033(TreeControl033 *tree, TreeNode033 *node)
{
    while (node != tree->head->parent && node->black == 1) {
        TreeNode033 *parent = node->parent;
        if (node == parent->left) {
            TreeNode033 *sibling = parent->right;
            if (sibling && !sibling->black) {
                sibling->black = 1;
                parent->black = 0;
                left(tree, parent);
                sibling = parent->right;
            }
            if (!sibling) {
                node->black = 0;
                node = parent;
            } else if (black(sibling->left) && black(sibling->right)) {
                sibling->black = 0;
                node = parent;
            } else {
                if (black(sibling->right)) {
                    if (sibling->left) sibling->left->black = 1;
                    sibling->black = 0;
                    right(tree, sibling);
                    sibling = parent->right;
                }
                sibling->black = parent->black;
                parent->black = 1;
                if (sibling->right) sibling->right->black = 1;
                left(tree, parent);
                break;
            }
        } else {
            TreeNode033 *sibling = parent->left;
            if (sibling && !sibling->black) {
                sibling->black = 1;
                parent->black = 0;
                right(tree, parent);
                sibling = parent->left;
            }
            if (!sibling) {
                node->black = 0;
                node = parent;
            } else if (black(sibling->right) && black(sibling->left)) {
                sibling->black = 0;
                node = parent;
            } else {
                if (black(sibling->left)) {
                    if (sibling->right) sibling->right->black = 1;
                    sibling->black = 0;
                    left(tree, sibling);
                    sibling = parent->left;
                }
                sibling->black = parent->black;
                parent->black = 1;
                if (sibling->left) sibling->left->black = 1;
                right(tree, parent);
                break;
            }
        }
    }
    node->black = 1;
}
