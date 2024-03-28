#include "binary_trees.h"

int perfect_does_r(const binary_tree_t *tree,
				   size_t how_leaf_dep, size_t level);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
unsigned char does_it_leaf(const binary_tree_t *node);
size_t how_is_depth(const binary_tree_t *tree);

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

	return (perfect_does_r(tree, how_is_depth(get_leaf(tree)), 0));
}

/**
 * perfect_does_r - this func to see the perfect
 *
 * @tree: A pointer for the tree binary funcs
 * @how_leaf_dep: The depth A pointer for the tree binary funcs
 * @level: Level of A pointer for the tree binary funcs
 *
 * Return: return the result finally
 */
int perfect_does_r(const binary_tree_t *tree,
				   size_t how_leaf_dep, size_t level)
{
	if (does_it_leaf(tree))
	{
		return (level == how_leaf_dep ? 1 : 0);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (perfect_does_r(tree->left, how_leaf_dep, level + 1) &&
			perfect_does_r(tree->right, how_leaf_dep, level + 1));
}

/**
 * does_it_leaf - this func to see the perfect
 *
 * @node: A pointer for the tree binary funcs
 *
 * Return: return the result finally
 */
unsigned char does_it_leaf(const binary_tree_t *node)
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
	if (does_it_leaf(tree) == 1)
	{
		return (tree);
	}

	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * how_is_depth - this func to see the perfect
 *
 * @tree: A pointer for the tree binary funcs
 *
 * Return: return the result finally
 */
size_t how_is_depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + how_is_depth(tree->parent) : 0);
}
