#include "binary_trees.h"
/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left_subtree = binary_tree_size(tree->left);
	size_t right_subtree =	binary_tree_size(tree->right);

	size_t sum = left_subtree + right_subtree + 1;

	return (sum);
}
