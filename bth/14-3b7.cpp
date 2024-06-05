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
void xuat(int a[], int n)
{
	cout<<"mang da nhap : "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
//
void xoa(int a[], int n)
{
	int vitrixoa;
    cout<<"\nNhapp vi tri xoa phan tu: \n";
	cin>>vitrixoa;
	for (int i = n - 1; i >= vitrixoa - 1; i--)
		for (int j=vitrixoa -1; j<=n-1; j++ ) 
			a[vitrixoa-1] =a[vitrixoa++];
			n--; 
	cout<<("Mang sau khi xoa: \n");
	xuat(a,n);
}
//
int main()
{
	int n, a[100];
	cout<<"nhap so phan tu mang : ";cin>>n;
	nhap(n,a);
	xuat(a,n);
	xoa(a,n);
	return 0;
}
