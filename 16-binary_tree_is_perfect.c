#include "binary_trees.h"
/**
 * binary_tree_height1 - it counts the binary height recursively
 * @tree: the starting node
 * return: the height from the start
 */
int binary_tree_height1(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		a++;
		a += binary_tree_height1(tree->left);
	}
	else
	{
		a = 0;
	}
	if (tree->right)
	{
		b++;
		b += binary_tree_height1(tree->right);
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
 * bt_is_perfect - checks if the tree is full bt
 * @tree: pointer to the root node of the tree to travers
 * Return: 0 if not perfect, 1 otherwise
 */
int bt_is_perfect(const binary_tree_t *tree)
{
	int a, b, h1, h2;
	if (tree)
	{
		a = bt_is_perfect(tree->left);
		b = bt_is_perfect(tree->right);
		h1 = binary_tree_height1(tree->left);
		h2 = binary_tree_height1(tree->right);
		if ((((tree->right != NULL) ^ (tree->left != NULL)) || (!a || !b)) || h1 != h2)
			return (0);
		else
			return (1);
	}
	return (1);
}
/**
 * binary_tree_is_perfect - checks if the tree is perfect bt
 * @tree: pointer to the root node of the tree to travers
 * Return: 0 if not perfect, 1 otherwise and 0 if the provided tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bt_is_perfect(tree));
}
