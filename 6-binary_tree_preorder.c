#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs a pre-order traversal on a binary tree.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to the function to call for each node.
 *
 * Description: This function traverses a binary tree in pre-order, starting
 *              from the root node, and calls a given function on each node.
 *
 * Return: None.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
