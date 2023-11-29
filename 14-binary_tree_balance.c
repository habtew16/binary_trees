#include "binary_trees.h"

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
 * binary_tree_balance - function to get binary tee
 * balance
 *
 * @tree: tree to be checked
 * Return: returns pointers to node or
 * null then 0
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
