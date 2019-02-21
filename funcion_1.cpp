#include <iostream>
//Recibe 4 numeros y los multiplica

using namespace std;
int multiplicador(int num0,int num1,int num2,int num3){
    int respuesta;
    respuesta=num0*num1*num2*num3;
    return(respuesta);
    }
    
int main(){
    int num0,num1,num2,num3;
    char salida;
    int numi;
    cout << "Introduce un numero: "; cin >> num0;
    cout << "Introduce un numero: "; cin >> num1;
    cout << "Introduce un numero: "; cin >> num2;
    cout << "Introduce un numero: "; cin >> num3;
        
    cout<<"El producto de estos numeros es: "<<multiplicador(num0,num1,num2,num3);
    
    cin >> salida;
    return 0;
    }
    
    
