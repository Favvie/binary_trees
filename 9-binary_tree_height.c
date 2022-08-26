#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree:the pointer to the root node of the tree
 *
 * Return: size of the tree
 */
int binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((!tree->left) && (!tree->right))
		return (0);

	int counter_left = 0;
	int counter_right = 0;

	counter_left = 1 + binary_tree_height(tree->left);
	counter_right = 1 + binary_tree_height(tree->right);

	if (counter_right > counter_left)
		return (counter_right);

	return (counter_left);
}
