#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes the node done
 *
 * @tree: to pointer for delete node
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);

		binary_tree_delete(tree->right);

		free(tree);
	}
}
