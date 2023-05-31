#include "binary_trees.h"
/**
 * binary_tree_insert_right - creates a binary tree node for the right of
 * a parent
 * @parent: the parent node
 * @value: value of the new node
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(NULL, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		temp = parent->right;
		temp->parent = new;
		new->right = temp;
	}
		new->parent = parent;
		parent->right = new;
	return (new);
}
