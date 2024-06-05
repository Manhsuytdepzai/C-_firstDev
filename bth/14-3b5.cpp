#include<iostream>
using namespace std;

//nhap
void nhap(int n, int a[])
{
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
//xuat
void xuat(int n, int a[])
{
	cout<<"mang da nhap : "<<endl;
	for(int i=n-1; i>=0; i--)
	{
		cout<<a[i]<<endl;
	}
}
//
int main()
{
	int n, a[100];
	cout<<"nhap so phan tu mang : ";cin>>n;
	nhap(n,a);
	xuat(n,a);
	return 0;
}
