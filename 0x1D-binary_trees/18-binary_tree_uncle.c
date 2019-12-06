#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - función que encuentre al tío de un nodo
 * @node: is a pointer to the node to find the sibling.
 * Return: node has no uncle, return NULL
 **/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: is a pointer to the node to find the sibling.
 * Return: node has no sibling, return NULL
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}

