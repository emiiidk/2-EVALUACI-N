#include <iostream>
using namespace std;

int main(){
	float num;
	int i,j;
	
	cout << "Introduce un numero: ";
	cin >> num;
	cout << "Los tres numeros siguientes al introducido son:" << endl;
	for(i=1;i<=3;i++){
		cout << num+i<< endl;}
	cout << "Los tres numeros anteriores al introducido:" <<endl;
	for(j=1;j<=3;j++){
		cout << num-j << endl;}

}
