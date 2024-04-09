#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

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

	if (binary_tree_depth(tree->left) != 
	(binary_tree_depth(tree->right)))
	{
		
		return (0);
	}
	else
	{
		return (binary_tree_is_perfect(tree->left) &&
		(binary_tree_is_perfect(tree->right)));
	}

}
