#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node,
 * otherwise NULL if node/parent is NULL or no sibling exists.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    /*check if the node is NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

    /*if current node is left child...*/
	/*...the sibling is the right one (even if it's NULL)*/
	if (node->parent->left == node)
		return (node->parent->right);

    /*else it's the right child*/
	/*and the sibling is the left one (even if it's NULL)*/
	return (node->parent->left);
}
