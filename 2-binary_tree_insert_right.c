#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the
 * right-child of another node.
 * @parent: A pointer to the node to insert the right child in.
 * @value: The value to store in the new node.
 *
 * Description: If the parent already has a right child, the new
 * node takes its
 *              place, and the old right child becomes the
 *              right child of the new
 *              node.
 *
 * Return: A pointer to the newly created node, or
 * NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
