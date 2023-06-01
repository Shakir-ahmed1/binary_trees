#include "binary_trees.h"
/**
 * bt_2 - it counts the binary height incuding the tree
 * @tree: the starting node
 * Return: the height from the start including the tree
 */
int bt_2(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l = bt_2(tree->left);
	r = bt_2(tree->right);
	return (r + l + 1);
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
