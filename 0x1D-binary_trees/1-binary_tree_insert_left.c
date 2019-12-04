#include <stdlib.h>
#include "binary_trees.h"

/**
 * *binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *aux;
	binary_tree_t *newLeft;

	if (parent == NULL)
	{
		return (NULL);
	}

	newLeft = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		aux = parent->left;
		aux->parent = newLeft;
		newLeft->left = aux;
		parent->left = newLeft;
	}
	else
	{
		parent->left = newLeft;
	}

	return (newLeft);
}
