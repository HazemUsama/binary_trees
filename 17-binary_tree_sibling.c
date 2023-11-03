#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 *
 * @node: pointer to the root node of the tree
 *
 * Return: the sibling, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left && (node->parent->left->n != node->n))
		return (node->parent->left);
	else if (node->parent->right && (node->parent->right->n != node->n))
		return (node->parent->right);
	else if (node->parent->right && node->parent->left)
		return (node->parent->left);

	return (NULL);
}
