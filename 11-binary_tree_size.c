#include "binary_trees.h"
/**
 * binary_tree_size _ calculte the number of nodes
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
