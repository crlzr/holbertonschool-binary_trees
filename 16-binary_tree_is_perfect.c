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

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
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
 * binary_tree_is_perfect - checks if a bt is perfect
 * @tree: pointer to root node
 * Return: if tree is NULL, 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* check if it's an empty tree */
	if (tree == NULL)
	{
		return (0);
	}

	/* check if node is leaf)*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/* check if they are on the same depth */
	if (binary_tree_height(tree->left) !=
	(binary_tree_height(tree->right)))
	{

		return (0);
	}
	else
	{
		return (binary_tree_is_perfect(tree->left) &&
		(binary_tree_is_perfect(tree->right)));
	}

}
