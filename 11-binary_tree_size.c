#include "binary_trees.h"

/**
 * binary_tree_size - this is height fo tree
 *
 * @tree: A pointer for root
 *
 * Return: this return the result
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t the_size_of = 0;

	if (tree)
	{
		the_size_of += 1;

		the_size_of += binary_tree_size(tree->right);

		the_size_of += binary_tree_size(tree->left);
	}

	return (the_size_of);
}
