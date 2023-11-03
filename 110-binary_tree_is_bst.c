#include "binary_trees.h"
#include <limits.h>

/**
 * helper - Recursively check the left and right subtrees
 *
 * @node: the node to check
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: 1 if it's valid 0 otherwise
 */
int helper(const binary_tree_t *node, int min, int max)
{
	if (!node)
		return (1);

	if (node->n < min || node->n > max)
		return (0);

	return (helper(node->left, min, node->n) &&
		helper(node->right, node->n, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is valid
 *
 * @tree: the root
 *
 * Return: 1 if it's valid 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (helper(tree, INT_MIN, INT_MAX));
}

