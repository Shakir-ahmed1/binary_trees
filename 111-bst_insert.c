#include "binary_trees.h"
/**
 * bst_insert - insert a new node to the bst
 * @tree: the starting node of the bst
 * @value: the value to be inserted
 * Return: the pointer to the new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new, *temp;

	if (tree && (*tree))
	{
		temp = *tree;
		while (temp != NULL)
		{
			if (temp->n == value)
			{ return (temp); }
			else if (!temp->right && temp->n < value)
			{
				new = (bst_t *) binary_tree_node(NULL, value);
				new->parent = temp;
				temp->right = new;
				return (new); }
			else if (!temp->left && temp->n > value)
			{
				new = (bst_t *) binary_tree_node(NULL, value);
				new->parent = temp;
				temp->left = new;
				return (new); }
			else if (temp->n < value)
			{ temp = temp->right; }
			else if (temp->n > value)
			{ temp = temp->left; } } }
	new = (bst_t *) binary_tree_node(NULL, value);
	*tree = new;
	return (new);
}
