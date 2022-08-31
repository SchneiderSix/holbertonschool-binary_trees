#include "binary_trees.h"

/**
* binary_tree_depth - find depth of a node in bi tree
* @tree: node
* Return: 0 or depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t leftDepth = 0, rightDepth = 0;

	leftDepth = binary_tree_depth(tree->left);
	rightDepth = binary_tree_depth(tree->right);

	if (leftDepth > rightDepth)
		return (leftDepth + 1);
	else
		return (rightDepth + 1);
}
