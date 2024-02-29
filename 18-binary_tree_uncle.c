#include "binary_trees.h"

/**
 * binary_tree_uncle - returns sibling of parent of node
 * @node: Input, node
 *
 * Return: uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	else
		return (binary_tree_sibling(node->parent));
}
