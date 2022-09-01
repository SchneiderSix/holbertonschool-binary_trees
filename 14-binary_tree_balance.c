#include "binary_trees.h"

/**
* binary_tree_balance - balance factor of tree
* @tree: root node
* Return: 0 or balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lowiq = 0, i = 1, q = -1;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (tree->left)
		i++;
	if (tree->right)
		q--;
	lowiq = i + q;
	return (binary_tree_balance(tree->left) +
	binary_tree_balance(tree->right) + lowiq);
}
