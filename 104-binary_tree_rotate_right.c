#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotates the given tree to the right
 * @tree: the node to rotate
 * Return: the poainter to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree)
		return (NULL);
	temp = tree->left;

	temp->parent = tree->parent;
	tree->parent = temp;

	tree->left = temp->right;
	temp->right = tree;
	if (tree->left)
		tree->left->parent = tree;
	return temp;
}
