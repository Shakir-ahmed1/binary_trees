#include "binary_trees.h"
/**
 * bst_search - seaches a node with a given value
 * @tree: the starting node of the bst
 * @value: the value to be searched
 * Return: the pointer to the found node
 */
bst_t *bst_search(bst_t *tree, int value)
{
	bst_t *temp;

	if (tree)
	{
		temp = tree;
		while (temp != NULL)
		{
			if (temp->n == value)
			{ return (temp); }
			else if (!temp->left && !temp->right)
			{ return (NULL); }
			else if (temp->n < value)
			{ temp = temp->right; }
			else if (temp->n > value)
			{ temp = temp->left; } } }
	return (NULL);
}
