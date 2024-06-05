#include <iostream.h>
using namespace std;
int main(){
	int n;
	cout<<"nhap n : ";cin>>n;
	float s = 0;
	if (n<=0)
	cout<<" vui long nhap lai so nguyen duong ! "<<endl;
	else
		{
			for ( int i = 1; i<= n; i++ )
		     {
	     		s = s+ 1.0/i;
	     	}
		cout<<"tong cua day la : "<<float(s)<<endl;     
		}
	return 0;
}
