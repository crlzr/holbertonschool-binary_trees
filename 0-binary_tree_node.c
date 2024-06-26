#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * binary_tree_node - function to create a new binary tree node
 * @parent: pointer to parent node
 * @value: value to be added to node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}

