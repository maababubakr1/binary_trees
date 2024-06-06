#include "binary_trees.h"

/**
 * full_recursive - check if binary tree is recursive
 * @tree: a pointer to the node to check
 * Return: if tree not full 0, otherwise 1
*/

int full_recursive(const binary_tree_t *tree)
{
if (tree != NULL)
{
if ((tree->left != NULL && tree->right == NULL) ||
(tree->left == NULL && tree->right != NULL) ||
full_recursive(tree->left) == 0 ||
full_recursive(tree->right) == 0)
return (0);
}
return (1);
}

/**
 * binary_tree_is_full -  a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 If tree is NULL or tree is not full
 * otherwise return 1
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (full_recursive(tree));
}
