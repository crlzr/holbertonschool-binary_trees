#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to root node of the tree
 * Return: 0
 * to delete a tree, we need to use postorder_traversal, the root
 * node will be deleted last
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
