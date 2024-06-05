#include<iostream>
#include<string.h>
using namespace std;
class Truong
{
    private:
        string ma_truong;
        string ma_lop;
        int so_lop;
        int so_sv;
    public:
        Truong()
        {
            ma_truong =" ";
            ma_lop= " ";
            so_lop = 0;
            so_sv = 0;
        }

        Truong(string ma_truong, string ma_lop, int so_lop, int so_sv)
        {
            this->ma_truong=ma_truong;
            this->ma_lop=ma_lop;
            this->so_lop=so_lop;
            this->so_sv=so_sv;
        }

        friend istream& operator >> (istream& is, Truong& x)
        {
            cout<<"nhap ma truong : ";is>>x.ma_truong;
            cout<<"nhap ma lop : ";is>>x.ma_lop;
            cout<<"nhap so lop : ";is>>x.so_lop;
            cout<<"nhap so sinh vien : ";is>>x.so_sv;
            return is;
        }

        friend ostream& operator << (ostream& os, Truong x)
        {
            os<<"ma truong : "<<x.ma_truong;
            os<<"ma lop : "<<x.ma_lop;
            os<<"so lop : "<<x.so_lop;
            os<<"so sv : "<<x.so_sv;
            return os;
        }
};

class Truongdaihoc : public Truong
{
    private:
        string ten_truong;
        int so_chuyen_nganh;
    public: 
        Truongdaihoc()
        {
            ten_truong=" ";
            so_chuyen_nganh = 0;
        }

        Truongdaihoc(string ma_truong, string ma_lop, int so_lop, int so_sv, string ten_truong, int so_chuyen_nganh ): Truong(string ma_truong, string ma_lop, int so_lop, int so_sv)
            this->ten_truong = ten_truong;
            this->so_chuyen_nganh = so_chuyen_nganh;
        }

        friend istream& operator >> (istream& is, Truongdaihoc& y)
        {
            is>>(Truong&) y;
            cout<<"nhap ten truong : ";is>>y.ten_truong;
            cout<<"nhap so chuyen nganh : ";is>>y.so_chuyen_nganh;
            return is;
        }

        friend ostream& operator << (ostream& os, Truongdaihoc y)
        {
            os<<(Truong&) y;
            os<<"ten truong : "<<y.ten_truong;
            os<<"so chuyen nganh : "<<y.so_chuyen_nganh;
            return os;
        }
};