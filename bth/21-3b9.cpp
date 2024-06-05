#include<iostream>
#include<math.h>
using namespace std; 

void nhap(int a[][100], int n)
{
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
}
void xuat(int a[][100], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<"\t";
			cout<<endl;
	}
} 
void ktrsht(int a[][100], int n)
{
	int s=0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) 
		{
			for(int k=0; k<=a[i][j]/2; k++)
			{
				s+=k;
				if(s==a[i][j])
				cout<<a[i][j]<<" ";
			}
		}
}
void sohaonthien(int a[][100], int n)
{
	int s = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) 
			if(i +j == n -1)
				s = s + a[i][n-i-1];
	cout << "\nTong cac phan tu tren duong cheo phu la: " << s << endl;
}

int main()
{
	int m,n;
	cout<<"nhap so hang : ";cin>>m;
	cout<<"nhap so cot : ";cin>>n;
	int a[100][100];
	nhap(a,n);
	xuat(a,n);
	sohaonthien(a,n);
	return 0;
}

