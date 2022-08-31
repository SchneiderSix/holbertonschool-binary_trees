#include "binary_trees.h"

/**
* binary_tree_depth - find depth of a node in bi tree
* @tree: node
* Return: 0 or depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	while (tree->parent = tree->parent->parent)
	{
		i++;
	}
	return (i);
}
