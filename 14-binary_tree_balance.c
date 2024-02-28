#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of tree
 * @tree: Input, tree
 *
 * Return: height diff (bal factor)
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, balance_factor;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	balance_factor = left_height - right_height;
	return (balance_factor);
}

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
