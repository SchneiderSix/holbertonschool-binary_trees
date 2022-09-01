#include "binary_trees.h"

/**
* binary_tree_sibling - search your brother
* @node: search brother of node
* Return: null or node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (&node == &node->parent->left)
	{
		if (node->parent->right)
			return (node->parent->right);
		else
			return (NULL);
	}
	else
		return (node->parent->left);
}
