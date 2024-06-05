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
//search
void Search(int a[], int n)
{	
	int vitri=0;
	int min = a[0];
	for(int i = 0; i< n; i++)
	{
		if(a[i]<min)
		{
			min = a[i];
			vitri=i+1;
		}
	}
	cout<<"min : "<<min<<endl;
	cout<<"vi tri min : "<<vitri<<endl;			
}
int main()
{
	int n, a[100];
	cout<<"nhap n : ";cin>>n;
	nhap(a,n);
	xuat(a,n);
	Search(a,n);
	return 0;
}
