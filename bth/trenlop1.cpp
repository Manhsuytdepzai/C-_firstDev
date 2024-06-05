#include<iostream>
using namespace std;

int main()
{
    int a[50],n;
    int *b[50];
    cout<<"nhap n : ";cin>>n;
    cout<<"nhap mang : ";
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        b[i]=&a[i];
    }
    cout<<"mang da luu : ";
    for(int i=0; i<n; i++)
    {
        cout<<*b[i];
    }
    return 0;
}