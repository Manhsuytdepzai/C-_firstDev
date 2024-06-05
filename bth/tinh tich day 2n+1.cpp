#include <iostream>
#include <math.h>

using namespace std;
int main(){
	int n, i;
	int tich = 1;
	cout<<"nhap 1 so n : ";cin>>n;
	for (i=1; i<=2*n+1; i=i+2 )
	tich *=i;
	cout<<"tich cua day la tich = "<<tich<<endl;    
	return 0;
} 
