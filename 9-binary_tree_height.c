#include "binary_trees.h"

/**
 * binary_tree_height - returns height of tree from node
 * @tree: Input, tree
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *tmp;
	size_t height = 0;

	if (tree == NULL)
		return (0);
	tmp = tree;
	while (tmp->right != NULL)
	{
		height++;
		tmp = tmp->right;
	}

	return (height);
}
