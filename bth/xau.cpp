#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100];
    int dem=0;
    cout<<"nhap chuoi :";
    cin.getline(a,100);
    for(int i=0; a[i] != '\0';i++)
    {
        if(a[i]==' ')
        dem++;
    }
    cout<<dem;
    return 0;
}