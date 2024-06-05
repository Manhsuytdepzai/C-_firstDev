#include<iostream>
using namespace std;
void nhap(int a[10][10], int n)
{
    for(int i = 0; i < n; i++)
  		for(int j = 0;  j < n; j++)
  		{
			cout<<"a[ "<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
}
void xuat(int a[10][10], int n)
{
    cout<<"Ma tran da nhap la: "<<endl;
	for(int i = 0; i < n; i++)
	{  
        for(int j = 0; j < n; j++)
			cout<<a[i][j]<<"\t";
    	cout<<endl;
	}
}
void tbc(int a[10][10], int n)
{
    int dem=0;
    float tong=0, tbc=0;
    for(int i = 0; i < n; i++)
  		for(int j = 0;  j < n; j++)
        {
            if(a[i][j] %7 == 4 )
            tong += a[i][j];
            dem +=1;
        }
    cout<<"trung binh cong cac so chia het cho 7 du 4 la : "<<tong/dem<<endl;
}
int mincheophu(int a[10][10], int n)
{
	int i, j, min;
	min = a[0][0];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(min>a[i][j] && i==n-j-1)
				min = a[i][j];
	return min;
}
int main()
{
	int n; 
    cin>>n;
    int a[n][n];
    nhap(a,n);
    xuat(a,n);
    tbc(a,n);
    mincheophu(a,n);
   return 0;
} 