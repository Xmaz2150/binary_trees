#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves
 * @tree: Input, root
 *
 * Return: no leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL && tree->right == NULL)
		return (binary_tree_leaves(tree->right));
	else if (tree->left == NULL && tree->right != NULL)
		return (binary_tree_leaves(tree->right));
	else
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->right));

}
