#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Write a function that checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    /*TODO: function that checks if a node is a leaf*/

	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
