#include<iostream>
using namespace std; 

int main()
{
	int m,n;
	cout<<"nhap so hang : ";cin>>m;
	cout<<"nhap so cot : ";cin>>n;
	int a[m][n];
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	cout<<"c2"<<endl;	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<"\t";
			cout<<endl;
	}
	cout<<"c3"<<endl;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			{
				if(i%2 != 0)
				{
					cout<<a[i][j]<<"\t";
					//cout<<endl;
				}
			}
	return 0;		
}
