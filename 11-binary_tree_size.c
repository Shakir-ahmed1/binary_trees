#include "binary_trees.h"
/**
 * binary_tree_size - total number of nodes under the tree
 * @tree: the starting node
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree != NULL)
	{
		a += 1;
		a += binary_tree_size(tree->left);
		a += binary_tree_size(tree->right);
	}
	return (a);
}
