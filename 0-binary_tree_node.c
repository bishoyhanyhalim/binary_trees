#include "binary_trees.h"

/**
 * binary_tree_node - this is func create a new node
 *
 * @parent: is pointer for parent
 * @value: is value for new node
 *
 * Return: the pointer to new node or null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
