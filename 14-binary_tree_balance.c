#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL, else return height.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int left_height = 0, right_height = 0;

		if (tree->left)
			left_height = 1 + binary_tree_balance(tree->left);
		if (tree->right)
			right_height = 1 + binary_tree_balance(tree->right);
		return (left_height - right_height);
	}
	return (0);
}
