#include<iostream>
using namespace std;
int tong(int n )
{
	if(n==0)
	return 0;
	else
		if(n==1)
		return 1;
		else
		return tong(n-1)+n;
}

int main()
{
	int n;
	cout<<"nhap n : ";cin>>n;
	cout<<tong(n);
	return 0;
}
