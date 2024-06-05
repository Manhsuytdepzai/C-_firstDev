#include<iostream>
using namespace std;
int main()
{
	int n, p= 1;
	cout<<"nhap n = ";cin>>n;
	for(int i=1; i<=n; i++)
		p*=i;
	cout<<n<<" ! = "<<p<<endl;
	return 0;	
} 
