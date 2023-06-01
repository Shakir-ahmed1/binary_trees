#include "binary_trees.h"
/**
 * bt_is_full - checks if the tree is full bt
 * @tree: pointer to the root node of the tree to travers
 * Return: 0 if not full, 1 otherwise
 */
int bt_is_full(const binary_tree_t *tree)
{
	int a, b;

	if (tree)
	{
		a = bt_is_full(tree->left);
		b = bt_is_full(tree->right);
		if (((tree->right != NULL) ^ (tree->left != NULL)) || (!a || !b))
			return (0);
		else
			return (1);
	}
	return (1);
}
/**
 * binary_tree_is_full - checks if the tree is full bt
 * @tree: pointer to the root node of the tree to travers
 * Return: 0 if not full, 1 otherwise and 0 if the provided tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bt_is_full(tree));
}
