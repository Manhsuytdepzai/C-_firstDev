#include <iostream>
using namespace std;
long factorial(int a)
{	int fac = 1;			//fac la bien cuc bo
	for (int i = 1; i<=a; i++)
		fac = fac * i;
	return fac;			
}

int main()
{ 	int n;
	cout<<"Nhap so nguyen n = "; cin>>n;
	
	cout<<n<<"! = "<<factorial(n)<<endl;
	return 0;
}
