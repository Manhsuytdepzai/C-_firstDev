#include<iostream>
#include<math.h>
using namespace std;
int tich(int n)
{
	if(n==1)
	return 1;
	else 
	return tich(2*n-1)* (2*n-3);
}

int main()
{
	int i;
	cout<<"nhap i : ";cin>>i;
	cout<<tich(i);
	return 0;
}
