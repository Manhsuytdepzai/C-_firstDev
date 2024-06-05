#include<iostream>
using namespace std;
int main()
{
	int n, s;
	cout<<"nhap n = ";cin>>n;
	for(int i=1; i<=n; i++)
		s+= i*i;
	cout<<" s = "<<s<<endl;
	return 0;	
}

