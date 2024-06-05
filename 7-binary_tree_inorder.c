#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs an in-order traversal on a binary tree.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to the function to call for each node.
 *
 * Description: This function traverses a binary tree in inorder, starting
 *              from the leftmost node, then the root, and finally the
 *              rightmost node, and calls a given function on each node.
 *
 * Return: None.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
