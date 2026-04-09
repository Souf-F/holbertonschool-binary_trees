#include "binary_trees.h"
/* Inclusion du fichier d'en-tête */

/**
 * binary_tree_uncle - Finds the uncle of a node
 *
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
/* Fonction qui retourne un pointeur vers l'oncle */
{
	if (!node || !node->parent || !node->parent->parent)
	/* Vérifie si node, parent, ou grand-parent est NULL */
		return (NULL);
		/* Retourne NULL si l'un est NULL */

	if (node->parent == node->parent->parent->left)
	/* Si le parent est l'enfant GAUCHE du grand-parent */
		return (node->parent->parent->right);
		/* L'oncle est l'enfant DROIT du grand-parent */

	return (node->parent->parent->left);
	/* Sinon, l'oncle est l'enfant GAUCHE du grand-parent */
}
