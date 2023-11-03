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
	binary_tree_t *new_root;

	if (!tree || !tree->left)
		return (tree);

	new_root = tree->left;
	new_root->parent = tree->parent;
	tree->left = new_root->right;
	new_root->parent = tree;
	new_root->right = tree;
	tree->parent = new_root;

	return (new_root);
}
