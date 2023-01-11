#include "binary_trees.h"
#include <string.h>
#include <stddef.h>
/**
 * binary_tree_is_root - checks if node is root or not
 * @node: pointer to the node to check
 * Return: 1 success 0 fail
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);

	return (1);
}
