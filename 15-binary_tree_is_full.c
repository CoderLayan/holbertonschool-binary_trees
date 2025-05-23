#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if a binary tree is full
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if the tree is full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);

/* A leaf node is full */
if (!tree->left && !tree->right)
return (1);

/* If both left and right children are present, check recursively */
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));

/* If one child is missing, the tree is not full */
return (0);
}
