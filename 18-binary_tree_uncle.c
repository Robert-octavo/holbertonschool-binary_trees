#include "binary_trees.h"

/**
 * binary_tree_sibling - Write a function that finds the sibling
 * of a node
 * @node: pointer to the node to find the sibling.
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    /**
	* TODO: function that finds the sibling of a node
	*/
	if (node == NULL || node->parent == NULL)
		return (NULL);

return (node == node->parent->left ? node->parent->right : node->parent->left);
	/*return (0);*/
}

/**
 * binary_tree_uncle - Write a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* TODO:  function that finds the uncle of a node */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
