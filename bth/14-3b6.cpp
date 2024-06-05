#include<iostream>
using namespace std;

//nhap
void nhap(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
//xuat
void xuat(int a[], int n)
{
	cout<<"mang da nhap : "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
}
//
void tongle(int a[], int n)
{
	int s=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]%2 != 0)
		s += a[i];
	}
	cout<<"tong cacso le la : "<<s<<endl;
}
//
int main()
{
	int n, a[100];
	cout<<"nhap so phan tu mang : ";cin>>n;
	nhap(a,n);
	xuat(a,n);
	tongle(a,n);
	return 0;
}
