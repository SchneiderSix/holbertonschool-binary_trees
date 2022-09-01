#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_delete - a function that deletes an entire binary tree
 *this deletion uses the he postorder transversal because before deleting the
 *parent node, it should be deleted its child nodes first.
 *@tree: a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
