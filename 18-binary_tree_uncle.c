#include "binary_trees.h"

/**
 * binary_tree_uncle - function to get uncle
 * of the binary tree
 * @node: pointer to the node of b_tree
 *
 * Return: null if no uncle
 * else pointer to uncle
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_pa;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	grand_pa = node->parent->parent;
	if (grand_pa->left != NULL && grand_pa->right != NULL)
	{
		if (grand_pa->left == node->parent)
			return (grand_pa->right);
		if (grand_pa->right == node->parent)
			return (grand_pa->left);
	}
	return (NULL);
}
