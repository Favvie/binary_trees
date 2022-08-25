#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - measures the depth of the node
 * @tree: the pointer to the node to be measured
 *
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t counter = 0;

	if (tree->parent != NULL)
		counter = 1 + binary_tree_depth(tree->parent);
	return (counter);
}
