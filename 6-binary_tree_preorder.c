#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traverses tree
 * @tree: Input, tree to go through
 * @func: Input, address of print function
 *
 * Return: none
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
