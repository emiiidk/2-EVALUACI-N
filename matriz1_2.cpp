//Matrices
#include <iostream>
using namespace std;
main() {
       int tablero [5][5];         
       int fila;
       int columna;                                             
       int relleno;
       char salida;
       for (fila=0 ; fila <= 4; fila++){ 
	   		for (columna=0; columna <=4; columna++){
	   			if (columna%2 == 0){
	   				relleno = 0;
	   				tablero [fila][columna] = relleno;
	   	
				   }
				else{
					relleno = 1;
					tablero [fila][columna] = relleno;
				
				}
	   			cout << tablero [fila][columna];
	   		
	   		
			   }         
	    		cout << "\n";
   }
	   cin >> salida;
       return 0;
}
