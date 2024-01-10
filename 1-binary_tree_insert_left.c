#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent:pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: new_nd or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nd;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_nd = binary_tree_node(parent, value);

	if (new_nd == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new_nd->left = parent->left;
		new_nd->left->parent = new_nd;
	}
	new_nd->left = parent->left;

	return (new_nd);
}
