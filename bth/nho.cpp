//3.12.Nhập một số nguyên n(0<=n<=9999) từ bàn phím. In lên màn hình giá trị đã đượcmã hóa theo quy tắc sau:
//-Các chữ số nằm trong sốnguyênnđược mã hóa thành chữ cái;-Các chữ số được mã hóa theo quy tắc sau: 
//0 -> A,1 -> B,2 -> C,3 -> D,4 -> E,5 -> F,6 -> G,7 -> H,8 -> K,9 -> L
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string a, t="";
    cout<<"nhap n : ";
    cin>>a;
    for(int i=0; i<a.size();i++)
    {
        if(a[i]=='0')
        t+='A';
        if(a[i]=='1')
        cout<<'B';
        if(a[i]=='2')
        t+='C';
        if(a[i]=='3')
        t+='D';
        if(a[i]=='4')
        t+='E';
        if(a[i]=='5')
        t+='F';
        if(a[i]=='6')
        t+='G';
        if(a[i]=='7')
        t+='H';
        if(a[i]=='8')
        t+='K';
        if(a[i]=='9')
        t+='L';
    }
    for(int i=0; i<a.size();i++)
    {
        cout<<t;
    }
    return 0;
}