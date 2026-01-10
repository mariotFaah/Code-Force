#include <iostream>
using namespace std;

void fiche(string nom, int age, int phone){
	//cout<<'Nom : %s, \t age: %d, phone: %d'<<nom,age,phone;
	cout<<"Nom : "<<nom<<"\t age : "<<age<<"\tphone : "<<phone<<endl;
}


int main(){
	fiche("Test",12,212233433);
	char tic_tac [3][3];
	tic_tac[0][0] = 'T';
	tic_tac[0][1] = 'X';
	tic_tac[0][2] = 'X';
	tic_tac[1][0] = 'T';
	tic_tac[1][1] = 'T';
	tic_tac[1][2] = 'X';
	tic_tac[2][0] = 'X';
	tic_tac[2][1] = 'T';
	tic_tac[2][2] = 'T';

	for(int i=0; i<3;i++){
		for (int j=0; j<3;j++){
			cout<<tic_tac[i][j]<<" | ";
		}
		cout<<endl;
		cout<<"_______________"<<endl;
	}

	for(int x = 0; x<3; x++){
		cout<<"\t|\t|"<<endl;
		cout<<"__________________________________"<<endl;
		
	}


	cout<<"======================================"<<endl;
	int test[4] = {1,21,4,2};
	for(int i=0; i<4; i++){
		cout<<test[i]<<"|";
	} 
	cout<<endl;
	return 0;
}