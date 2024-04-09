#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_is_full - function to check if a bt is full
 * @tree: pointer to root node
 * Return: if tree is NULL, 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return ((binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right)));
	}
	return (0);
}
