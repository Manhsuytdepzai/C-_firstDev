#include<iostream>
#include<string.h>
using namespace std;
 int main()
 {
     char ten[100];
     cout<<" nhap ten : ";
     cin.getline(ten,100);
     /*Dao nguoc xau
     cout<<"dao nguoc : ";
     cout<<strrev(ten);*/
    /*demkitu
    int len = strlen(ten);
    cout<<len;*/
    /*dem so tu
    int dem = 1;
    for(int i= 0; ten[i] != '\0'; i++)
    {
        if(ten[i] == ' ')
        dem++;
    }
    cout<<"xau co "<<dem<<" tu "<<endl;*/
    /*dem ki tu a,b
    int dem=0;
    for(int i= 0; ten[i] != '\0'; i++)
        {
            if(ten[i] == 'a' || ten[i] == 'b')
            dem++;
        }
    cout<<"so ki tu : "<<dem;*/
    //xau doi xung
    if (strcmp(ten, strrev(ten)))
        {
            cout<<"xau doi xung "<<endl;
        }
    else
        {
            cout<<"xau khong doi xung ";
        }
     return 0;
 }