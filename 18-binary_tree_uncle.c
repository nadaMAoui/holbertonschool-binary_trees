#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent || !node->parent->parent
	|| !node->parent->parent->left
	|| !node->parent->parent->right)
		return (0);

	uncle = node->parent->parent->right;
	if (node->parent == uncle)
	{
		return (uncle = node->parent->parent->left);
	}
	return (uncle);
}
