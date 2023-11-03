#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a left-rotation
 *
 * @tree: the root node
 *
 * Return: a pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp_f, *temp_s;

	if (tree == NULL)
		return (NULL);

	if (tree->left)
	{
		temp_s = tree->left->right;
		temp_f = tree->left;
		temp_f->parent = tree->parent;
		temp_f->right = tree;
		tree->parent = temp_f;
		tree->left = temp_s;
		if (temp_s)
			temp_s->parent = tree;
		return (temp_f);
	}

	return (NULL);
}
