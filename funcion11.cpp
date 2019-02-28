#include <iostream>                           
#include <conio.h> 
#include <string.h> 
using namespace std;

string comparador(int numero,char palabra[20]){
	int longitud;
	string x;
	longitud = strlen(palabra);
	
	if (numero==longitud){
		x = "La longitud de ambos es la misma.";}
	else{
		x = "La longitud de ambos es distinta.";}
	return (x);
}

int main(){
	int numero;
	char palabra[20];
	
	cout << "Dime un numero entero: ";
	cin >> numero;
	cout << "Dime una palabra: ";
	cin >> palabra;
	
	cout << comparador(numero,palabra);
	
	
	return 0;
	
}
