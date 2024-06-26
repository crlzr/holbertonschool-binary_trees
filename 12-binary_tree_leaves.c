#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to root node
 * Return: If tree is NULL, return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
	}
}
