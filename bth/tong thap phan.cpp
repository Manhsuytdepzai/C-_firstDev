#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n, i;
	float s=0;
	do {
	cout <<" nhap n = ";cin>>n;
	if (n<1)
	   cout<<"vui long nhap lai n : ";
}
    while (n<1);
	
	for ( i=1; i<=n; i++ ) 
		 (s=s+(1.0/i));
	     cout<<"tong cua day la : "<<(float)s<<endl;

	return 0;
}
