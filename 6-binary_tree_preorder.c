#include "binary_trees.h"
/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
/* Fonction qui prend un pointeur vers l'arbre et un pointeur de fonction */
{
	if (!tree || !func)
	/* Vérifie si l'arbre ou la fonction est NULL */
		return;
		/* Arrête l'exécution si NULL */

	func(tree->n);
	/* Appelle la fonction sur la valeur du nœud actuel (racine) */
	binary_tree_preorder(tree->left, func);
	/* Appel récursif sur le sous-arbre gauche */
	binary_tree_preorder(tree->right, func);
	/* Appel récursif sur le sous-arbre droit */
}
