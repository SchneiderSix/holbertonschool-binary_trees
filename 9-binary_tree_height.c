#include "binary_trees.h"

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
