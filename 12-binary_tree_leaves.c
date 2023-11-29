#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count binary tree leaves
 * @tree: binary tree
 *
 * Return: returns 0 if tree is null
 * or count of leaves
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
