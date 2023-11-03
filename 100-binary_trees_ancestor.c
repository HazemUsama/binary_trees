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

/**
 * binary_trees_ancestor -  finds the lowest common ancestor of two nodes
 *
 * @first: ...
 * @second: ...
 *
 * Return: a pointer to the lowest common
 * ancestor node of the two given nodes, or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t first_h = binary_tree_depth(first);
	size_t second_h = binary_tree_depth(second);
	const binary_tree_t *temp;


	if (first_h > second_h)
		temp = first, first = second, second = temp;
	while (first)
	{
		temp = second;
		while (temp)
		{
			if (temp == first)
				return ((binary_tree_t *)first);
			temp = temp->parent;
		}
		first = first->parent;
	}

	return (NULL);
}
