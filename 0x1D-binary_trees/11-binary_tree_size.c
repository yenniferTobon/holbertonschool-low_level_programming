#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0.
 **/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_total = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		size_total = 1 + binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		size_total = 1 + binary_tree_size(tree->right);
	}
	size_total = 1 + size_total;
	if ((tree->right != NULL && tree->parent != NULL) ||
	(tree->left != NULL && tree->parent != NULL))
	{
		size_total = size_total - 1;
	}
	if (tree->right != NULL && tree->parent == NULL && tree->left != NULL)
	{
		size_total = size_total + 1;
	}
	return (size_total);
}
