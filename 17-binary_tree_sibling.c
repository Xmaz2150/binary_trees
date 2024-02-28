#include "binary_trees.h"

/**
 * binary_tree_sibling - returns sibling of node
 * @node: Input, node
 *
 * Return: sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);

	parent = node->parent;
	if (parent == NULL)
		return (NULL);

	if (parent->right)
	{
		if (parent->left)
		{
			if (parent->left->n == node->n)
			{
				if (parent->right)
					return (parent->right);
			}
			else
				return (parent->left);
		}
		else
			return (NULL);
	}
	else if (parent->left)
	{
		if (parent->right)
			return (parent->right);
		else
			return (NULL);
	}

	return (NULL);

}
