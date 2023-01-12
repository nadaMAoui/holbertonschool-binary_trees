#include "binary_trees.h"
/**
 *binary_tree_leaves - calculate number of leaves
 *@tree: pointer to the root
 *Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	size_left = binary_tree_leaves(tree->left);
	size_right = binary_tree_leaves(tree->right);

	return ((size_left + size_right));
}
