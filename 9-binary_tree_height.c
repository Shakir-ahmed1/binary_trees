#include "binary_trees.h"
/**
 * binary_tree_height - it counts the binary recursively
 * @tree: the starting node
 * Return: the height from the start
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (NULL);
	if (tree->left != NULL)
	{
		a = binary_tree_height(tree->left);
		a++;
	}
	else
	{
		a = 0;
	}
	if (tree->right != NULL)
	{
		b = binary_tree_height(tree->right);
		b++;
	}
	else
	{
		b = 0;
	}
	if (a > b)
		return (a);
	return (b);
}
