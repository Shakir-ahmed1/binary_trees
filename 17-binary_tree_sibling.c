#include "binary_trees.h"
/**
 * binary_tree_sibling - finds a sibiling of the given node
 * @node: the node to search his sibling for
 * Return: the sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != node)
		return ((node->parent->left));
	else
		return ((node->parent->right));
}
