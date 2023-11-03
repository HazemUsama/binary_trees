#include "binary_trees.h"

/**
 * binary_tree_is_full - determine if the tree is full
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if full, otherwise 0
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int sz;

	if (!tree)
		return (0);

	if ((!tree->left && !tree->right) || (tree->left && tree->right))
	{
		sz = binary_tree_is_full(tree->left)
		+ binary_tree_is_full(tree->right);
	}
	else
		sz = -1;

	return (sz != 2 && sz != 0 ? 0 : 1);
}
