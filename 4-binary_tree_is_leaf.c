#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
/* Fonction qui retourne 1 si feuille, 0 sinon */
{
	if (!node)
	/* Vérifie si le nœud est NULL */
		return (0);
		/* Retourne 0 si le nœud n'existe pas */
	if (!node->left && !node->right)
	/* Vérifie si le nœud n'a pas d'enfant gauche ET pas d'enfant droit */
		return (1);
		/* Retourne 1 si c'est une feuille (aucun enfant) */
	return (0);
	/* Retourne 0 si le nœud a au moins un enfant */
}
