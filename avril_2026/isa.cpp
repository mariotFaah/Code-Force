#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	/* ****************************************************************
	 * Prenez un entier en entrer et retourne l equivaut en malagache *
	 ******************************************************************/
	int nombre;
	string isa[] = {"aotra","iray","roa","telo","efatra","dimy","enina","fito","valo","sivy","folo"};
	cout<<"Ampidiro ny isa tinao : ";
	cin>> nombre;
	if(nombre<=10){
		cout<<isa[nombre];
	}else if(nombre <= 20){

		cout<<isa[nombre-10]<<" ambifolo";
	}else if(nombre <= 30){
		cout<<isa[nombre-20]<<" amby roapolo";
	}else if(nombre <= 40){
		cout<<isa[nombre-30]<<"  amby telopolo";
	}


	cout<<"\n";


	return 0;
}
