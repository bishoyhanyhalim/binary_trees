#include "binary_trees.h"

/**
 * binary_tree_depth - this is height fo tree
 *
 * @tree: A pointer for root
 *
 * Return: this return the result
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree->parent && tree) ? 1 + binary_tree_depth(tree->parent) : 0);
}
