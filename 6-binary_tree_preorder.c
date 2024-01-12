#include "binary_trees.h"

/**
 *binary_tree_preorder - function that goes through a binary tree
 *@tree: pointer to the root node of the tree to traverse
 *@func: is a pointer to a function to call for each node
 *Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

