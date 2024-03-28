#include "binary_trees.h"

/**
 * binary_tree_inorder - this is a binary tree
 *
 * @tree: A pointer this is a binary tree
 * @func: A pointer this is a binary tree
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
