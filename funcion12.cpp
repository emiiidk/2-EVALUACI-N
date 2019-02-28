#include <iostream>
using namespace std;

int suma(int num){
	int sumador;
	sumador = 0;
	while(num>0){
		sumador = sumador + num%10;
		num = num/10;
	}
	return (sumador);
}

int main (){
	int num;
	
	cout << "Dame un numero entero: ";
	cin >> num;
	cout << "La suma de las cifras del numero es: " << suma(num);
	
	return 0;

}
