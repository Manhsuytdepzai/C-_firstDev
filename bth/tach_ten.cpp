#include<iostream>
#include<string.h>
using namespace std;

void timkiem(char s[100], char x)
{
    cout<<"nhap x : ";
    cin>>x;
    cout<<"vi tri : ";
    for(int i=0; s[i] != '\0'; i++)
    {
        if(x == s[i])
        cout<<"\t"<<i;
    }
}
//in hoa ten
void hoa_ten(char s[100])
{
    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
    }
    for(int i=0; s[i] != '\0'; i++)
    cout<<s[i];
}
// xóa dáu cách
void xoadaucach(char s[100])
{
    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i] != ' ')
        cout<<s[i];
    }
}   
//tach ho
void tach_ho(char s[100])
{
    for(int i=0; s[i] == ' '; i++)
        cout<<s[i];
}
int main()
{
    char s[100], x ;
    cout<<"nhap ten : ";
    cin.getline(s,100);
    timkiem(s,x);
    cout<<endl;
    hoa_ten(s);
    cout<<endl;
    xoadaucach(s);
    cout<<endl;
    tach_ho(s);
    return 0;
}