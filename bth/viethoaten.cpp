#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char ten[100];
    cout<<"nhap ten : ";
    cin.getline(ten, 100);
    /*for(int i = 0; i<strlen(ten); i++)
        {
            if(ten[i]>='a' && ten[i<='z'])
               ten[i]=ten[i]-32;
        }
     for(int i = 0; i<strlen(ten); i++)
        cout<<ten[i];*/
     for(int i = 0; i< ten[i] != '\0'; i++)
        {
            if(ten[i]>='a' && ten[i<='z'])
               ten[i]=ten[i]-32;
        }
     for(int i = 0; i< ten[i] != '\0'; i++)
        cout<<ten[i];
     return 0;       
}