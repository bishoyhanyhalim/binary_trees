#include "binary_trees.h"

/**
 * binary_tree_insert_right - this is func create a create_create_new_node
 *
 * @parent: is pointer for parent
 * @value: is value for create_create_new_node_node node
 *
 * Return: the pointer to create_create_new_node node or null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *create_new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	create_new_node = binary_tree_node(parent, value);

	if (create_new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		create_new_node->right = parent->right;
		parent->right->parent = create_new_node;
	}

	parent->right = create_new_node;

	return (create_new_node);
}
