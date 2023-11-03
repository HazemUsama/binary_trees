#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_left - insert a new node to the left
 *
 * @parent: parent node
 * @value: node value
 *
 * Return: a pointer to the node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
