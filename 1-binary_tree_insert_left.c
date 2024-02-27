#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts tree node lef
 * @parent: Input, parent of child to be created
 * @value: Input, data
 *
 * Return: tree_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_left;

	if (parent == NULL)
		return (NULL);

	new_node_left = binary_tree_node(parent, value);
	if (new_node_left == NULL)
		return (NULL);

	new_node_left->left = parent->left;
	if (new_node_left->left != NULL)
		new_node_left->left->parent = new_node_left;

	parent->left = new_node_left;
	return (new_node_left);
}
