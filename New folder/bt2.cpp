#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"nhap so hang n:";
	cin>>n;
	cout<<"nhap so cot m:";
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(i==0||i==n-1)
		{
			for(int j=0;j<m;j++)
			{
				cout<<"*";
			
			}
			cout<<"\n";
		}
		else
		{
			for(int h=0;h<m;h++)
			{
					cout<<"*";
			}
			cout<<"\n";
		}
		
	}
	return 0;

}
