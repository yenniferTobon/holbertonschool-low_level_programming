#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure.
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *aux;
	binary_tree_t *newRight;

	if (parent == NULL)
	{
		return (NULL);
	}

	newRight = binary_tree_node(parent, value);

	aux = parent->right;

	if (parent->right != NULL)
	{
		aux = parent->right;
		aux->parent = newRight;
		newRight->right = aux;
		parent->right = newRight;
	}
	parent->right = newRight;
	return (newRight);
}
