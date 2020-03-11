#include "binary_trees.h"
/**
  *binary_tree_is_root - checks if node is root of binary tree
  *@node: pointer to node of a binary tree
  *Return: 1 if root of tree or 0 if not root
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}