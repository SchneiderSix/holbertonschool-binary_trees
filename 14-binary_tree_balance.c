#include "binary_trees.h"

/**
* binary_tree_balance - balance factor of tree
* @tree: root node
* Return: 0 or balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int i = 0, q = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	if (!tree->parent)
	{
		if (tree->left && tree->right)
		{
			i++;
			q++;
		}
		if (tree->left)
			i++;
		if (tree->right)
			q++;
	}

	if (tree->left)
		i++;
	if (tree->right)
		q++;
	if (i == 1 && q == 1 && tree->left->left
	&& tree->left->right)
		return (1);
	return (binary_tree_balance(tree->left) +
	binary_tree_balance(tree->right) +
	i - q);
}
