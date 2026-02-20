#include<stdio.h>

int main(){
	int nombre1,nombre2,nombre3,max;
	nombre1=45;
	nombre2=6;
	nombre3=10;

	if(nombre1>nombre2 && nombre1>nombre3){
		printf("Le maximum est: %d\n",nombre1 );
	}else if(nombre2>nombre1 && nombre2>nombre3){
		printf("Le maximum est: %d\n",nombre2);
	}else{
		printf("Le maximum est: %d\n",nombre3);
	}


	return 0;
}