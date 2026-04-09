#include "binary_trees.h"
/* Inclusion du fichier d'en-tête */

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
/* Fonction auxiliaire pour calculer la hauteur */
{
	size_t left_height, right_height;
	/* Déclare deux variables pour stocker les hauteurs */

	if (!tree)
	/* Vérifie si l'arbre est NULL */
		return (0);
		/* Retourne 0 si NULL */

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	/* Calcule la hauteur du sous-arbre gauche (0 si NULL, sinon 1 + récursion)*/
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	/* Calcule la hauteur du sous-arbre droit (0 si NULL, sinon 1 + récursion) */

	return (left_height > right_height ? left_height : right_height);
	/* Retourne la plus grande des deux hauteurs */
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
/* Fonction qui retourne le facteur d'équilibre */
{
	int left_height, right_height;
	/* Déclare deux variables int pour stocker les hauteurs */

	if (!tree)
	/* Vérifie si l'arbre est NULL */
		return (0);
		/* Retourne 0 si NULL */

	left_height = tree->left ? (int)binary_tree_height(tree->left) + 1 : 0;
	/* Calcule la hauteur du sous-arbre gauche (cast en int, +1 pour le lien) */
	right_height = tree->right ? (int)binary_tree_height(tree->right) + 1 : 0;
	/* Calcule la hauteur du sous-arbre droit (cast en int, +1 pour le lien) */

	return (left_height - right_height);
	/* Retourne la différence : hauteur_gauche - hauteur_droite */
}
