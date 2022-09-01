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
	if (!tree->parent &&
	!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right &&
	binary_tree_depth(tree->left) ==
	binary_tree_depth(tree->right)
	&& tree->left->left && tree->left->right
	&& tree->right->left && tree->right->right)
		flag = 1;

	if (flag == 1)
		return (1);
	if (flag == 0)
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));
}
