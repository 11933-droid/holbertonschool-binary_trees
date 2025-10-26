#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root
 *
 * Return: 1 if full, 0 otherwise (including tree == NULL)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);

/* leaf node */
if (!tree->left && !tree->right)
return (1);

/* internal node: must have two children and both subtrees full */
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));

return (0);
}

