#include <iostream>
#include <string>
using namespace std;

int main(){
	float x,y,z,w;
	string tipo;
	y=0.16;
	z=0.07;
	w=0.04;
	 

	cout << "Que IVA quieres calcular (general,reducido o superreducido): ";
	cin >> tipo;
	cout << "Que cantidad quieres calcular (numero): ";
	cin >> x;
	
	if (tipo== "general"){
		cout << "El precio final es: " << y*x+x;
	}
	else if (tipo== "reducido"){
		cout << "El precio final es: " << z*x+x;
	}
	else if (tipo== "superreducido"){
		cout << "El precio final es: " << w*x+x;
	}

	return 0;

}
