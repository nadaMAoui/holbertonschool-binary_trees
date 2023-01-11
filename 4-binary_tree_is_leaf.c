#include "binary_trees.h"
#include <string.h>
/**
 * binary_tree_is_leaf - checks the node is leaf or not
 * @node: pointer to the node to check
 * Return: 1 sucess or 0 fail
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);

	return (1);
}
