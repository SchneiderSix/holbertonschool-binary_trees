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
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
	return (NULL);
}

/**
* binary_tree_uncle - search your uncle
* @node: search uncle of node
* Return: null or uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
