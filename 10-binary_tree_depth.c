#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 *
 * @tree: pointer to the node to measure
 *
 * Return: the depth of the tree
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);
	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (depth);
}
