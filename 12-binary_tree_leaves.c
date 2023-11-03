#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in a given tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: number of leaves
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sz;

	if (!tree)
		return (0);

	sz = (!tree->left && !tree->right ? 1 : 0)
		+ binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (sz);
}
