#include "binary_trees.h"

/**
 * binary_tree_height - this is height fo tree
 *
 * @tree: A pointer for root
 *
 * Return: this return the result
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t the_lefe_of = 0, the_right_of = 0;

		the_right_of = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		the_lefe_of = tree->left ? 1 + binary_tree_height(tree->left) : 0;

		return ((the_lefe_of > the_right_of) ? the_lefe_of : the_right_of);
	}

	return (0);
}
