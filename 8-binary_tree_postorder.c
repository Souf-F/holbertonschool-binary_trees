#include "binary_trees.h"
/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
/* Déclaration de la fonction qui ne retourne rien (void) */
/* Paramètre 1: pointeur constant vers la racine de l'arbre */
/* Paramètre 2: pointeur vers une fonction qui prend un int et retourne void*/
{
	if (!tree || !func)
	/* Vérifie si tree est NULL (arbre vide) */
	/* OU si func est NULL (pas de fonction à appeler) */
		return;
		/* Si l'un des deux est NULL, arrête l'exécution (cas de base) */

	func(tree->n);
	/* ÉTAPE 1: Visite la RACINE en premier */
	/* Appelle la fonction func avec la valeur du nœud actuel (tree->n) */
	/* Exemple: si func = print_num, alors affiche la valeur */

	binary_tree_preorder(tree->left, func);
	/* ÉTAPE 2: Parcourt le sous-arbre GAUCHE de manière récursive */
	/* Visite tous les nœuds du côté gauche en pré-ordre */

	binary_tree_preorder(tree->right, func);
	/* ÉTAPE 3: Parcourt le sous-arbre DROIT de manière récursive */
	/* Visite tous les nœuds du côté droit en pré-ordre */
	/* Ordre du parcours: Racine → Gauche → Droite (RLR) */
}
