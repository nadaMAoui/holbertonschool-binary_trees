#include"binary_trees.h"
/**
 * binary_tree_sibling - function finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: pointer to the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
			binary_tree_t *sibling;

		if (!node || !node->parent || !node->parent->right || !node->parent->left)
				return (NULL);

		sibling = node->parent->right;
		if(node == sibling)
		{
		return(sibling = node->parent->left);
		}
		return (sibling);
}
