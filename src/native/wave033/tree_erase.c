#include "tree_erase.h"

static TreeNode033 *minimum(TreeNode033 *node)
{
    while (node->left) node = node->left;
    return node;
}

static TreeNode033 *maximum(TreeNode033 *node)
{
    while (node->right) node = node->right;
    return node;
}

static TreeNode033 *successor(TreeNode033 *node)
{
    if (node->right) return minimum(node->right);
    TreeNode033 *parent = node->parent;
    while (node == parent->right) {
        node = parent;
        parent = parent->parent;
    }
    if (node->right != parent) node = parent;
    return node;
}

static void replace(TreeControl033 *tree, TreeNode033 *old, TreeNode033 *incoming)
{
    if (tree->head->parent == old) tree->head->parent = incoming;
    else if (old->parent->left == old) old->parent->left = incoming;
    else old->parent->right = incoming;
}

TreeIterator033 *tree_erase033(TreeIterator033 *output, TreeControl033 *tree, const TreeIterator033 *input)
{
    TreeNode033 *removed = input->node;
    TreeNode033 *head = tree->head;
    if (removed == head) {
        output->node = head;
        return output;
    }
    TreeNode033 *next = successor(removed);
    TreeNode033 *replacement = removed;
    TreeNode033 *child = removed->right;
    if (removed->left) {
        if (!child) child = removed->left;
        else {
            replacement = minimum(child);
            child = replacement->right;
        }
    }
    if (!removed->left && !child) {
        child = removed->parent;
        if (child == head) {
            head->right = head;
            head->left = head;
            head->parent = (void *)0;
        } else if (child->left == removed) {
            child->left = (void *)0;
            if (head->left == removed) head->left = child;
        } else {
            child->right = (void *)0;
            if (head->right == removed) head->right = child;
        }
    } else if (replacement != removed) {
        removed->left->parent = replacement;
        replacement->left = removed->left;
        if (removed->right != replacement) {
            if (child) child->parent = replacement->parent;
            replacement->parent->left = child;
            replacement->right = removed->right;
            removed->right->parent = replacement;
        } else if (child) child->parent = replacement;
        replace(tree, removed, replacement);
        replacement->parent = removed->parent;
        if (!child) child = replacement;
        unsigned char color = replacement->black;
        replacement->black = removed->black;
        removed->black = color;
    } else {
        child->parent = removed->parent;
        replace(tree, removed, child);
        if (head->left == removed)
            head->left = removed->right ? minimum(child) : removed->parent;
        if (head->right == removed)
            head->right = removed->left ? maximum(child) : removed->parent;
    }
    if (child != head && removed->black) tree_rebalance033(tree, child);
    removed->right = tree->recycled;
    tree->recycled = removed;
    --tree->count;
    output->node = next;
    return output;
}
