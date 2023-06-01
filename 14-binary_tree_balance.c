#include "binary_trees.h"
/**
 * binary_tree_height1 - it counts the binary height recursively
 * @tree: the starting node
 * Return: the height from the start
 */
int binary_tree_height1(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		a++;
		a += binary_tree_height1(tree->left);
	}
	else
	{
		a = 0;
	}
	if (tree->right)
	{
		b++;
		b += binary_tree_height1(tree->right);
	}
	else
	{
		b = 0;
	}
	if (a > b)
		return (a);
	return (b);
}
/**
 * bt_2 - it counts the binary height incuding the tree
 * @tree: the starting node
 * Return: the height from the start including the tree
 */
int bt_2(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_height1(tree));
}
/**
 * binary_tree_balance - it calculates the balance factor of the given tree
 * @tree: the starting node
 * Return: the balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);
	r = bt_2(tree->right);
	l = bt_2(tree->left);
	return (l - r);
}
