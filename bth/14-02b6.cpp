#include<iostream>
using namespace std;
int main()
{
	int n;
	float s=0;
	cout<<"nhap n = ";cin>>n;
	if(n==0)
	{
		cout<<"n khong hop le !"<<endl;
		cout<<"nhap lai n : ";cin>>n;
	}
	for(int i=1; i<=n; i++)
		s= s+(1.0/i);
	cout<<" s = "<<float(s)<<endl;
	return 0;	
}
