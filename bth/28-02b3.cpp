#include<iostream>
#include<math.h>
using namespace std;

int luythua(int x, int y)
{
	unsigned int p;
	p = pow(x,y);
	return p;
}

int main()
{
	int a, n;
	cout<<"nhap a = ";cin>>a;
	cout<<"nhap n = ";cin>>n;
	cout<<luythua(a,n)<<endl;
	return 0;
}
