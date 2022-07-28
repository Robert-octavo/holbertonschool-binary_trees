#include "binary_trees.h"

/**
 * binary_tree_nodes - Write a function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    /**
	* TODO: function that counts the nodes with at
	* least 1 child in a binary tree
	*/
size_t nodes = 1;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (nodes);

}
