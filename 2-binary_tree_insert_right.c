#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_right - insert a new node to the right
 *
 * @parent: parent node
 * @value: node value
 *
 * Return: a pointer to the node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->right)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

	parent->right = node;

	return (node);
}
