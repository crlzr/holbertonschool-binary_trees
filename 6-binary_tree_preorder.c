#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_preorder: traverse tree with pre-order traversal
 * @tree: pointer to root node
 * @func: function pointer to call for each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
