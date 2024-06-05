#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[500];
    int n,x;
    char *b[500];
    cout<<"nhap n : ";cin>>n;
    cout<<"nhap mang : "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        b[i]=&a[i];
    }
    cout<<"danh sach da luu : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<*b[i];
        cout<<endl;
    }
    cout<<"nhap x : ";cin>>x;
    for(int i=0; i<n; i++)
    {
        //if(x==i)
        cout<<*b[x];
    }
    return 0;
}