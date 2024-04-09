#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to node
 * Return: if tree is NULL, return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || (tree->parent == NULL))
	{
		return (0);
	}

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
