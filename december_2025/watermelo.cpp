#include<iostream>

using namespace std;

bool est_pair( int number){
			
		return number %2 == 0;
	}

int main(){
	int w;
	cin >> w;
	if(w > 2 && est_pair(w)){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
	return 0;
}