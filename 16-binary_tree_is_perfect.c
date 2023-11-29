#include "binary_trees.h"



/**
 * is_perfect - function to checl if the
 * tree is perfect
 *
 * @tree: tree
 * Return: 0 if is not
 * else 1
 */
int is_perfect(const binary_tree_t *tree)
{
	int l_tree = 0;
	int r_tree = 0;

	if (tree->left && tree->right)
	{
		l_tree = 1 + is_perfect(tree->left);
		r_tree = 1 + is_perfect(tree->right);
		if (r_tree == l_tree && r_tree != 0 && l_tree != 0)
			return (r_tree);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	return (0);
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
	if (tree == NULL)
		return (0);
	return ((is_perfect(tree) != 0) ? 1 : 0);
}
