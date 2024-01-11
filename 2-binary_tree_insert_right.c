#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * @parent:pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: new_nd or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		new_nd->right = parent->right;
		new_nd->right->parent = new_nd;
	}
	parent->right = new_nd;

	return (new_nd);
}
