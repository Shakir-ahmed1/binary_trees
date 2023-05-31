#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * in a binary tree
 * @tree: the starting node
 *
 * Return: number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			return (0);
		}
		else
		{
			a++;
			a += binary_tree_nodes(tree->left);
			a += binary_tree_nodes(tree->right);
		}
	}
	else
	{
		return (0);
	}
	return (a);
}
