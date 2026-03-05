#include <bits/stdc++.h>
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	string requete = "ping -c 4 8.8.8.8";
	system(requete.c_str());
	cout<<"Les requetes sont executees avec succes\n";

	return 0;
}