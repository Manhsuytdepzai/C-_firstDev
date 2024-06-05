#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, i, s;
	cout<<"nhap n : ";cin>>n;
	s=0;
	for ( i=1; i<=n; i++ )
	     s=s+(i*i);
	     cout<<" tong cua day la : "<<s<<endl;
	     return 0;
} 
