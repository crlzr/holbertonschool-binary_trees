#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_sibling - function that finds sibiling of node
 * @node: pointer to the node to find the sibling
 * Return: return a pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	
	if (node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}

	if (node->parent->left != NULL)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
