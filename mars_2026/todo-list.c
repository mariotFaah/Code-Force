#include<stdio.h>
#include<string.h>
/*
	Creation de todo liste ou tache a faire
	consiste a : ajouter, modifier, lire et supprimer un tache
*/


void afficher(long tache[], int taille){
	for(int i=0; i<taille;i++){
		printf("%d- %d \n", i+1, tache[i]);
	}
}

/*void modifier(long tache[],int index){
	tache[index]= scanf("%d",&tache[index]);
}*/


/*
void ajouter(){

}



void supprimer(){

}
*/



int main(){
	printf("==========================================\n");
	printf("TODO LIST\n");
	printf("choix :\n 1.Afficher tout\n 2.Modifier une tache\n 3.Modifier une tache\n 4.supprimer une tache\n 0.quitter");
	printf("==========================================\n");

	long tache[10]={100000001210,22222222,22123333333,333112,3111,113223,123123,27777,444444,777};
	printf(" taille de tableau en octet ==> %d\n ", sizeof(tache));
	printf("taille d'un element du tableau ==> %d\n", sizeof(tache[0]));
	int taille=sizeof(tache)/sizeof(tache[0]);
	printf("taille du tableau ==> %d \n", taille);


	int choix;
	scanf("%d",&choix);
	
	do{if(choix==1){
		afficher(tache, taille);
		}else if(choix==2){
			tache[3]=999999991;
			printf("\n====>%d \n", tache[3]);
			afficher(tache, taille);
		}else{
			printf("Entrer une choix valide");
		}
	} while(choix != 0);
	

	return 0;
}