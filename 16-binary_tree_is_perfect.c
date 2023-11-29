#include "binary_trees.h"
#include "13-binary_tree_nodes.c"


/**
 * max - function to find max of two
 * numbers
 * @a: first number
 * @b: second number
 *
 * Return: return largest
 */

int max(int a, int b)
{
	return ((a > b) ? a : b);
}


/**
 * binary_tree_height - calculate the height of the
 * binary tree
 * @tree: bbinary tree
 * Return: 0 if null else
 * height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (-1);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (1 + max(l_height, r_height));
}


/**
 * binary_tree_is_perfect - function to check if binary tree
 * is perfect
 * @tree: tree
 *
 * Return: returns 0 or 1 if true
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;
	int node;
	int count;
	int i;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	node = 1;
	for (i = 0; i < height; i++)
		node *= 2;

	count = binary_tree_nodes(tree);
	return ((count == node) ? 1 : 0);
}
