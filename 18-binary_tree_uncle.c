#include "binary_trees.h"

/**
 * binary_tree_uncle - returns sibling of parent of node
 * @node: Input, node
 *
 * Return: uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	else
		return (binary_tree_sibling(node->parent));
}

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
