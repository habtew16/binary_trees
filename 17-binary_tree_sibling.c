#include "binary_trees.h"

/**
 * binary_tree_sibling - function toget sibilings
 * @node: pointer to the tree node
 *
 * Return: NULL if no sibiling
 * else pointer to the sibiling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left == node && parent->left != NULL)
		return (parent->right);
	if (parent->right == node && parent->right != NULL)
		return (parent->left);
	return (NULL);
}
