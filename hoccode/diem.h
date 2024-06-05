#include "iostream"
#include "math.h"

using namespace std;

#ifndef DIEM_H
#define DIEM_H
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
};


#endif