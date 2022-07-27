#include "binary_trees.h"

/**
 * maxHeight -  Compute the "maxDepth" of a tree -- the number of
 * nodes along the longest path from the root node
 * down to the farthest leaf node
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

size_t maxHeight(const binary_tree_t *tree)
{
	size_t lDepth = 0;
	size_t rDepth = 0;

	if (tree == NULL)
		return (0);

	lDepth = maxHeight(tree->left);
	rDepth = maxHeight(tree->right);

	/* use the larger one */
	return (lDepth > rDepth ? lDepth + 1 : rDepth + 1);
}

/**
 * binary_tree_height - Write a function that measures the
 * height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    /**
	* TODO: function that measures the
	* height of a binary tree
	*/

	size_t height = maxHeight(tree);

	return (tree != NULL ? height - 1 : 0);
}
