#include<iostream>
using namespace std;
inline int tong(int a, int b)
{
    return a+b;
}
class phanso
{
    private:
        float tuso;
        float mauso;
    public:
    void ps()
    {
        tuso = 1;
        mauso = 1;
    }
    void nhap()
    {
        cout << "nhap tu so: "; cin >> tuso;
        cout << "nhap mau so: "; cin >> mauso;
    }
    void in()
    {
        cout<<"phan so da nhap la : "<<tuso<<"/"<<mauso<<endl;
    }

};