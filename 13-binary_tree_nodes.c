#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with min 1 child
 * @tree: Input, root
 *
 * Return: parents
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else if (tree->left != NULL && tree->right == NULL)
		return (binary_tree_nodes(tree->left) + 1);
	else if (tree->left == NULL && tree->right != NULL)
		return (binary_tree_nodes(tree->right) + 1);
	else
		return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->right) + 1);

}
