#include "binary_trees.h"
#include <string.h>
#include <stdlib.h>
/**
 * binary_tree_delete - function deletes an entire
 * binary tree
 * @tree: pointer to the root
 * Return: void function
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}
	free(tree);
	return;
}
