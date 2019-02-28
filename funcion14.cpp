#include <iostream>
using namespace std;

int piramide(int h){
	int i,j,k;
	
	for (i=0;i<h;i++){
		for (j=0;j<h-i;j++){
			cout << " ";}
			for (k=0;k<=i*2;k++){
				cout << "*";
			}
	cout << "\n";
	}

}

int main(){
	int h;
	
	cout << "Introduzca el valor de la altura de la piramide: ";
	cin >> h;
	piramide(h);
	
	return 0;
}
