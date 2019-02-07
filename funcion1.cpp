#include <iostream>

using namespace std;
int mayor(int num1,int num2){
   return(((num1>num2)?num1:num2));     
}



int main(){
    int num1, num2;
    char salida;
    
    cout << "Introduce un numero: ";
    cin >> num1;
    cout << "Introduce otro numero: ";
    cin >> num2;
    cout << "El mayor es: "<<mayor(num1,num2);
    
    cin >> salida;
    return 0;     
}
