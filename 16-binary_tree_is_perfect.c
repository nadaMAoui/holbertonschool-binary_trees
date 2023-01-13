#include "binary_trees.h"
/**
 * binary_tree_height - calculate the height f binary tree
 * @tree: pointer to the root
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (right_height >= left_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_balance - calculate binary tree balance factor
 * @tree: pointer to the root
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * sub_tree_perfect - chcecks if subtree left and subtree right
 * are perfect
 * @tree: pointer to the root
 * Return: 1 or 0
 */
int sub_tree_perfect(const binary_tree_t *tree)
{
	if (tree && !tree->right & !tree->left)
		return (1);
	if (tree && tree->right && tree->left)
		return (1 && sub_tree_perfect(tree->left) && sub_tree_perfect(tree->right));
	return (0);
}
/**
 *binary_tree_is_perfect - checks if binary tree is perfect
 *@tree: pointer to the root
 *Return: 0 fail or 1 successing 
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_balance(tree) != 0)
		return (0);
	return (sub_tree_perfect(tree->left) && sub_tree_perfect(tree->right));
}
