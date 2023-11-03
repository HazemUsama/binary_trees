#include "binary_trees.h"

/**
 * binary_tree_size - counts the number of nodes in a given tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: number of nodes
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz;

	if (!tree)
		return (0);

	sz = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (sz);
}
