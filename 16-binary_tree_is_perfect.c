#include "binary_trees.h"

/**
* depth - find depth of a node in bi tree
* @tree: node
* Return: 0 or depth
*/
size_t depth(const binary_tree_t *tree)
{
	int ld, rd;

	if (!tree)
		return (0);
	else
	{
		ld = depth(tree->left);
		rd = depth(tree->right);
		if (ld > rd)
			return (ld + 1);
		else
			return (rd + 1);
	}
}

/**
 *binary_tree_height - a function that measures the height of a binary tree
 *@tree: Pointer to the node to measures the height
 *Return: the height of the tree
 *If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	/* check and count first in left edge from root node of subtree */
	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;

	/* now in right edge from root node of subtree */
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* see whose is the bigest to be returned */
	return (height_left > height_right ? height_left : height_right);
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
	if (tree->left->left && tree->left->right
	&& tree->right->left && tree->right->right)
	{
		if (binary_tree_height(tree) == 2 ||
		binary_tree_height(tree) == 3)
			return (1);
	}
	if (tree->left && tree->right)
	{
		if (depth(tree->left) ==
		depth(tree->right)
		&& !tree->left->left && !tree->left->right
		&& !tree->right->left && !tree->right->right)
		{
			flag = 1;
			return (1);
		}
	}
	if (depth(tree->left) == depth(tree->right)
	&& tree->left->left && tree->left->right
	&& tree->right->left && tree->right->right)
		flag = 0;

	if (flag == 0)
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));
}
