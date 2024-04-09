#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_nodes - counts the nodes with at least
 * 1 child in a binary tree
 * @tree: pointer to root node
 * Return: If tree is NULL, return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right)));
	}
}
