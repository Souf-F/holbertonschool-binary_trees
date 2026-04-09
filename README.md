# 🌳 Binary Trees - Holberton School Project

## 📖 Description

Ce projet implémente diverses opérations et algorithmes sur les **arbres binaires** en langage C. Il couvre les concepts fondamentaux des structures de données arborescentes, incluant la création, l'insertion, le parcours, et l'analyse des propriétés des arbres binaires.

---

## 🎯 Objectifs d'apprentissage

À la fin de ce projet, vous serez capable d'expliquer :

- Qu'est-ce qu'un arbre binaire
- La différence entre un arbre binaire et un Binary Search Tree (BST)
- Les avantages en termes de complexité temporelle par rapport aux listes chaînées
- Les concepts de profondeur (depth), hauteur (height) et taille (size) d'un arbre binaire
- Les différentes méthodes de parcours d'un arbre binaire
- Qu'est-ce qu'un arbre complet, parfait, équilibré

---

## 📂 Structure du projet
├── binary_trees.h              # Fichier d'en-tête avec prototypes et structures
├── binary_tree_print.c         # Fonction d'affichage visuel des arbres
├── 0-binary_tree_node.c        # Création d'un nœud
├── 1-binary_tree_insert_left.c # Insertion d'un nœud à gauche
├── 2-binary_tree_insert_right.c # Insertion d'un nœud à droite
├── 4-binary_tree_is_leaf.c     # Vérification si un nœud est une feuille
├── 6-binary_tree_preorder.c    # Parcours pré-ordre
├── 10-binary_tree_depth.c      # Calcul de la profondeur
├── 12-binary_tree_leaves.c     # Comptage des feuilles
├── 14-binary_tree_balance.c    # Calcul du facteur d'équilibre
├── 16-binary_tree_is_perfect.c # Vérification arbre parfait
├── 17-binary_tree_sibling.c    # Recherche du frère d'un nœud
└── 18-binary_tree_uncle.c      # Recherche de l'oncle d'un nœud

---

## 🛠️ Compilation

Tous les fichiers sont compilés avec les flags suivants :
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89
```

### Exemple de compilation :
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 0-binary_tree_node.c 0-main.c -o 0-node
```

---

## 📋 Fonctions implémentées

| Fichier | Prototype | Description |
|---------|-----------|-------------|
| `0-binary_tree_node.c` | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)` | Crée un nouveau nœud |
| `1-binary_tree_insert_left.c` | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)` | Insère un nœud comme enfant gauche |
| `2-binary_tree_insert_right.c` | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)` | Insère un nœud comme enfant droit |
| `4-binary_tree_is_leaf.c` | `int binary_tree_is_leaf(const binary_tree_t *node)` | Vérifie si un nœud est une feuille |
| `6-binary_tree_preorder.c` | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))` | Parcours pré-ordre de l'arbre |
| `10-binary_tree_depth.c` | `size_t binary_tree_depth(const binary_tree_t *tree)` | Mesure la profondeur d'un nœud |
| `12-binary_tree_leaves.c` | `size_t binary_tree_leaves(const binary_tree_t *tree)` | Compte le nombre de feuilles |
| `14-binary_tree_balance.c` | `int binary_tree_balance(const binary_tree_t *tree)` | Mesure le facteur d'équilibre |
| `16-binary_tree_is_perfect.c` | `int binary_tree_is_perfect(const binary_tree_t *tree)` | Vérifie si l'arbre est parfait |
| `17-binary_tree_sibling.c` | `binary_tree_t *binary_tree_sibling(binary_tree_t *node)` | Trouve le frère d'un nœud |
| `18-binary_tree_uncle.c` | `binary_tree_t *binary_tree_uncle(binary_tree_t *node)` | Trouve l'oncle d'un nœud |

---

## 🧪 Tests

Chaque fonction dispose d'un fichier `main` de test fourni par Holberton School.

### Exemple d'exécution :
```bash
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 0-binary_tree_node.c 0-main.c -o 0-node
$ ./0-node
       .-------(098)
  .--(012)
(006)
```

### Exemple avec parcours pré-ordre :
```bash
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre
$ ./6-pre
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
98
12
6
56
402
256
512
```

---

## 📚 Structure de données
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

---

## 🎓 Concepts clés

### Parcours d'arbres

- **Pre-order** (pré-ordre) : Racine → Gauche → Droite
- **In-order** (en-ordre) : Gauche → Racine → Droite
- **Post-order** (post-ordre) : Gauche → Droite → Racine

### Propriétés

- **Depth** (profondeur) : Distance d'un nœud à la racine (nombre de liens)
- **Height** (hauteur) : Distance d'un nœud à sa feuille la plus éloignée
- **Balance factor** : Différence de hauteur entre sous-arbres gauche et droit

### Types d'arbres

- **Perfect** (parfait) : Tous les niveaux sont complètement remplis
- **Complete** (complet) : Tous les niveaux sont remplis sauf éventuellement le dernier
- **Balanced** (équilibré) : Balance factor de chaque nœud entre -1 et 1

---

## 🔍 Exemples de concepts

### Arbre parfait (Perfect tree)
