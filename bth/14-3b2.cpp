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
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
}
//sap xep tang dan
void sxep(int n, int a[])
{
	int tg;
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
		if(a[i]>a[j])
		{
			tg = a[i];
			a[i]=a[j];
			a[j] = tg;
		}
	xuat(n,a);	
}
//main
int main()
{
	int n, a[99];
	cout<<"nhap so phan tu mang : ";cin>>n;
	nhap(n,a);
	xuat(n,a);
	cout<<"mang sau khi sap xep : "<<endl;
	sxep(n,a);
	return 0;
}
