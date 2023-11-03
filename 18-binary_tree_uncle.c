#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 *
 * @node: pointer to the root node of the tree
 *
 * Return: the sibling, or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left
		&& (node->parent->parent->left->n != node->parent->n))
		return (node->parent->parent->left);
	else if (node->parent->parent->right
			&& (node->parent->parent->right->n != node->parent->n))
		return (node->parent->parent->right);
	else if (node->parent->parent->right && node->parent->parent->left)
		return (node->parent->parent->left);

	return (NULL);
}
