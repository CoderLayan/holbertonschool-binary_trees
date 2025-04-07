#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_right - Inserts a node as the right-child of another node
* @parent: Pointer to the node to insert the right-child in
* @value: Value to store in the new node
*
* Return: Pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

/* Check if parent is NULL */
if (parent == NULL)
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node */
new_node->n = value;
new_node->parent = parent;
new_node->right = parent->right; /* If parent already has a right child */
new_node->left = NULL;

/* Set the new node as parent's right child */
parent->right = new_node;

/* Update the old right child's parent pointer, if it exists */
if (new_node->right != NULL)
new_node->right->parent = new_node;

return (new_node);
}
