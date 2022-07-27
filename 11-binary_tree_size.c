#include "binary_trees.h"

/**
 * binary_tree_size -  Write a function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    /**
	* TODO: Write a function that measures the size of a binary tree
	*/

	size_t sum = 1;

	if (tree == NULL)
		return (0);

	sum = sum + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (sum);
}
