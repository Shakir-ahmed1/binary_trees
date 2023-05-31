#include "binary_trees.h"
/**
 * binary_tree_insert_left - creates a binary tree node for the left of
 * a parent
 * @parent: the parent node
 * @value: value of the new node
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(NULL, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		temp = parent->left;
		temp->parent = new;
		new->left = temp;
	}
		new->parent = parent;
		parent->left = new;
	return (new);
}
