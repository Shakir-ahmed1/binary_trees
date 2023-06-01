#include "binary_trees.h"
/**
 * binary_trees_ancestor - find the lowest common ancestor of the
 * second and first node
 * @first: the first node
 * @second: the second node
 * Return: the common ancestor, NULL if failed
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int c1 = 0, c2 = 0;
	binary_tree_t *t1, *t2;

	if (first == NULL || second == NULL)
		return (NULL);
	t1 = (binary_tree_t *) first;
	t2 = (binary_tree_t *) second;
	while (t1->parent != NULL)
	{
		t1 = t1->parent;
		c1++; }
	while (t2->parent != NULL)
	{
		t2 = t2->parent;
		c2++; }
	t1 = (binary_tree_t *) first;
	t2 = (binary_tree_t *) second;
	while (c1 != c2)
	{
		if (c1 > c2)
		{
			c1--;
			t1 = t1->parent; }
		else
		{
			c2--;
			t2 = t2->parent; }
	}
	while (t1 != NULL)
	{
		if (t1 == t2)
		{
			return (t1);
		}
		else
		{
			t1 = t1->parent;
			t2 = t2->parent; }
	}
	return (NULL);
}
