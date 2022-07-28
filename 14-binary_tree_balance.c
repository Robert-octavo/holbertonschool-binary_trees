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

	lDepth = tree->left ? 1 + maxHeight(tree->left) : 0;
	rDepth = tree->right ? 1 + maxHeight(tree->right) : 0;

	/* use the larger one */
	return (lDepth > rDepth ? lDepth : rDepth);
}

/**
 * binary_tree_balance - Write a function that measures the balance
 * factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    /**
	* TODO: function that measures the balance
	* factor of a binary tree
	*/
	int height_l, height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? (int)maxHeight(tree->left) : -1;
	height_r = tree->right ? (int)maxHeight(tree->right) : -1;

	return (height_l - height_r); 


}
