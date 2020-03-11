#include <stdio.h>
#include <windows.h>

/*
 * ---------------------------------------------------------------------------
 * Createur : Meline Juillet
 * But : Faire une bataille navale dans le cadre du cour MA-20.
 * Verssion : travail sur la verssion 0.1 - verssion du 0.1: 0.2
 * Date : 06.03.2020
 * ---------------------------------------------------------------------------
 */

//ici l'on declare les fonction utiliser pour les utiliser patout.
void menuBase();

void jeux(){
    //ici l'on netoye la page
    system("cls");

    int afLigne,afCol;

    //declaration des varriable
    char visuel[10][10]={
        "~","~","~","~","~","~","~","~","~","~",
        "~","~","~","~","~","~","~","~","~","~",
        "~","~","~","~","~","~","~","~","~","~",
        "~","~","~","~","~","~","~","~","~","~",
        "~","~","~","~","~","~","~","~","~","~",
        "~","~","~","~","~","~","~","~","~","~",
        "~","~","~","~","~","~","~","~","~","~",
        "~","~","~","~","~","~","~","~","~","~",
        "~","~","~","~","~","~","~","~","~","~",
        "~","~","~","~","~","~","~","~","~","~",};

    int grille [10][10] = {
        0,5,0,0,0,1,0,0,0,0,
        0,5,0,0,0,1,0,0,0,0,
        0,0,0,0,0,1,0,0,0,0,
        0,0,0,0,0,1,0,0,0,0,
        0,0,0,0,0,1,0,0,0,0,
        2,2,2,2,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,
        0,0,3,3,3,0,0,0,0,0,
        0,0,0,0,0,0,4,4,4,0,
        0,0,0,0,0,0,0,0,0,0};

    printf("Bataille Navale \n\n");

    printf(" 1  2  3  4  5  6  7  8  9  10 \n");
    printf("_______________________________\n");

    for (afLigne=0; afLigne<10;afLigne++){
        for (afCol=0; afCol<10;afCol++){
            printf("| %c ",visuel[afLigne][afCol]);
        }
        printf("|\n");
    }
    system("pause");
}

void modeAide(){

    //ici l'on netoye la page
    system("cls");

    //decaration et initialisation de la variable retour il vas nous permettre d'aller au menu
    int retour=0;

    //creation du mode aide qui afficher les regle de base du programme
    printf("Mode Aide\n\n");
    printf("Regle :\n");
    printf("Une grille de 10 par 10, faite par le programme a placer les bateau sur une grille vous devez les retrouver.\n");
    printf("Il vous suffira d'introduire une les cordonees du point que vous voullez toucher et le logiciel vous dira si \n");
    printf("vous avez toucher, ratter ou couler un bateau.\n\n");

    printf("Toucher : signifie que vous avez toucher une partie du bateau mais il n'est pas encore couler.\n");
    printf("Rater : signifie que vous avez viser dans l'eau il faut donc retenter sa chance.");
    printf("Couler : signifie que vous avez toucher toutes les partie du bateau il est donc hors jeux.\n\n");

    printf("Bateau :\n");
    printf("Il y a 5 bateau\n");
    printf("1 porte-avion (il s'etale sur 5 cases)\n");
    printf("1 croiseur (il s'etale sur 4 cases)\n");
    printf("2 contre-torpilleurs (il s'etale sur 3 cases)\n");
    printf("1 torpilleur (il s'etale sur 2 cases)\n\n\n");

    printf("Tapper sur 1 pour revenir au menu");
    scanf("%d",&retour);

    if (retour=1){
        menuBase();
    }

}
void menuBase(){

    //ici l'on netoye la page
    system("cls");

// Mise en place de la page titre dans une fonction pour la reutiliser.
    int choix=0;    //initioalisation de la variable.
    printf("Bataille Navale\n\n");

    printf("1 : Jouer\n");
    printf("2 : Utilisateur\n");
    printf("3 : Resultat\n");
    printf("4 : Aide\n");
    printf("5 : Quitter\n");

    //Chois vers les différents mode
    printf("Choisissez une option :");
    scanf("%d",&choix);

    switch(choix){
        case 1:jeux() ;
            break;
        case 2: ;
            break;
        case 3: ;
            break;
        case 4: modeAide() ;
            break;
        case 5: system("exit");
    }
}


int main() {

    //l'on choisis le nom de la console
    SetConsoleTitle("Bataille Navale");

    //l'on choissi de metre en premier la fonction menuBase
    menuBase();


    return 0;
}