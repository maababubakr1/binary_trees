#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts
 * the leaves in a binary tree
 * @tree: a pointer to the root node of the tree
 * to count the number of leaves
 * Return: 0 if tree is NULL, otherwise the count
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			leaf += 1;
		else
			leaf += 0;

		leaf += binary_tree_leaves(tree->left);
	leaf += binary_tree_leaves(tree->right);
	}
	return (leaf);
}
