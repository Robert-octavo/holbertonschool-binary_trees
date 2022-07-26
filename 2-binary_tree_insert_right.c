#include "binary_trees.h"

/**
 * binary_tree_insert_right - Write a function that inserts
 * a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: is a value to put in the new node
 *
 * Return: pointer to the new node or Null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    /*TODO: Function that inserts a node as right-child of another node*/
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n =  value;
	new->parent = parent;
	new->right = parent->right;
	parent->right = new;
	new->left = NULL;
	if (new->right != NULL)
		(new->right)->parent = new;
	return (new);
}
