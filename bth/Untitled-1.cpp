#include<iostream>
using namespace std;
inline int dtich(int a, int b)
{
    return a*b;
}
int main(){
    int x,y;
    cout<<"nhap x : ";cin>>x;
    cout<<"nhap y: ";cin>>y;
    cout<<"dien tich : "<<dtich(x,y);
}