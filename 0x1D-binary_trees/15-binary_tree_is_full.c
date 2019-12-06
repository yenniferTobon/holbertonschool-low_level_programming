#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0.
 **/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int childleft = 0;
	int childright = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	if ((tree->left != NULL) && (tree->right != NULL))
	{
		childleft = binary_tree_is_full(tree->left);
		childright = binary_tree_is_full(tree->right);
		if ((childleft == 1) && (childright == 1))
			return (1);
	}
	return (0);
}
