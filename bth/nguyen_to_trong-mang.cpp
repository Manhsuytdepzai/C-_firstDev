#include <iostream>
#include <math.h>
using namespace std;

void Nhap_Mang(int a[], int n)
{
	cout<<n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];cout<<"\t";
    }
}

bool so_nguyen_to(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}


void viet_so_nguyen_to(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (so_nguyen_to(a[i]))
        {
            cout<< a[i]<<"\t";
        }
    }
}

int main()
{
	int n;
	int a[1000];
	cout<<"nhap so n phan tu: ";
	cin>> n;
	
	Nhap_Mang(a, n);
	
	int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (so_nguyen_to(a[i]))
        {
            dem++;
        }
    }
    
    cout<<"\nSo luong so nguyen to la "<< dem;
    if(dem > 0){
        cout<<"\nDanh sach so nguyen to: ";
        viet_so_nguyen_to(a, n);
    }
}

