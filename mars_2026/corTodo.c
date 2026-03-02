#include <stdio.h>
#include <string.h>

void afficher(long tache[], int taille) {
    printf("\n=== VOS TACHES ===\n");
    for(int i = 0; i < taille; i++) {
        if(tache[i] != 0) {  // Only show non-empty tasks
            printf("%d. %ld\n", i+1, tache[i]);
        }
    }
    printf("==================\n");
}

void modifier(long tache[], int taille) {
    int index;
    printf("Entrez le numero de la tache a modifier (1-%d): ", taille);
    scanf("%d", &index);
    
    if(index >= 1 && index <= taille) {
        printf("Entrez la nouvelle valeur: ");
        scanf("%ld", &tache[index-1]);
        printf("Tache modifiee avec succes!\n");
    } else {
        printf("Index invalide!\n");
    }
}

void ajouter(long tache[], int taille) {
    for(int i = 0; i < taille; i++) {
        if(tache[i] == 0) {
            printf("Entrez la nouvelle tache: ");
            scanf("%ld", &tache[i]);
            printf("Tache ajoutee avec succes!\n");
            return;
        }
    }
    printf("La liste est pleine!\n");
}

void supprimer(long tache[], int taille) {
    int index;
    printf("Entrez le numero de la tache a supprimer (1-%d): ", taille);
    scanf("%d", &index);
    
    if(index >= 1 && index <= taille) {
        tache[index-1] = 0;
        printf("Tache supprimee avec succes!\n");
    } else {
        printf("Index invalide!\n");
    }
}

int main() {
    long tache[10] = {100000001210, 22222222, 22123333333, 333112, 3111, 
                      113223, 123123, 27777, 444444, 777};
    int taille = sizeof(tache) / sizeof(tache[0]);
    int choix;
    
    do {
        printf("\n==========================================\n");
        printf("TODO LIST\n");
        printf("==========================================\n");
        printf("Choix :\n");
        printf("1. Afficher toutes les taches\n");
        printf("2. Modifier une tache\n");
        printf("3. Ajouter une tache\n");
        printf("4. Supprimer une tache\n");
        printf("0. Quitter\n");
        printf("==========================================\n");
        printf("Votre choix: ");
        
        scanf("%d", &choix);
        
        switch(choix) {
            case 1:
                afficher(tache, taille);
                break;
            case 2:
                modifier(tache, taille);
                break;
            case 3:
                ajouter(tache, taille);
                break;
            case 4:
                supprimer(tache, taille);
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide! Veuillez entrer un nombre entre 0 et 4.\n");
        }
    } while(choix != 0);
    
    return 0;
}