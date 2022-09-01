#include "binary_trees.h"

/**
 *binary_tree_is_leaf - a function that checks if a node is a leaf
 *@node: a pointer to the node to check
 *Return: 1 if true, 0 if not or if NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->right == NULL && node->left == NULL)
			return (1);
	}
	return (0);
}
