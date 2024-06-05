#include <iostream>
#include <math.h>
using namespace std;

int tinh(int n) 
{
    int a[100], j = 0;
    do 
	{
        a[j] = n % 10;
        j++;
        n /= 10;
    } while(n > 0);
    
    int tong = 0;
    for(int i = 0; i < j; i++) 
	{
        tong += pow(a[i], j);
    }
    return tong;
}

int main()
{
    int n;
    cout << "nhap n: "; cin >>n;
    if(tinh(n) == n) 
	{
        cout << n << " la so Armstrong" << endl;
    }
    else 
	{
        cout << n << " ko phai la so Armstrong" << endl;
    }
    return 0;
}
