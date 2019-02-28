#include <iostream>
using namespace std;

int main(){
	float num1,num2;
	char letra;
	float x;
	
	cout << "Introduce un numero entero: ";
	cin >> num1;
	cout << "Introduce otro numero entero: ";
	cin >> num2;
	while(true){
		if (num2!=0){
			break;}
		else{
			cout << "Introduce un numero distinto de 0 para que el programa no de error: ";
			cin >> num2;}
	}
	
	
	cout << "Dime la operacion que quieres que haga con esos dos numeros(S de suma, R de resta, M de multiplicacion y D de division): ";
	cin >> letra;	
	
	while(true){
		if (letra=='S'){
			x=num1+num2;
			cout << "El resultado de la operacion es: " << x;
			break;}
		else if(letra=='R'){
			x=num1-num2;
			cout << "El resultado de la operacion es: " << x;
			break;}
		else if(letra=='M'){
			x=num1*num2;
			cout << "El resultado de la operacion es: " << x;
			break;}
		else if(letra=='D'){
			x=num1/num2;
			cout << "El resultado de la operacion es: " << x;
			break;}
		else{
			cout << "Introduce una letra valida: ";
			cin >> letra;
		}
	}
	
	
	return 0;
}
