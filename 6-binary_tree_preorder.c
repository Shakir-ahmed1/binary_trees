#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses the given node
 * @tree: pointer to the root node of the tree to travers
 * @func: is a pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	func(tree->n);
	if (tree->left != NULL)
	{
		binary_tree_preorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		binary_tree_preorder(tree->right, func);
	}
}
