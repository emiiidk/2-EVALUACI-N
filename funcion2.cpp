#include <iostream>
using namespace std;
//Cambio monetario 

float cambio(float cantidad){
    float dinero;
    dinero = cantidad*0.88;
    return(dinero);       
}

int main(){
    float cantidad;
    char salida;
    cout << "Introduzca la cantidad de euros que quiera cambiar: ";
    cin >> cantidad;    
    cout << "Su equivalente en euros es: " << cambio(cantidad);
    
    cin >> salida;
    return 0;
}
