#include "binary_trees.h"

/**
 *binary_tree_preorder - a function that goes through a binary
 *tree using pre-order traversal
 *@tree: a pointer to the root node of the tree to traverse
 *@func: a pointer to a function to call for each node. The value in the node
 *must be passed as a parameter to this function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n); /* print node value first, passing
			* value from node as paramete
			*/
	binary_tree_preorder(tree->left, (*func));
	binary_tree_preorder(tree->right, (*func));
}
