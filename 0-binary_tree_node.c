#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_node - a function that creates a binary tree node
 *@parent: a pointer to the parent node of the node to create
 *@value: the value to put in the new node
 *Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);

	newnode->n = value;

	if (!parent) /* if there's no parent, it's root node */
		newnode->parent = NULL;
	else
		newnode->parent = parent;

	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
