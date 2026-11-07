#include "../src/native/wave033/tree_erase.h"
#define OFFSET(type, field) __builtin_offsetof(type, field)
const unsigned int tree_layout_values033[] = {
    sizeof(TreeNode033), OFFSET(TreeNode033, black), OFFSET(TreeNode033, parent),
    OFFSET(TreeNode033, left), OFFSET(TreeNode033, right), sizeof(TreeControl033),
    OFFSET(TreeControl033, recycled), OFFSET(TreeControl033, head), OFFSET(TreeControl033, count),
    sizeof(TreeIterator033), OFFSET(TreeIterator033, node)
};
const unsigned int *tree_layout033(void) { return tree_layout_values033; }
