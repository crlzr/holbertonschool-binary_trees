#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_size - function to measure the size of a tree
 * @tree: pointer to root node
 * Return: if tree is NULL, return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

	return (size);
}
