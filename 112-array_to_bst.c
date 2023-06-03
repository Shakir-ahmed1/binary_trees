#include "binary_trees.h"
/**
 * array_to_bst - converts an array to bst
 * @array: the array of integers
 * @size: the size of the array
 * Return: the root of the new bst
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root;
	size_t i = 0;

	root = NULL;
	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}
	return (root);
}
