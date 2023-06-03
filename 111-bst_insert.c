#include "binary_trees.h"
/**
 * bst_insert - insert a new node to the bst
 * @tree: the starting node of the bst
 * @value: the value to be inserted
 *
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
			{
				return (temp);
			}
			else if ((!temp->right || (temp->right && temp->right->n > value)) && temp->n < value)
			{
				new = (bst_t *) binary_tree_node(NULL, value);
				new->parent = temp;
				new->right = temp->right;
				temp->right = new;
				new->left = NULL;
				if (new->right)
					new->right->parent = new;
				return (new);
			}

			else if ((!temp->left || (temp->left && temp->left->n < value)) && temp->n > value)
			{
				new = (bst_t *) binary_tree_node(NULL, value);
				new->parent = temp;
				new->left = temp->left;
				temp->left = new;
				new->right = NULL;
				if (new->left)
					new->left->parent = new;
				return (new);
			}
			else if (temp->n < value)
			{
				temp = temp->right;
			}
			else if (temp->n > value)
			{
				temp = temp->left;
			}
		}
	}
	new = (bst_t *) binary_tree_node(NULL, value);
	*tree = new;
	return (new);

}
