#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0.
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t defth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent != NULL)
	{
		defth = 1 + binary_tree_depth(tree->parent);
	}
	return (defth);
}
