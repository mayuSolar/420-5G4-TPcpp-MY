# Nom du contributeur
Marisa Yu, Groupe 1


# Fonctionnalités choisies d'implémenter
Interface et Expérience Utilisateur :
    - Numérotation automatique des ID utilisateurs

Gestion des Données :
    - Tri des résultats par titre, auteur pour l’affichage (utilisation de la fonction de tri de la STL).


# Question 1 : C++
```
for (size_t i = 0; i < users.size(); i++) {
        int userIdCurrent = stoi(users[i]->getUserId());

        if (userIdCurrent > plusGrandId) {
            plusGrandId = userIdCurrent;
        }
}
```
Dans le cours, nous n'avons pas vu ``size_t``. Il est utilisé pour compter la taille d'un vecteur à la place de ``ìnt``,
car il représente seulement des nombres positifs, comparativement au ``int``qui représente des nombres positifs et négatifs.
Lorsque j'ai utilisé ``ìnt``, cela m'a donné un erreur lorsque j'utilisais ``.size()``.


# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de donner chemin vers le repertoire data avec l'application `bibliotheque -d <chemin verrs data>`