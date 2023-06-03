#include "binary_trees.h"
int bt_max(const binary_tree_t *tree);
int bt_min(const binary_tree_t *tree);
/**
 * binary_tree_is_bst - checks if the given binary tree is a valid bst
 * @tree: the tree to start from
 * Return: 1 if bst, 0 otherwise
 */
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
	if (tree->right)
	{
		b++;
		b += binary_tree_height1(tree->right);
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
	{
		return (1);
	}
	else
	{
		return (binary_tree_height1(tree));
	}
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
/**
 * binary_tree_is_avl - checks if binary tree is an AVL
 * tree: the tree to be checked
 * Return: 1 if valid avl, 0 other wise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int bl;

	if (!binary_tree_is_bst(tree))
		return (0);
	bl = binary_tree_balance(tree);
	if (bl <= 1 && bl >= -1)
		return (1);
	return (0);
}
