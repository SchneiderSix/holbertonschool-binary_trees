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
	int leftD = binary_tree_depth(tree->left);
	int rightD = binary_tree_depth(tree->right);

	size_t leftDepth = 0;
	size_t rightDepth = 0;

	if (leftD > rightD)
		return (leftDepth + 1);
	else
		return (rightDepth + 1);
}
