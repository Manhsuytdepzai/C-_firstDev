#include<iostream>
#include<stdio.h>
#include<conio.h>
 
 
using namespace std;
 
int tong_uoc(int n)
{
    int s=0;
    for (int i=1;i<n;i++)
        if (n%i==0)
            s = s + i;
    return s;
}
 
bool ktra_shn(int a, int b)
{
    if (tong_uoc(a)==b && tong_uoc(b)==a)
        return true;
    return false;
}
 
void XuatSoHN(int p, int q)
{
    for (int i=p;i<q;i++)
        for (int j=i+1;j<=q;j++)
            if (ktra_shn(i,j)==true)
                cout<<"("<<i<<","<<j<<")\n";
}
 
int main()
{
    int p=100, q=5000;
    XuatSoHN(p,q);
    return 0;
}
