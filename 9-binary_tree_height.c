#include "binary_trees.h"
/**
 * binary_tree_height - it counts the binary recursively
 * @tree: the starting node
 * Return: the height from the start
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a = 0, b = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		a++;
		a += binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		b++;
		b += binary_tree_height(tree->right);
	}
	if (a > b)
		return (a);
	return (b);
}
