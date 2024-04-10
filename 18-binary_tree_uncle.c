#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_sibling - function that finds sibiling of node
 * @node: pointer to the node to find the sibling
 * Return: return a pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}

/**
 * binary_tree_uncle - function that finds uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: return a pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (!binary_tree_sibling(node->parent))
	{
		return (0);
	}
	else
	{
		uncle = binary_tree_sibling(node->parent);
		return (uncle);
	}
}
