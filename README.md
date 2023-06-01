# Programme de gestion de parapharmacie

Ce programme en C permet de gérer les clients, les fournisseurs et les produits d'une parapharmacie. Il offre des fonctionnalités d'ajout, de suppression et de modification pour les clients et les fournisseurs, ainsi que la gestion des produits.

## Fonctionnalités

Le programme offre les fonctionnalités suivantes :

1. Gestion des clients :
   - Ajout d'un nouveau client avec ses informations telles que le nom, le prénom, l'adresse, le numéro de téléphone, etc.
   - Suppression d'un client existant en recherchant par son identifiant unique.
   - Modification des informations d'un client existant en recherchant par son identifiant unique.

2. Gestion des fournisseurs :
   - Ajout d'un nouveau fournisseur avec ses informations telles que le nom, l'adresse, le numéro de téléphone, etc.
   - Suppression d'un fournisseur existant en recherchant par son identifiant unique.
   - Modification des informations d'un fournisseur existant en recherchant par son identifiant unique.

3. Gestion des produits :
   - Ajout d'un nouveau produit avec ses informations telles que le nom, la description, le prix, la quantité en stock, etc.
   - Suppression d'un produit existant en recherchant par son identifiant unique.
   - Modification des informations d'un produit existant en recherchant par son identifiant unique.
   - Recherche de produits par nom ou catégorie.
   - Affichage de la liste des produits disponibles.

## Utilisation

1. Compilation du programme :
   ```
   gcc gestion_parapharmacie.c -o gestion_parapharmacie
   ```

2. Exécution du programme :
   ```
   ./gestion_parapharmacie
   ```

3. À l'exécution, le programme affichera un menu avec les différentes options disponibles pour gérer les clients, les fournisseurs et les produits. Vous pouvez naviguer dans le menu en entrant le numéro correspondant à l'option souhaitée.

4. Suivez les instructions à l'écran pour effectuer les opérations souhaitées, telles que l'ajout, la suppression ou la modification des clients, des fournisseurs et des produits.

5. Pour quitter le programme, sélectionnez l'option appropriée dans le menu.

## Structure du code

Le code source du programme est structuré de la manière suivante :

- `gestion_parapharmacie.c` : Contient le code principal du programme. Il gère les interactions utilisateur, affiche le menu et appelle les fonctions appropriées en fonction des choix de l'utilisateur.
- `clients.c` : Contient les fonctions de gestion des clients, y compris l'ajout, la suppression et la modification des clients.
- `fournisseurs.c` : Contient les fonctions de gestion des fournisseurs, y compris l'ajout, la suppression et la modification des fournisseurs.
- `produits.c` : Contient les fonctions de gestion des produits, y compris l'ajout, la suppression, la modification et la recherche des produits.
- `structures.h` : Définit les structures de données utilisées dans le programme, telles que la structure pour les clients, les fournisseurs et les produits.
- `donnees.c` : Contient les données initiales des clients, des fournisseurs et des produits (pour les tests).

Vous pouvez modifier et étendre le programme en ajoutant de nouvelles fonctionnalités ou en améliorant les fonction

nalités existantes selon vos besoins.

**Note :** Ce fichier README est une description générale du programme de gestion de parapharmacie. Assurez-vous de fournir les fichiers de code source appropriés pour que le programme fonctionne correctement.

N'hésitez pas à me demander si vous avez besoin d'autres informations ou d'une assistance supplémentaire !
