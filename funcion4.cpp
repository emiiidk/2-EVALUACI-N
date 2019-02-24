#include<iostream>
#include <conio.h> 
#include <string.h> 
using namespace std;

int main(){
	char base_datos [7][10];
	char dia_semana [10];
	int i; int j;
	char salida;
	int midia;
	
	for (i=0;i<=6;i++){
		cout << "Dia " << i+1 << ": ";
		cin >> dia_semana;
		for (j=0;j<strlen(dia_semana)+1;j++){
			base_datos [i][j] = dia_semana[j];
		}
	}	
	for (i=0;i<=6;i++){
			for (j=0;j<strlen(dia_semana)+1;j++){
				cout << base_datos [i][j];
		}
	cout << "\n";
}

	cin >> midia;
	cout << base_datos [midia-1];
	
	cin >> salida;
	return 0;
	
	
	
	
}
