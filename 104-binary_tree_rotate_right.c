#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Right-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *rotate, *tmp;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	rotate = tree->left;
	tmp = rotate->right;
	rotate->right = tree;
	tree->left = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = rotate;
	rotate->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = rotate;
		else
			tmp->right = rotate;
	}

	return (rotate);
}
