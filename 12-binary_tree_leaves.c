#include "binary_trees.h"

/**
 * binary_tree_leaves - Write a function that counts the leaves
 * in a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    /**
	* TODO: function that counts the leaves in a binary tree
	*/

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

}
