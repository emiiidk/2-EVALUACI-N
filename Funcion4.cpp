#include<iostream>
using namespace std;

int main(){
	char meses[12][20]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	int mes;
	
	cout << "Introduce un numero y te dare el mes correspondiente al mismo: ";
	cin >> mes;
	cout << "El mes correspondiente es: "<< meses[mes-1];
	
	
	return 0;
}	
