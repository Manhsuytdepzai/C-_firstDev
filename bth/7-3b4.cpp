#include<iostream>
#include<math.h>
using namespace std;
int luythua(int n)
{
	if(n==1)
	return 1;
	return luythua(n-1) * pow(n, n);
}

int main()
{
	int i;
	cout<<"nhap i : ";cin>>i;
	//for(int i= 1; i<=n; i++)
	cout<<luythua(i);
	return 0;
}
