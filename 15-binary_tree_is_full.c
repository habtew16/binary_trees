#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary is full
 * @tree: binary tree
 *
 * Return: returns 0 if null
 * else returns 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
