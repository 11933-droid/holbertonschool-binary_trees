#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node
 *
 * Return: pointer to sibling, or NULL if no sibling/parent/node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *p;

if (!node || !(node->parent))
return (NULL);

p = node->parent;

if (p->left == node)
return (p->right);
if (p->right == node)
return (p->left);

return (NULL);
}

