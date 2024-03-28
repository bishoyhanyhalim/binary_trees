#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks root node done
 *
 * @node: A pointer gor
 *
 * Return: for binary root result
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent != NULL || node == NULL)
	{
		return (0);
	}

	return (1);
}
