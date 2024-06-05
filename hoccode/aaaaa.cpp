#include<iostream>
#include <math.h>

using namespace std;

class diem{
    private:
        double x,y;
    public:
        diem(double x = 0,  double y = 0);
        friend istream& operator >> (istream& is, diem& u);
        friend ostream& operator << (ostream& os, diem u);
        double kc(diem u);
        double dien_tich(diem u, diem v);
        double chu_vi(diem u, diem v);
        diem(double x, double y){
            this->x = x;
            this->y = y;
        } 
};



istream& operator >> (istream& is, diem& u){
    cout<<"nhap x : ";is >> u.x;
    cout<<"nhap y : ";is >> u.y;
    return is;
}

ostream& operator << (ostream& os, diem u){
    os << "(" << u.x << ", " << u.y << ")"<<endl;
    return os;
}

double diem::kc(diem u){
    double kq = sqrt(pow(this->x - u.x, 2) + pow(this-> y - u.y,2));
    return kq; 
}

double diem::chu_vi(diem u, diem v){
    double a = this->kc(u);
    double b = u.kc(v);
    double c = v.kc(*this);
    return a+b+c;
}

double diem::dien_tich(diem u, diem v){
    double p = this->chu_vi(u,v)/2.0;
    double a = this->kc(u);
    double b = u.kc(v);
    double c = v.kc(*this);
    return sqrt(p* (p-a)* (p-b)* (p-c));
}
int main(){
    diem p1, p2, p3;
    cout<<"nhap p : ";
    cin>>p1>>p2>>p3;
    cout<<p1<<p2<<p3;
    cout<<"chu vi : "<<p1.chu_vi(p2, p3)<<endl;
    cout<<" dien tich : "<<p1.dien_tich(p2,p3)<<endl;
    return 0;
}