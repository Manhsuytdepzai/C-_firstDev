#include<iostream>
using namespace std; 

int main()
{
	int m,n;
	cout<<"nhap so hang : ";cin>>n;
	cout<<"nhap so cot : ";cin>>m;
	int a[n][m];
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	cout<<"c2"<<endl;	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			cout<<a[i][j]<<"\t";
			cout<<endl;
	}
	cout<<"c3"<<endl;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
		if(a[i][j] %2 == 0)
		break;
			cout<<"mang k phai mang toan le"<<endl;	
	return 0;		
}
