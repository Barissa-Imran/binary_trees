#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int n = 0;

	if (node != NULL)
	{
		n = ((node->left == NULL) && (node->right == NULL) ? 1 : 0);
	}
	return (n);
}

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_is_leaf(tree) + binary_tree_leaves(tree->right) +
				binary_tree_leaves(tree->left));
}
