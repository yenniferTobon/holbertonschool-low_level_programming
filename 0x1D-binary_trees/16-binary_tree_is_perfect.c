#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0.
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		size_left = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		size_right = 1 + binary_tree_height(tree->right);

	if (size_left > size_right)
		return (size_left);
	else
		return (size_right);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: Nothing
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, hl = 0, hr = 0;

	if (tree == NULL)
		return (0);

	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	balance = hl - hr;

	return (balance);
}

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

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0.
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full = 0;
	int balance = 0;

	if (tree == NULL)
		return (0);

	full = binary_tree_is_full(tree);
	balance = binary_tree_balance(tree);

	if ((full == 1) && (balance == 0))
	{
		if (binary_tree_is_perfect(tree->left) ==
		    binary_tree_is_perfect(tree->right))
			return (1);
		else
			return (0);
	}
	return (0);
}
