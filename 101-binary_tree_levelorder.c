#include "binary_trees.h"
#include <stdlib.h>

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
 * binary_tree_levelorder - goes through a binary tree
 * in lever order
 *
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 *
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **ordered;
	size_t i, j, size;

	if (!tree || !func)
		return;

	size = binary_tree_size(tree);
	ordered = malloc(sizeof(binary_tree_t *) * size);
	ordered[0] = (binary_tree_t *) tree;
	j = 1;
	for (i = 0; i < size; i++)
	{
		if (ordered[i]->left)
			ordered[j++] = ordered[i]->left;
		if (ordered[i]->right)
			ordered[j++] = ordered[i]->right;
	}
	for (i = 0; i < size; i++)
		func(ordered[i]->n);
	free(ordered);
}
