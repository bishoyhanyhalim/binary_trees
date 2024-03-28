#include "binary_trees.h"

/**
 * binary_tree_insert_left - this is func create a create_new_node node
 *
 * @parent: is pointer for parent
 * @value: is value for create_new_node node
 *
 * Return: the pointer to create_new_node node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *create_new_node;

	if (parent == NULL)
		return (NULL);

	create_new_node = binary_tree_node(parent, value);

	if (create_new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		create_new_node->left = parent->left;
		parent->left->parent = create_new_node;
	}

	parent->left = create_new_node;

	return (create_new_node);
}
