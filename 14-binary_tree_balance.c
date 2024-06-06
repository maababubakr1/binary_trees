#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree
 * to measure the balance factor
 * Return: If tree is NULL, return 0 otherwise return the balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL, otherwise return height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lt = 0, rt = 0;

		lt = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rt = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return (lt > rt ? lt : rt);
	}

	return (0);
}
