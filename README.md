# Convertisseur Morse ↔ Texte en C 📟
Un petit programme en C développé à l'occasion d'un exercice de manipulation de chaînes de caractères (strings) et de gestion de la mémoire. Il permet de traduire des phrases en code Morse et inversement.

      [ ALPHABET ]                       [ CODE MORSE ]
      "C CODE !"    ---- Convertir --->  -.-./ /---/-.././ /!
                    <---  Decoder  ----

## Objectif du projet
Ce projet a été conçu pour mettre en pratique plusieurs concepts fondamentaux du langage C :
- Découpage de chaînes (Tokenization) via la fonction `strtok()`.
- Parcours de tableaux et correspondances d'index.
- Gestion des buffers de saisie utilisateur (`scanf`, `getchar`).

## Fonctionnalités
- **Bidirectionnel :** Traduit du texte vers le Morse (Choix 1) et du Morse vers le texte (Choix 2).
- **Séparation claire :** Utilise le slash (`/`) comme délimiteur entre les lettres en code Morse pour éviter les ambiguïtés lors du décodage.

## Détails techniques et Limites
- **Buffer maximal :** Le programme utilise un buffer d'entrée fixe. La taille maximale de la phrase est de **1024 caractères** (incluant les espaces et les slashs).

## Compilation et Exécution (Linux / Ubuntu)

Étant donné que le développement se fait sous environnement Linux (Ubuntu), voici les commandes pour compiler et tester le projet. Assurez-vous d'avoir le compilateur GCC installé.

