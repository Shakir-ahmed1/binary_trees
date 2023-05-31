#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: the starting node
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			return (1);
		}
		else
		{
			a += binary_tree_leaves(tree->left);
			a += binary_tree_leaves(tree->right);
		}
	}
	else
	{
		return (0);
	}
	return (a);
}
