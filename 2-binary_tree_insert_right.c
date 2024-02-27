#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts tree node right
 * @parent: Input, parent of child to be created
 * @value: Input, data
 *
 * Return: tree_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right;

	if (parent == NULL)
		return (NULL);

	new_node_right = binary_tree_node(parent, value);
	if (new_node_right == NULL)
		return (NULL);

	new_node_right->right = parent->right;
	if (new_node_right->right != NULL)
		new_node_right->right->parent = new_node_right;

	parent->right = new_node_right;
	return (new_node_right);
}
