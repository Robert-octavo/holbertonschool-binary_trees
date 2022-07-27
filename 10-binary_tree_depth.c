#include "binary_trees.h"

/**
 * binary_tree_depth - Write a function that measures the depth of a
 * node in a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    /**
	* TODO: Write a function that measures the depth of a
	* node in a binary tree
	*/

	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
