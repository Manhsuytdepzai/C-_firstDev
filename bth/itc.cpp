#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    /*for(int i = 0; i != ' '; i++)
    {
        
        cout<<s<<endl;
        break;
    }*/
    for(int i = s.size(); i != ' '; i--)
    {
        cout<<s;
        break;
    }
    return 0;
}