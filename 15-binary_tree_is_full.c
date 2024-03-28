#include "binary_trees.h"

int is_full_recursive(const binary_tree_t *tree);

/**
 * binary_tree_is_full - this func for binary tree
 *
 * @tree: A pointer to tree
 *
 * Return: return the result finally
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - this func for binary tree
 *
 * @tree: A pointer to tree
 *
 * Return: return the result finally
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->right != NULL && tree->left == NULL) ||
			is_full_recursive(tree->right) == 0 ||
			is_full_recursive(tree->left) == 0)

			return (0);
	}

	return (1);
}
