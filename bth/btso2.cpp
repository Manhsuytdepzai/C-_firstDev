#include<iostream>
#include<math.h>
using namespace std;

int Xn(int n)
{
	if(n==0)
	return 1;
	else
	return Xn(pow(n-(n-1),2)*(n-1));
}
int main()
{
	int n;
	cout<<"nhap n : ";cin>>n;
	cout<<"tong X(n) = "<<Xn(n);
	return 0;
}
