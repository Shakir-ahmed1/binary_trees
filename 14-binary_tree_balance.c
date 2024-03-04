#include "binary_trees.h"
/**
 * binary_tree_height1 - it counts the binary height recursively
 * @tree: the starting node
 * Return: the height from the start
 */
size_t binary_tree_height1(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		l = (tree->left) ? 1 + binary_tree_height1(tree->left) : 1;

		r = (tree->right) ? 1 + binary_tree_height1(tree->right) : 1;
		return (l > r ? l : r);
	}
	return (0);
}

/**
 * binary_tree_balance - it calculates the balance factor of the given tree
 * @tree: the starting node
 * Return: the balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
