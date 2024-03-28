#include "binary_trees.h"

/**
 * binary_tree_balance - this func for binary tree
 *
 * @tree: A pointer to tree
 *
 * Return: return the result finally
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}

/**
 * binary_tree_height - this func for binary tree
 *
 * @tree: A pointer to tree
 *
 * Return: return the result finally
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t all_the_left = 0, all_the_right = 0;

		all_the_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		all_the_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((all_the_left > all_the_right) ? all_the_left : all_the_right);
	}

	return (0);
}
