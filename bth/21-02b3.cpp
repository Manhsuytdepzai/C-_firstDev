#include<iostream>
using namespace std;
int main()
{
	int n, i=0;
	cout<<" nhap n : ";cin>>n;
	do
	{
		i++;
		for(int j=1;j<=i;j++)
		cout<<j;
		cout<<endl;
		//cout<<i<<endl;
	}while(i<n);
	return 0;
}
