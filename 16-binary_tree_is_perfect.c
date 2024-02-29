#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks tree symetry
 * @tree: Input, tree
 *
 * Return: status
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);
	left_height = binary_tree_is_perfect(tree->left) + 1;
	right_height = binary_tree_is_perfect(tree->right) + 1;
	if (left_height == right_height)
		return (1);
	else
		return (0);
}
