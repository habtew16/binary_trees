#include "binary_trees.h"

/**
 * binary_tree_insert_right -insertion of node as right-child of another node
 * @parent: ptr to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: Ptr to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_p;

	if (!parent)
		return (NULL);

	new_p = binary_tree_node(parent, value);
	if (new_p == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_p->right = parent->right;
		parent->right->parent = new_p;
	}
	parent->right = new_p;

	return (new_p);
}
