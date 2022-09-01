#include "binary_trees.h"

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
	if (!tree->parent)
		flag = 1;
	if (flag == 1)
		return (1);
	if (tree->left && tree->right)
		flag = 1;
	if (flag == 0)
		return (0);
	if (tree->parent && (!tree->left || !tree->right))
		flag = 0;
	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));
}
