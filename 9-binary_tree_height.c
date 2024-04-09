#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: if tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
	left = binary_tree_height(tree->left);

	right = binary_tree_height(tree->right);
	}

	if (left > right)
	{
		return (left + 1);
	}
	else
	{
		return (right + 1);
	}
}
