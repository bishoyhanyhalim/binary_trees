#include "binary_trees.h"

/**
 * binary_tree_insert_left - this is func create a new node
 *
 * @parent: is pointer for parent
 * @value: is value for new node
 *
 * Return: the pointer to new node or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *create_new_node;

	if ((create_new_node == NULL) || (parent == NULL))
	{
		return (NULL);
	}

	create_new_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		create_new_node->left = parent->left;
		parent->left->parent = create_new_node;
	}

	parent->left = create_new_node;

	return (create_new_node);
}
