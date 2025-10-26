#include "binary_trees.h"

/* Forward static helper */
static size_t bt_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 *
 * Return: balance factor (left_height - right_height), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int lh = 0, rh = 0;

if (!tree)
return (0);

lh = (int)bt_height(tree->left);
rh = (int)bt_height(tree->right);

return (lh - rh);
}

/**
 * bt_height - computes height of a binary tree (leaf has height 0)
 * @tree: pointer to node
 *
 * Return: height, or 0 if tree is NULL
 */
static size_t bt_height(const binary_tree_t *tree)
{
size_t hl, hr;

if (!tree)
return (0);

hl = tree->left  ? 1 + bt_height(tree->left)  : 0;
hr = tree->right ? 1 + bt_height(tree->right) : 0;

return (hl >= hr) ? hl : hr;
}

