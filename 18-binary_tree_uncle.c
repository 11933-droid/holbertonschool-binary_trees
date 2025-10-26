#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node
 *
 * Return: pointer to the uncle, or NULL if absent
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *p, *g;

if (!node || !(node->parent) || !(node->parent->parent))
return (NULL);

p = node->parent;
g = p->parent;

if (g->left == p)
return (g->right);
else
return (g->left);
}

