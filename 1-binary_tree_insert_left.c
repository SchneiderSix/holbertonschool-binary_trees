#include "binary_trees.h"
#include "stdlib.h"

/**
 *binary_tree_insert_left - a function that inserts a node as the left-child
 *of another node
 *@parent: a pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *Return: a pointer to the created node, or NULL on failure or if
 *parent is NULL
 *If parent already has a left-child, the new node must take its place,
 *and the old left-child must be set as the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);

	if (!new_left_node)
		return (NULL);

	if (parent->left == NULL)/* if parent node doesn't have a left child */
		parent->left = new_left_node;
	else
	{
		new_left_node->left = parent->left;/* ex-left child of parent
						    * is going to be the left
						    * child of the new left
						    * child of parent
						    */
		parent->left->parent = new_left_node; /* setting new parent of
						       * ex-left child to new
						       * left node
						       */
		parent->left = new_left_node; /* setting the new left child */
	}
	return (new_left_node);
}
