#include "binary_trees.h"

/**
 * binary_tree_is_root - Write a function that checks if a given node is a root
 * @node: pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
    /*TODO: function that checks if a given node is a root*/

	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
