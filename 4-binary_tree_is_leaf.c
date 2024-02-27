#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: Input, node
 *
 * Return: status
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
