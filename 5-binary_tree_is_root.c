#include "binary_trees.h"

/**
 *binary_tree_is_root - a function that checks if a node is a root
 *@node: a pointer to the node to check
 *Return: 1 if true, 0 if not or if NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}

