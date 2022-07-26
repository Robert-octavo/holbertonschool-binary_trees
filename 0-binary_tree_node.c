#include "binary_trees.h"

/**
 * binary_tree_node - Write a function that creates a binary tree node
 * @parent: pointer to the parent node
 * @value: is a value to put in the new node
 *
 * Return: pointer to the new node or Null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    /*TODO: Function that creates a binary tree*/
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n =  value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

