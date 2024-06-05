#include<iostream>
#include<math.h>
using namespace std; 

void nhap(int a[][100], int m, int n)
{
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
}
void xuat(int a[][100], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<"\t";
			cout<<endl;
	}
} 
void chinhphuong(int a[][100], int m, int n)
{
    float x,y;
    for (int i=0; i<m; i++)
    	for(int j=0; j<n; j++)
	    {
	        x=sqrt(a[i][j]);
	        y=(int)x;
	        if (x==y) 
			cout<<a[i][j]<<" ";
	    }
}
void vitriam(int a[][100], int m, int n)
{
	for (int i=0; i<m; i++)
    	for(int j=0; j<n; j++)
    	{
    		if(a[i][j]<0)
    		cout<<"\nvi tri am dau tien la : "<<"a["<<i<<"]["<<j<<"]";
    		break;
		}
}
void demphantu(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i=0; i<10; i++)
    	for(int j=0; j<100; j++)
    	if(a[i][j]>0 || a[i][j]<0)
    	{
    		dem++;
		}
	cout<<"\nso luong phan tu co gia tri la : "<<dem;	
}
/*void sxep(int a[][100],int m, int n)
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
}*/
void sohaonthien(int a[][100], int m, int n)
{
	int s = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) 
			if(i + j == n -1 )
				s = s + a[i][n-i-1];
	cout << "\nTong cac phan tu tren duong cheo phu la: " << s << endl;
}

int main()
{
	int m,n;
	cout<<"nhap so hang : ";cin>>m;
	cout<<"nhap so cot : ";cin>>n;
	int a[100][100];
	nhap(a,m,n);
	xuat(a,m,n);
	cout<<"so chinh phuong : ";chinhphuong(a,m,n);
	vitriam(a,m,n);
	demphantu(a,m,n);
	return 0;
}

