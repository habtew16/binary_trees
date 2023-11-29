#include "binary_trees.h"


/**
 * binary_tree_size - function to get the size of the
 * binary tree
 * @tree: of which size to be claculated
 *
 * Return: 0 if null else size
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
