#include "binary_trees.h"

/**
 * binary_tree_preorder - Checks root node done
 *
 * @tree: A pointer for root tree
 * @func: A pointer for node
 *
 * Return: for binary root result
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		func(tree->n);

		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
