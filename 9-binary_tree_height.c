#include "binary_trees.h"

/**
 * binary_tree_height - returns height of tree from node
 * @tree: Input, tree
 *
 * Return: height
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (-1);
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

