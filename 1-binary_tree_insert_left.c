#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_insert_left - insert a node as the left-child
 * @parent: pointer to parent
 * @value: value to be added
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
	new_node->left = parent->left;
	parent->left->parent = new_node;

	}
	parent->left = new_node;

	return (new_node);
}
