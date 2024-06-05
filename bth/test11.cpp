#include<iostream>
using namespace std;

int main()
{
    int a[100],n;
    int *b;
    cout<<"nhap so phan tu : ";cin>>n;
    cout<<"nhap mang : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    for(int i=0; i<100; i++)
    {
        b[i]=&a[i];
    }
    cout<<"mang da luu : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<*b[i];
        cout<<endl;
    }
    return 0;
}