#include "binary_trees.h"
/* Inclusion du fichier d'en-tête */

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: Number of leaves, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
/* Fonction qui retourne le nombre de feuilles */
{
	if (!tree)
	/* Vérifie si l'arbre est NULL */
		return (0);
		/* Retourne 0 si l'arbre n'existe pas */

	if (!tree->left && !tree->right)
	/* Vérifie si le nœud est une feuille (pas d'enfants) */
		return (1);
		/* Retourne 1 si c'est une feuille */

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	/* Compte les feuilles du sous-arbre gauche + du sous-arbre droit */
}
/* Fin de la fonction */
