#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Pointer to pointer to the root node of the tree to check
 * Return: If tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);

	if (binary_tree_is_full(tree) && left_height == right_height)
		return (1);
	return (0);
}


/**
 * binary_tree_size - calculte the number of nodes
 * @tree: pointer to the root
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
		return (1);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size + 1);
}
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
