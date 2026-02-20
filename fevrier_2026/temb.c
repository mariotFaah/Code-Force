#include<stdio.h>


int  main(int argc, char const *argv[])
{
	int a =5;
	int b=10;
	int temb;

	printf("La variable a = %d et b= %d avant l echange\n",a,b);

	temb=a;
	a=b;
	b=temb;
	printf("La variable a = %d et b= %d abres l echange",a,b);

	return 0;
}