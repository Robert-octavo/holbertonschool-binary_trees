#include "binary_trees.h"

/**
 * binary_tree_is_full - Write a function that checks if a binary
 * tree is full
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    /**
	* TODO: function that checks if a binary
	* tree is full
	*/
	int right, left;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->right != NULL && tree->left != NULL)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		return (left - right == 0 ? 1 : 0);
	}
	return (0);
}
