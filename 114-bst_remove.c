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

	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if (!root->right)
		{
			temp = root->left;
			free(root);
			return (temp);
		}

		temp = root->right;
		while (temp && temp->left)
			temp = temp->left;

		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}

	return (root);
}


