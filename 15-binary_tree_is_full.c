#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses the given node
 * @tree: pointer to the root node of the tree to travers
 * @func: is a pointer to a function to call for each node
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
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bt_is_full(tree));
}
