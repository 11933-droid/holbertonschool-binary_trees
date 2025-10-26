#include "binary_trees.h"

/* local helper uses -1 for NULL height */
static int bt_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 *
 * Return: balance factor (left_height - right_height), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int lh = 0, rh = 0;

if (tree == NULL)
return (0);

lh = bt_height(tree->left);
rh = bt_height(tree->right);

return (lh - rh);
}

/**
 * bt_height - computes height in edges with NULL = -1 (leaf = 0)
 * @tree: pointer to node
 *
 * Return: height as int; -1 if tree is NULL
 */
static int bt_height(const binary_tree_t *tree)
{
int hl, hr;

if (tree == NULL)
return (-1);

hl = bt_height(tree->left);
hr = bt_height(tree->right);

return ((hl > hr) ? (hl + 1) : (hr + 1));
}

