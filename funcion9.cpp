#include <iostream>
using namespace std;

int main(){
	int horas,x;
	
	cout << "Introduzca el numero de horas semanales que ha trabajado: ";
	cin >> horas;
	if(horas>40){
		x = (horas-40)*45;
		cout << "El salario total es: " << x+1200 << ", en el que 1200 euros son de horas ordinarias(sueldo base reglamentado) y las horas extra cotizan en " << x << " euros" <<"("<<horas-40<<" horas extra).";
	}
	else{
		cout << "Al no haber trabajado horas extra su sueldo se corresponde con el sueldo base, es decir, 1200 euros.";
	}
	return 0;
}
