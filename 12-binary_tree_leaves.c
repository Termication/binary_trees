#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of leaves.
 *
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tree_leaves = 0;

	if (tree)
	{
		tree_leaves += (!tree->left && !tree->right) ? 1 : 0;
		tree_leaves += binary_tree_leaves(tree->left);
		tree_leaves += binary_tree_leaves(tree->right);
	}
	return (tree_leaves);
}
