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

/**
 * binary_tree_is_perfect - Write a function that checks if a binary
 * tree is perfect
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    /**
	* TODO: function that checks if a binary tree is perfect
	*/
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left == right ? 1 : 0);

	/*return (0);*/
}
