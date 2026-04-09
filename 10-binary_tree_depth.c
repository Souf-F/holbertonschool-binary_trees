#include "binary_trees.h"
/* Inclut le fichier d'en-tête contenant la structure binary_tree_t */

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, or 0 if tree is NULL
 */
/* Documentation de la fonction expliquant son rôle et ses paramètres */

size_t binary_tree_depth(const binary_tree_t *tree)
/* Déclaration de la fonction qui retourne size_t (taille non-signée) */
/* Prend en paramètre un pointeur constant vers un nœud */
{
	if (!tree || !tree->parent)
	/* Vérifie si tree est NULL OU si le nœud n'a pas de parent (racine) */
		return (0);
		/* Si c'est le cas, retourne 0 (profondeur nulle) */

	return (1 + binary_tree_depth(tree->parent));
	/* Sinon, compte 1 pour le lien actuel */
	/* Puis ajoute la profondeur du parent (appel récursif) */
	/* Continue jusqu'à atteindre la racine */
}
