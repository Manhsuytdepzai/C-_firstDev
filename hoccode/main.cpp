#include "diem.h"


int main(){
    diem p1, p2, p3;
    cout<<"nhap p : ";
    cin>>p1>>p2>>p3;
    cout<<p1<<p2<<p3;
    cout<<"chu vi : "<<p1.chu_vi(p2, p3)<<endl;
    cout<<" dien tich : "<<p1.dien_tich(p2,p3)<<endl;
    return 0;
}