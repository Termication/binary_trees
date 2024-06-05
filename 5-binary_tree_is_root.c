#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Description: This function checks if a node in a binary tree is a root,
 *              i.e., if it has no parent.
 *
 * Return: 1 if the node is a root, 0 otherwise or if node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
