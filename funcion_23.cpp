#include <iostream>
using namespace std;
main (){
	int num[10]={1,2,3,4,5,6,7,8,9,10};
	int i,x,y;
	
	x=0;
	y=1;
	for (i=0;i<9;i++){
		x=x+num[i];
		y=y*num[i];
	}
	cout << x << "\n"<< y;
	
	
	return 0;
	
}




