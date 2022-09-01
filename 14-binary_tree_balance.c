#include "binary_trees.h"

/**
* binary_tree_balance - balance factor of tree
* @tree: root node
* Return: 0 or balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int le = 0, ri = 0;

	if (!tree)
		return (0);
	le = binary_tree_balance(tree->left);
	ri = binary_tree_balance(tree->right);
	if (le > ri)
		return (le + 1);
	else
		return (ri + 1);
}
