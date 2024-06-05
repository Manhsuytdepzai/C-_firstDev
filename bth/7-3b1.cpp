#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"nhap vao so n : ";cin>>n;
	if(n==0)
		cout<<0<<"! = 1"<<endl;
	else
	{
		int s=1;
		for(int i = 1; i<=n-1; i++)
		{
			s*=i;
		}
		cout<<n<<"! = "<<n*s<<endl;
	}
	return 0;	
} 
