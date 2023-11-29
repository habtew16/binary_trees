#include "binary_trees.h"
#include "9-binary_tree_height.c"
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
	int l_height;
	int r_height;

	if (tree == NULL)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (l_height - r_height);
}
