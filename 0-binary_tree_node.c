#include "binary_trees.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_tree_node - create a node to a binary tree
 * @parent: pointer to the root of the binary tree
 * @value: data to insert
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	(void)(*new_node);
	(void)(value);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
