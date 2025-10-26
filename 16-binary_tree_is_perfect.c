#include "binary_trees.h"

/* local helpers */
static size_t bt_height(const binary_tree_t *tree);
static size_t bt_size(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root
 *
 * Return: 1 if perfect, 0 otherwise (including tree == NULL)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t h, sz, expected;

if (tree == NULL)
return (0);

h = bt_height(tree);
sz = bt_size(tree);

/* expected nodes in perfect tree with height h: 2^(h+1) - 1 */
/* avoid pow(); use shift */
if (h >= (8 * sizeof(unsigned long) - 1))
return (0); /* defensive: overflow */

expected = ((size_t)1 << (h + 1)) - 1;

return (sz == expected);
}

static size_t bt_height(const binary_tree_t *tree)
{
size_t hl, hr;

if (tree == NULL)
return (0);

hl = tree->left  ? (1 + bt_height(tree->left))  : 0;
hr = tree->right ? (1 + bt_height(tree->right)) : 0;

return ((hl >= hr) ? hl : hr);
}

static size_t bt_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (1 + bt_size(tree->left) + bt_size(tree->right));
}

