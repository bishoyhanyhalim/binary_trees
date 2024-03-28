#include "binary_trees.h"

/**
 * binary_tree_nodes - this is height fo tree
 *
 * @tree: A pointer to pointer for node
 *
 * Return: this return the result
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t all_node = 0;

	if (tree)
	{
		all_node += (tree->right || tree->left) ? 1 : 0;
		all_node += binary_tree_nodes(tree->right);
		all_node += binary_tree_nodes(tree->left);
	}

	return (all_node);
}
