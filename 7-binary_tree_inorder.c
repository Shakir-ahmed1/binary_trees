#include "binary_trees.h"
/**
 * binary_tree_inorder - it prints the values of a binary tree from
 * left to right
 * @tree: the pointer to the root of the binary tree
 * @func: the function to be applied on each node values
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
