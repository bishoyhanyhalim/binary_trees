#include "binary_trees.h"

const binary_tree_t *get_leaf(const binary_tree_t *tree);
unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - this func to see the perfect
 *
 * @tree: A pointer for the tree binary funcs
 *
 * Return: return the result finally
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}

/**
 * is_leaf - this func to see the perfect
 *
 * @node: A pointer for the tree binary funcs
 *
 * Return: return the result finally
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * get_leaf - Returns this func to see the perfect
 *
 * @tree: A pointer for the tree binary funcs
 *
 * Return: return the result finally
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
	{
		return (tree);
	}

	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * depth - this func to see the perfect
 *
 * @tree: A pointer for the tree binary funcs
 *
 * Return: return the result finally
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}
