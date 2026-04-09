#include "binary_trees.h"
/* Inclusion du fichier d'en-tête */

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
/* Fonction auxiliaire pour calculer la hauteur */
{
	size_t left_height, right_height;
	/* Déclare deux variables pour les hauteurs */

	if (!tree)
	/* Vérifie si l'arbre est NULL */
		return (0);
		/* Retourne 0 si NULL */

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	/* Calcule la hauteur du sous-arbre gauche */
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	/* Calcule la hauteur du sous-arbre droit */

	return (left_height > right_height ? left_height : right_height);
	/* Retourne la plus grande hauteur */
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
/* Fonction qui vérifie si l'arbre est parfait */
{
	size_t left_height, right_height;
	/* Déclare deux variables pour stocker les hauteurs */

	if (!tree)
	/* Vérifie si l'arbre est NULL */
		return (0);
		/* Retourne 0 si NULL */

	left_height = binary_tree_height(tree->left);
	/* Calcule la hauteur du sous-arbre gauche */
	right_height = binary_tree_height(tree->right);
	/* Calcule la hauteur du sous-arbre droit */

	if (left_height != right_height)
	/* Si les hauteurs sont différentes */
		return (0);
		/* L'arbre n'est pas parfait */

	if (!tree->left && !tree->right)
	/* Si le nœud est une feuille (pas d'enfants) */
		return (1);
		/* Une feuille seule est parfaite */

	if (!tree->left || !tree->right)
	/* Si le nœud a UN SEUL enfant */
		return (0);
		/* Ce n'est pas parfait */

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	/* Vérifie récursivement que les deux sous-arbres sont parfaits */
}
