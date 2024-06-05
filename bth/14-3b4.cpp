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
//dem
void dem(int a[], int n)
{
	int sduong = 0;
	int sam = 0;
	int s0 = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]>0)
		sduong++;
		if(a[i]<0)
		sam++;
		if(a[i]==0)
		s0++;
	}
	cout<<"so duong : "<<sduong<<endl;
	cout<<"so am : "<<sam<<endl;
	cout<<"so khong  :"<<s0<<endl;
}

int main()
{
	int n, a[100];
	cout<<"nhap n : ";cin>>n;
	nhap(a,n);
	xuat(a,n);
	dem(a,n);
	return 0;
}
