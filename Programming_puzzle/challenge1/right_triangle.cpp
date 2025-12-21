#include<iostream>
#include<string.h>
using namespace std;

int main(){
	/*for(int i = 0; i<=5; i--){
		cout<< '#'* i<<std::endl;

	}*/
	int i = 5;
	char hash='#';
	while(i>0){
		std::cout<<string(i, hash) <<std::endl;
		i = i-1;
	}
	//cout<< "# * 5" <<std::endl;
	return 0;
}