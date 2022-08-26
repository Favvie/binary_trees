#include "binary_trees.h"

/**
 * stuff
 * @l: more stuff
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t counter = 0;
	if (tree->parent)
		counter = 1 + binary_tree_depth(tree->parent);
	return (counter);
}
