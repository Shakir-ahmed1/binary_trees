#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: the node of the uncle, NULL if failed
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	temp = node->parent;
	if (temp->parent->left == temp)
		return (temp->parent->right);
	else
		return (temp->parent->left);
}
