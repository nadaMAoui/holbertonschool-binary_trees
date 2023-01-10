#include "binary_trees.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert a left child node
 * @parent: pointer to the root
 * @value: data to insert
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	(void)(*new_node);
	(void)(value);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
	}
	else
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->left = tmp;
		new_node->parent = parent;
		tmp->parent = new_node;
	}
	return (new_node);
}
