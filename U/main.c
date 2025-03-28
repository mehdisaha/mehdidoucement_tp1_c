#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction pour l'addition
void addition() {
    int num1 = rand() % 101;
    int num2 = rand() % 101;
    int resultat;
    printf("Addition\n");
    printf("%d + %d = ?\n", num1, num2);
    printf("Entrez le résultat: ");
    scanf("%d", &resultat);
    if (resultat == num1 + num2) {
        printf("Bravo\n");
    } else {
        printf("Faux. La bonne réponse était %d\n", num1 + num2);
    }
}

// Fonction pour la soustraction
void soustraction() {
    int num1 = rand() % 101;
    int num2 = rand() % 101;
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    int resultat;
    printf("Soustraction\n");
    printf("%d - %d = ?\n", num1, num2);
    printf("Entrez le résultat: ");
    scanf("%d", &resultat);
    if (resultat == num1 - num2) {
        printf("Bravo\n");
    } else {
        printf("Faux. La bonne réponse était %d\n", num1 - num2);
    }
}

// Fonction pour la multiplication
void multiplication() {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int resultat;
    printf("Multiplication\n");
    printf("%d * %d = ?\n", num1, num2);
    printf("Entrez le résultat: ");
    scanf("%d", &resultat);
    if (resultat == num1 * num2) {
        printf("Bravo\n");
    } else {
        printf("Faux. La bonne réponse était %d\n", num1 * num2);
    }
}

// Fonction pour afficher le menu des tables de multiplication
void tables_multiplications() {
    int table;
    printf("Tables des multiplications\n");
    printf("Choisissez la table (1 à 10): ");
    scanf("%d", &table);
    if (table < 1 || table > 10) {
        printf("Table invalide.\n");
        return;
    }
    printf("Table de %d:\n", table);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", table, i, table * i);
    }
}

// Fonction pour la division
void divisions() {
    int num1 = rand() % 101 + 1;
    int num2 = rand() % 10 + 1;
    int resultat;
    printf("Division\n");
    printf("%d / %d = ? (entier)\n", num1, num2);
    printf("Entrez le résultat: ");
    scanf("%d", &resultat);
    if (resultat == num1 / num2) {
        printf("Bravo\n");
    } else {
        printf("Faux. La bonne réponse était %d\n", num1 / num2);
    }
}

// Fonction pour afficher le menu principal
void afficher_menu() {
    printf("+-----------------------------------+\n");
    printf("|1 : Addition                      |\n");
    printf("|2 : Soustraction                  |\n");
    printf("|3 : Multiplication                |\n");
    printf("|4 : Tables des multiplications    |\n");
    printf("|5 : Divisions                     |\n");
    printf("|0 : Sortir du jeu                 |\n");
    printf("+-----------------------------------+\n");
}

// Fonction principale
int main() {
    srand(time(NULL));
    int choix;
    do {
        afficher_menu();
        printf("Quel est votre choix ? ");
        scanf("%d", &choix);
        switch (choix) {
            case 1:
                addition();
                break;
            case 2:
                soustraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                tables_multiplications();
                break;
            case 5:
                divisions();
                break;
            case 0:
                printf("Merci de votre visite.\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 0);
    return 0;
}
