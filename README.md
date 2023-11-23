PROJECT holbertonschool-_printf

// breve description du projet avec objectif et fonctionnalité principal //

Notre projet est de recrée la fonction _printf pour ces specificateurs de conversion suivant : c, s, %, d, i.
La fonction _printf en langage C est une fonction de la bibliothèque standard qui permet d'afficher des données formatées sur la console. Son nom signifie "print formatted", ce qui indique sa capacité à gérer des formats spécifiques pour différents types de données. Elle prend en général une chaîne de format en tant que premier argument, suivie par les valeurs à afficher, selon les spécifications de format incluses dans la chaîne.

// decrire _printf //

La fonction _printf est une fonction de sortie formatée en langage C (et dans d'autres langages inspirés de C). Elle est principalement utilisée pour afficher du texte et d'autres données formatées à la console.
La signature de base de la fonction _printf est la suivante : 
int _printf(const char* format, ...); 

_printf renvoie le nombre total de caractères écrits (y compris le nombre d'octets utilisés pour représenter les caractères spéciaux tels que les sauts de ligne), ou un nombre négatif en cas d'erreur. Si une erreur se produit, la variable errno est également mise à jour pour indiquer le type d'erreur.

const char *format est une chaîne de format qui spécifie comment les arguments supplémentaires doivent être formatés et affichés. Elle peut contenir des caractères ordinaires (qui sont simplement copiés sur la sortie standard) et des spécificateurs de format. Les spécificateurs de format commencent généralement par le caractère % suivi d'un caractère qui indique le type de données attendu. Par exemple, %d est utilisé pour un entier, %f pour un nombre à virgule flottante, %c pour un caractère, etc.

Les points de suspension (...) indiquent que la fonction _printf accepte un nombre variable d'arguments. Ces arguments doivent correspondre aux spécificateurs de format dans la chaîne de format. Les types d'arguments doivent correspondre aux spécificateurs de format pour éviter un comportement indéfini.

// decrire les etape et commande necessaire //

La fonction _printf fait partie de la bibliothèque standard en C, donc la première étape consiste à inclure la bibliothèque stdio.h : #include "main.h"




// dire les restriction //

Tous nos fichiers doivent se terminer par une nouvelle ligne.
Un fichier README.md, à la racine du dossier de nos projet est obligatoire.
Notre code doit utiliser le style Betty. Il sera vérifié en utilisant betty-style.pl et betty-doc.pl.
On n'êtes pas autorisé à utiliser des variables globales.
On ne peut pas mettre plus de 5 fonctions par fichier.
Les prototypes de toutes nos fonctions doivent être inclus dans votre fichier d'en-tête appelé main.h

// montrez comment utiliser les fonction principales //
#include "main.h"

int main() 
{
    // Votre code va ici
    return 0;
}

int main() 
{
    // Utilisation basique de _printf
    _printf("Hello, world!\n");

    // Utilisation de _printf avec des variables
    int entier = 42;
    char caractere = 'A';

    _printf("Entier : %d\n", entier);
    _printf("Caractere : %c\n", caractere);
    _printf("String : %s\n", "i'm a string");
    _printf("Percent : %%\n");
    
    return 0;
}

// decrire chaque parametre de la fonction _printf //



// expliquer ce que retourne la fonction _printf et comment //

La fonction _printf en langage C retourne le nombre total de caractères écrits sur la sortie standard (généralement la console). La valeur de retour indique le nombre d'octets ou de caractères qui ont été affichés, y compris les caractères spéciaux tels que les sauts de ligne ("\n"). Si une erreur survient, _printf retourne un nombre négatif, et la variable errno est mise à jour pour indiquer le type d'erreur.


