#include "binary_trees.h"
/* Inclusion du fichier d'en-tête */

/**
 * binary_tree_postorder - Goes through a binary tree using post-order
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
/* Fonction qui parcourt l'arbre en post-ordre */
{
	if (!tree || !func)
	/* Vérifie si l'arbre ou la fonction est NULL */
		return;
		/* Arrête l'exécution si NULL */

	binary_tree_postorder(tree->left, func);
	/* 1. Parcourt le sous-arbre GAUCHE de manière récursive */
	binary_tree_postorder(tree->right, func);
	/* 2. Parcourt le sous-arbre DROIT de manière récursive */
	func(tree->n);
	/* 3. Visite la RACINE en dernier */
}
