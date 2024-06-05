#include <iostream>

using namespace std;

class Rectangle {
public:
    double dai, rong;
    void nhap(){
        cout<<"nhap chieu dai: ";
        cin>>dai;
        cout<<"nhap chieu rong: ";
        cin>>rong;
    }

    double chuvi()
    {
        return (dai+rong)*2;
    }
    double dientich()
    {
        return dai*rong;
    }
    void kq()
    {
        cout<<"chu vi : "<<chuvi()<<endl;
        cout<<"dien tich : "<<dientich();
    }
};

int main() {
    Rectangle r1;
    r1.nhap();
    r1.kq();
    return 0;
}