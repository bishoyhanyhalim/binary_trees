#include "binary_trees.h"

/**
 * is_full_recursive - this func for binary tree
 *
 * @node: A pointer to tree
 *
 * Return: return the result finally
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	return (node->parent->left);
}
