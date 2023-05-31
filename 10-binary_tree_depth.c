#include "binary_trees.h"
/**
 * binary_tree_depth - it counts the binary recursively
 * @tree: the starting node
 * Return: the height from the start
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int a;

	if (tree->parent != NULL)
	{
		a = binary_tree_depth(tree->parent);
		a++;
	}
	else
	{
		a = 0;
	}
	return a;
}
