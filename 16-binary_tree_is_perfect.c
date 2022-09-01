#include "binary_trees.h"

/**
* binary_tree_depth - find depth of a node in bi tree
* @tree: node
* Return: 0 or depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t p = 0;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	p = binary_tree_depth(tree->parent);
	return (p + 1);
}

/**
* binary_tree_is_perfect - check if tree is perfect
* @tree: root node;
* Return: 0 not p 1 yes p
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int flag = 0;

	if (!tree)
		return (0);
	if (flag == 1)
		return (1);
	if (!tree->parent &&
	!tree->left && !tree->right)
		return (1);
	if (binary_tree_depth(tree->left) ==
	binary_tree_depth(tree->right))
		flag = 1;
	if (flag == 0)
		return (0);
	if (!tree->left || !tree->right)
		flag = 0;
	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));
}
