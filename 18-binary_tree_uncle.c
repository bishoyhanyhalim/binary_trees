#include "binary_trees.h"

/**
 * binary_tree_uncle - this func for binary tree
 *
 * @node: A pointer to tree
 *
 * Return: return the result finally
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL ||
		node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}

	return (node->parent->parent->left);
}
