#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string x,s;
    cout<<"nhap xau 1: ";
    getline(cin,x);
    cout<<"nhap xau 2: ";
    getline(cin,s);
    strcat(x,s)<<endl;
    puts(x);
    return 0;
}