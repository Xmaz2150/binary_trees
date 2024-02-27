#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traverses tree
 * @tree: Input, tree to go through
 * @func: Input, address of print function
 *
 * Return: none
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
