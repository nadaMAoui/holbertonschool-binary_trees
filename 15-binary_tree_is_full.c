#include "binary_trees.h"
/**
 * binary_tree_is_full - check if binary tree is full or not
 * @tree: pointer to the root of binary tree
 * Return: 0 if it's Full and 1 if it's nto
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
