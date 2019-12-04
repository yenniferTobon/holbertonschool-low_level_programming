#include <stdlib.h>
#include "binary_trees.h"

/**
 * *binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newTree = malloc(sizeof(binary_tree_t));

	if (newTree == NULL)
	{
		return (NULL);
	}

	newTree->n = value;
	newTree->parent = parent;
	newTree->left = NULL;
	newTree->right = NULL;
	return (newTree);
}
