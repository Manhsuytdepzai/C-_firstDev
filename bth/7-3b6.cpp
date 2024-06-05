#include<iostream>
#include<math.h>
using namespace std;
int tong(int n)
{
	if(n==1)
	return 1;
	return tong(n-1) + pow(n, 2);
}

int main()
{
	int i;
	cout<<"nhap i : ";cin>>i;
	cout<<tong(i);
	return 0;
}
