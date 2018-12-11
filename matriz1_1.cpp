//Matrices
#include <iostream>
using namespace std;
main() {
       int tablero [5][5];         
       int fila;
       int columna;                                              //Asi se define una matriz (5 filas y 5 columnas)
       int relleno;
       char salida;
       for (fila=0 ; fila <= 4; fila++){                           //Bucle que recorre las filas (siempre se usan 2 bucles para recorrer la matriz)
           if (fila%2 == 0){
                      relleno = 0;
           }
           else{
                      relleno = 1;
           }
                      
           for (columna=0; columna <= 4; columna++){               // Bucle que recorre las columnas
               tablero [fila][columna] = relleno; 
            	cout << tablero [fila][columna];					//Muestra las filas y columnas
           }
         cout << "\n";												//Espacios
       }
       cin >> salida;
       return 0;
         
       
       
       
}
