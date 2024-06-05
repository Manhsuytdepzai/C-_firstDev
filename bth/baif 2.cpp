#include<iostream> 
#include<iomanip> 
#include<math.h>
using namespace std;

void nhap_mang(int a[], int n)
{	for(int i = 0; i < n; i++)
	{	cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
void tbc_chia5_du3(int a[], int n)
{
	int dem=0, s=0;
	for (int i=0; i<n; i++)
	if (i%5==0)
	{
		dem++;
		s+=i;
	}
	cout<<s/dem;
}

bool so_nguyen_to(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
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

int main(){
	int n;
	cout<<"nhap n : ";cin>>n;
	int a[n];
	cout<<"tbc cac so chia het cho 5 : ";
	tbc_chia5_du3( a, n);
	return 0;
} 
