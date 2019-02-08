#include <stdio.h>
#include <stdlib.h>
typedef struct Cardi
{
    char nom[10];
    char prenom[10];
    char CodePostal[10];
    char Adresse[10];
    char Ville[10];
}Carde;

FILE* fopen(const char* Cardi, const char* Ouverture);



int main(){

    int Choix=0;
    char str;
    Carde identite;

    FILE* fichier = NULL;


    system("cls");
    fichier = fopen("Carde.txt","W+");

        printf("Entrez le nom\n");
        scanf("%s",&identite.nom);
        fprintf(fichier, "\nNom :%s ",identite.nom);
        getc(fichier);

        printf("Entrez le prenom\n");
        scanf("%s",&identite.prenom);
        fprintf(fichier, "\nPrenom :%s ",identite.prenom);

        printf("Entrez la ville\n");
        scanf("%s",&identite.Ville);
        fprintf(fichier, "\nVille :%s ",identite.Ville);

        printf("Entrez le code postale\n");
        scanf("%s",&identite.CodePostal);
        fprintf(fichier, "\nLe code postale :%s ",identite.CodePostal);

        printf("Entrez l'adresse\n");
        scanf("%s",&identite.Adresse);
        fprintf(fichier, "\nAdresse :%s ",identite.Adresse);



    return 0;
}
