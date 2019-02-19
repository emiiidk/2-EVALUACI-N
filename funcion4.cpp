#include<iostream>
#include<string>
using namespace std;

int main(){
    int num1;
    int i,j;
    char dias_semana[7][10];
    char nombre_dia[10];
    int respuesta;
    char salir;
    int numero;
    cout<<"Vamos a introducir los dias de la semana";
    for(i=0;i<=6;i++){
          cout<<"\ndia "<<i+1<<": ";
          cin>>nombre_dia;     
          for(j=0;j<strlen(nombre_dia)+1;j++){
               dias_semana[i][j]=nombre_dia[j];
          }                 
    }
    //Mostramos la matriz
    cout<<"\nDias semana: ";
    for(i=0;i<=6;i++){
      for(j=0;dias_semana[i][j]!='\0';j++){
        cout<<dias_semana[i][j];
      }
      cout<<"\n";
    }
    cout << "\nIntroduce el numero del dia de la semana";
    cin >> numero;
    for(i=0;i<=6;i++){
      for(j=0;dias_semana[i][j]!='\0';j++){
        cout<<dias_semana[numero-1][j];
      }

}
    cin >> salir;
    return 0;
}


