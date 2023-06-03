#include "binary_trees.h"
/**
 * bst_remove - removes a node with a given value
 * @root: the starting node of the bst
 * @value: the value to be deleted
 * Return: the pointer to the new node after removing
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp;

	if (root)
	{
		temp = root;
		while (temp != NULL)
		{
			if (temp->n == value)
			{
				return (root);
			}
			else if (!temp->left && !temp->right)
			{ return (root); }
			else if (temp->n < value)
			{ temp = temp->right; }
			else if (temp->n > value)
			{ temp = temp->left; } } }
	return (root);
}
