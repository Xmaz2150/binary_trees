#include "binary_trees.h"

/**
 * binary_tree_depth - returns depth of a node from root
 * @tree: Input, tree
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *tmp;
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	tmp = tree;
	while (tmp->parent != NULL)
	{
		depth++;
		tmp = tmp->parent;
	}

	return (depth);
}
