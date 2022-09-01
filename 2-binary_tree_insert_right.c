#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_insert_right - insert a node as the right-child of another node
 *@parent: a pointer to the node to insert the right-child in
 *@value: the value to store in the new node
 *Return: a pointer to the created node, or NULL if fail or if parent is NULL
 *If parent already has a right-child, the new node must take its place, and
 *the old right-child must be set as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
		return (NULL);
	new_right_node = binary_tree_node(parent, value);
	if (!new_right_node)
		return (NULL);

	new_right_node->right = parent->right; /* even if it's null */

	if (parent->right != NULL) /* if exists a right node on the parent */
		parent->right->parent = new_right_node; /* making the ex-right
							 * node the right child
							 * of the new one
							 */
	parent->right = new_right_node; /* final step, after checking if the
					 * parent had already a right child
					 */
	return (new_right_node);
}
