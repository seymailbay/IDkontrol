#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(){
	char kad[100]= "seyma";
	char kad1[100];
	cout << "kullanici adini giriniz: ";
	cin >> 	kad1;
	if(strcmp(kad1,kad) == 0){
		cout << " kullanici adiniz dogru" << endl;
	}
	else{
		cout << "kullanici adini yanlis girdiniz " << endl;
	}
}
