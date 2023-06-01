#include "binary_trees.h"
/**
 * binary_tree_height1 - it counts the binary recursively
 * @tree: the starting node
 * Return: the height from the start
 */
size_t binary_tree_height1(const binary_tree_t *tree)
{
	size_t a = 0, b = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		a++;
		a += binary_tree_height1(tree->left);
	}
	if (tree->right)
	{
		b++;
		b += binary_tree_height1(tree->right);
	}
	if (a > b)
		return (a);
	return (b);
}
/**
 * bt_current_level - it extracts elements on the current level
 * @tree: the starting node
 * @level: the level the node is on
 * @func: the function to be applied on every node
 */
void bt_current_level(binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		bt_current_level(tree->left, level - 1, func);
		bt_current_level(tree->right, level - 1, func);
	}
}
/**
 * binary_tree_levelorder - it prints the nodes from top to bottom
 * @tree: the starting node
 * @func: the function to be applied on every node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = binary_tree_height1(tree) + 1;
	int i;

	for (i = 1; i <= h; i++)
		bt_current_level((binary_tree_t *) tree, i, func);
}

