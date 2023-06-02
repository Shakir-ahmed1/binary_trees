#include "binary_trees.h"
/**
 * binary_tree_rotate_left - rotates the tree to the left
 * @tree: the tree to rotate
 * Return: the pointer to the new root node of the tree rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	temp = tree->right;


	temp->parent = tree->parent;
	tree->parent = temp;

	tree->right = temp->left;
	temp->left = tree;
	return (temp);
}
