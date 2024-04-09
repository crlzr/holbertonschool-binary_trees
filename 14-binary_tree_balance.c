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
/**
 * binary_tree_balance - measures the balance factor of a bt
 * @tree: pointer to root node
 * Return: tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	balance_factor = left_height - right_height;

	return (balance_factor);
}
