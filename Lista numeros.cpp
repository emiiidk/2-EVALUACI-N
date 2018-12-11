//Este programa sirve para leer 10 numeros
#include <iostream>
using namespace std;
main (){
     int num [10];
     int i;
     float x; x = 0;                                     //Le indico que x es un float para que me de los decimales en la media
     char mostrador;
     int n_numeros;
     int mayor; 
    
     
     cout << "Cuantos numeros quieres introducir: ";              //Pregunto la cantidad de nuemeros, me sirve para definir luego el for 
     cin >> n_numeros;
    
     for (i=0 ; i<=n_numeros-1 ; i++ ){                           //Muestra todos los numeros
         cout << "Dime un numero: ";
         cin >> num[i];
         cout << "\n";
         }
     
     for (i=0 ; i<=n_numeros-1 ; i++ ){                           //Enseño mis numeros
         cout << "El numero "; cout << i+1; cout << " es: "; cout << num [i];
         cout << "\n";
         }
     
     for (i=0 ; i<=n_numeros-1 ; i++){                            //Suma de todos los numeros
         x = x + num [i]; }
         cout << "La suma de los numeros es: "; cout << x;
         cout << "\n";
         
         x = x/n_numeros;                                        //Media numeros 
         cout << "La media de los numeros es: "; cout << x; cout << "\n";
     
     mayor = num[0];    
     for (i=0 ; i<n_numeros ; i++){
         if(num[i] > mayor){
             mayor = num [i];}
         }
     cout << "El numero mayor es: "; cout << mayor;
     
     for (i=0 ; i<n_numeros ; i++){
         if(num[i] < mayor){
             mayor = num [i];}
             }
     cout << "El numero menor es: "; cout << mayor;
     cin >> mostrador;
     return 0;
}
