#include "binary_trees.h"
/**
 * bt_height - it counts the binary height recursively
 * @tree: the starting node
 * Return: the height from the start
 */
int bt_height(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		a++;
		a += bt_height(tree->left);
	}
	else
	{
		a = 0;
	}
	if (tree->right)
	{
		b++;
		b += bt_height(tree->right);
	}
	else
	{
		b = 0;
	}
	if (a > b)
		return (a);
	return (b);
}

/**
 * bt_is_complete - checks if the tree is full bt
 * @tree: pointer to the root node of the tree to travers
 * Return: 0 if not complete, 1 otherwise
 */
int bt_is_complete(const binary_tree_t *tree)
{
	int a, b, h1, h2;

	if (tree)
	{
		a = bt_is_complete(tree->left);
		b = bt_is_complete(tree->right);
		h1 = bt_height(tree->left);
		h2 = bt_height(tree->right);

		if ((h2 >= 1 && h1 >= 1))
		{
			if ((((tree->right != NULL) ^ (tree->left != NULL)) ||
						(!a || !b)) || h1 != h2)
			{
				return (0);
			}
			else
			{
				return (1);
			}
		}
	}
	return (1);
}
/**
 * binary_tree_is_complete - checks if the binary tree is complete
 * @tree: the starting node
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bt_is_complete(tree));
}
