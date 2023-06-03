#include "binary_trees.h"
int bt_max(const binary_tree_t *tree);
int bt_min(const binary_tree_t *tree);

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	a = bt_max(tree->left);
	b = bt_min(tree->right);
	if (a < tree->n && b > tree->n)
		return (1);
	return (0);
}
/**
 * bt_max - evaluates the maximum value in binary tree
 * @tree: pointer to the root node of the tree to travers
 * Return: the largest number in the binary tree
 */
int bt_max(const binary_tree_t *tree)
{
	int a, b, p;

	if (tree)
	{
		a = bt_max(tree->left);
		b = bt_max(tree->right);

		p = tree->n;
		if (p > a && p > b)
			return (p);
		else if (a > b && a > p)
			return (a);
		else if (b > a && b > p)
			return (b);
		else
			return (INT_MIN);
	}
	else
	{
		return (INT_MIN);
	}
}
/**
 * bt_min - evaluates the minimum value in binary tree
 * @tree: pointer to the root node of the tree to travers
 * Return: the smallest number in the binary tree
 */
int bt_min(const binary_tree_t *tree)
{
	int a, b, p;

	if (tree)
	{
		a = bt_min(tree->left);
		b = bt_min(tree->right);

		p = tree->n;
		if (p < a && p < b)
			return (p);
		else if (a < b && a < p)
			return (a);
		else if (b < a && b < p)
			return (b);
		else
			return (INT_MAX);
	}
	else
	{
		return (INT_MAX);
	}
	return (1);
}
