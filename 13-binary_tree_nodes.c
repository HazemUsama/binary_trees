#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of with at
 * least 1 child in a given tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: number of nodes with at least 1 child
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t sz;

	if (!tree)
		return (0);

	sz = (tree->left || tree->right ? 1 : 0)
		+ binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (sz);
}
