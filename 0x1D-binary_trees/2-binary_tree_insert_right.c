#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *aux;

	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *newRight = malloc(sizeof(binary_tree_t));

	aux = parent->right;
	newRight->n = value;
	newRight->left = NULL;
	newRight->right = aux;
	parent->right = newRight;
	if (aux != NULL)
	{
		aux->parent = newRight;
	}
	return (newRight);
}
