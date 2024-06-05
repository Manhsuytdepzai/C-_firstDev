//Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n, i;
	float s=0;
	do {
	cout <<" nhap n = ";cin>>n;
	if ( n<1)
	   cout<<"vui long nhap lai n : ";
}
    while (n<1);
	
	for ( i=1; i<=n; i++ ) 
		 (s=s+(1.0/(2*i+1)));
	     cout<<"tong cua day la : "<<(float)s<<endl;

	return 0;
}
