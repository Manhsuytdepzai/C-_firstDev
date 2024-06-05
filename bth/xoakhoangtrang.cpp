#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cout<<"nhap chuoi : ";
    getline(cin,s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == ' ')
            continue;
            cout<<s[i];
    }
    return 0;
}