#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_is_root - function to check if a given node
 * is a root
 * @node: node to check
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
