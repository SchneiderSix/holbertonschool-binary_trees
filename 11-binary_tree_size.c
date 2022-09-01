#include "binary_trees.h"

/**
* binary_tree_size - return size fo tree
* @tree: root node
* Return: 0 or size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
