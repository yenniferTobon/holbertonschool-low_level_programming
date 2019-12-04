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
	binary_tree_t *newLeft = malloc(sizeof(binary_tree_t));

	if (newLeft == NULL || parent == NULL)
	{
		return (NULL);
	}
	aux = parent->left;
	newLeft->n = value;
	newLeft->parent = parent;
	newLeft->right = NULL;
	newLeft->left = aux;
	if (aux != NULL)
	{
		aux->parent = newLeft;
	}
	parent->left = newLeft;
	return (newLeft);
}
