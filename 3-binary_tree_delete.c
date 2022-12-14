#include "binary_trees.h"

/**
 * binary_tree_delete - delete the entire binary tree
 * @tree: the pointer to the node to be deleted
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
