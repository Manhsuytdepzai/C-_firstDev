#include <iostream>
using namespace std;
int main (){
	int n, i;
	int s=0;
	cout<<"nhap n= ";cin>>n;
	for (i=1; i<=n; i++)
	     s =s+ i^(2);
		 cout<<"tong cua day la : "<<s<<endl;
		  
	return 0;
} 
