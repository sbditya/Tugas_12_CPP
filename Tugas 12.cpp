#include <iostream>

using namespace std; 

int main(){
	int x[3] = {1,5,4};
	int y[3] = {3,2,5};
	
	for(int i = 0; i<=2;i++){
		cout<<"Array X "<<i<<" = "<<x[i]<<endl;
		}
		
		for(int i = 0; i<=2;i++){
			cout<<"Array Y "<<i<<" = "<<y[i]<<endl;	
		}	
		
		for(int i = 0; i<=2;i++){
				cout<<"Array Penjumlahan "<<i<<" = "<<x[i]+y[i]<<endl;
		}
		
		
	}

