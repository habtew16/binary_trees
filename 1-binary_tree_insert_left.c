#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts node as a left-child of another node
 * @parent: A ptr to the node to insert the left-child in
 * @value: The value to be stored in the new node
 *
 * Return: NULL else, ptr to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* Check if parent pointer is Null */
	if (parent == NULL)
		return (NULL);
	/* Memory allocation for new node */

	new = malloc(sizeof(binary_tree_t));

	/* Check if memory allocation fails */
	if (new == NULL)
		return (NULL);

	/* Initialization of new node */
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;

	/* Check if parent has a left child, adjust pointers */
	if (new->left)
		new->left->parent = new;
	/* Returns a pointer to the new created node */
	return (new);
}
