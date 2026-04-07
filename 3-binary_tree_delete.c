#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)/*if not tree*/
		return;

	binary_tree_delete(tree->left);/*free the left branch of the tree*/
	binary_tree_delete(tree->right);/*free the right branch of the tree*/

	free(tree);/*free the entier tree*/
}
