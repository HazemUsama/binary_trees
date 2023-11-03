#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: the height of the tree
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left < right ? right : left);
}

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

/**
 * binary_tree_is_perfect - determine if the tree is perfect
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if full, otherwise 0
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, n;

	if (!tree)
		return (0);

	h = binary_tree_height(tree);
	n = binary_tree_size(tree);

	if (n == (1 << (h + 1)) - 1)
		return (1);
	return (0);
}
