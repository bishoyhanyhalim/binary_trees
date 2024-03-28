#include "binary_trees.h"

/**
 * binary_tree_leaves - this is height fo tree
 *
 * @tree: A pointer to pointer for root
 *
 * Return: this return the result
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t this_leave = 0;

	if (tree)
	{
		this_leave += (!tree->right && !tree->left) ? 1 : 0;
		this_leave += binary_tree_leaves(tree->right);
		this_leave += binary_tree_leaves(tree->left);
	}

	return (this_leave);
}
