#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if the binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);

	if (!queue)
		return (0);

	int front = 0, rear = 0;
	int null_seen = 0;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		if (current == NULL)
		{
			null_seen = 1;
		}
		else
		{
			if (null_seen)
			{
				free(queue);
				return (0);
			}
			queue[rear++] = current->left;
			queue[rear++] = current->right;
		}
	}

	free(queue);
	return (1);
}
