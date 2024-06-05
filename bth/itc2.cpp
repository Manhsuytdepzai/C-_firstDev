#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[1000];
    cout<<"nhap mang : ";
    cin.getline(a,1000);
    for(int i=0; i < strlen(a); i++)
    {
        for(int j=i+1; j < strlen(a);j++)
        if(a[i]>=a[j++] || a[i]<=a[j++])
        cout<<"true";
        else
        cout<<"false";
    }
    return 0;
}