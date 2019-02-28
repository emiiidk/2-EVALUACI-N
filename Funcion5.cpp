#include<iostream>
using namespace std;

int main(){
	char meses[12][20]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	int numero_mes,dia_mes,mes,year;
	
	cout << "Numero del dia del mes: ";
	cin >> dia_mes;
	cout << "\nNumero del mes: ";
	cin >> mes;
	cout << "\nNumero del year: ";
	cin >> year;
	
	cout << "\nNos encontramos en el " << dia_mes << " de " << meses[mes-1] << " de " << year;

	return 0;
}	
