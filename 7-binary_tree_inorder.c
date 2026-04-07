#include "binary_trees.h"
/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function. If tree or func is NULL,
 * the function must do nothing.
 *
 * return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)/*check if one of them is NULL*/
		return;/*stop if NULL found*/

	binary_tree_inorder(tree->left, func);/*go to the left*/
	func(tree->n);/*process the current root and children*/
	binary_tree_inorder(tree->right, func);/*got to the right next*/
}
