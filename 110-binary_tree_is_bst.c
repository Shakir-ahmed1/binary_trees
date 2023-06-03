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
 * binary_tree_preorder - traverses the given node
 * @tree: pointer to the root node of the tree to travers
 * @func: is a pointer to a function to call for each node
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
 * binary_tree_preorder - traverses the given node
 * @tree: pointer to the root node of the tree to travers
 * @func: is a pointer to a function to call for each node
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
