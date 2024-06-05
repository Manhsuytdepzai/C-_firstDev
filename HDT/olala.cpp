#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class Dienlanh
{
    protected:
        string ma_hang;
        string name;
        int bill;
    public:
        Dienlanh(string ma_hang = " ", string name = " ", int bill = 0)
        {
            this->ma_hang = ma_hang;
            this->name = name;
            this->bill = bill;
        }
        ~Dienlanh()
        {}
        friend istream& operator >> (istream& is, Dienlanh& dl)
        {
            cin.ignore();
            cout<<"Nhap ma hang : ";
            getline(is,dl.ma_hang);
            cout<<"Nhap ten hang san xuat : ";
            getline(is, dl.name);
            cout<<"Nhap don gia : ";
            is>>dl.bill;
            return is;
        }

        friend ostream& operator << (ostream& os, Dienlanh dl)
        {
            os<<"Ma hang : "<<dl.ma_hang<<endl;
            os<<"Ten hang san xuat : "<<dl.name<<endl;
            os<<"Don gia : "<<dl.bill<<endl;
            return os;
        }
};

class Tulanh : Dienlanh
{
    protected:
        int v_tl;
        int w_tt;
    public:
        Tulanh(string ma_hang = " ", string name = " ", int bill = 0, int v_tl = 0, int w_tt = 0) : Dienlanh(ma_hang, name, bill)
        {
            this->v_tl = v_tl;
            this->w_tt = w_tt;
        }
        ~Tulanh()
        {}

        friend istream& operator >> (istream& is, Tulanh& tl)
        {
            cin>>(Dienlanh&) tl;
            cin.ignore();
            cout<<"Nhap dung tich tu lanh : ";
            is>>tl.v_tl;
            cout<<"Nhap dien ap tieu thu : ";
            is>>tl.w_tt;
            return is;
        }

        friend ostream& operator << (ostream& os, Tulanh tl)
        {
            os<<(Dienlanh&) tl;
            os<<"Dung tich tu lanh : "<<tl.v_tl<<endl;
            os<<"Dien nang tieu thu : "<<tl.w_tt<<endl;
            return os;
        }

        friend void van_chuyen(Tulanh tl[], int n)
        {
            for(int i=0; i<n; i++)
            {
                if(tl[i].v_tl > 100 )
                    cout<<"tien van chuyen : 500000"<<endl;
                else if(tl[i].v_tl > 50)
                        cout<<"tien van chuyen : 300000"<<endl;
                        else
                            cout<<"tien van chuyen : 200000"<<endl;
            }
        }

        bool operator == (int v_tl)
        {
            return this->v_tl == v_tl;
        }
        friend void nhaptl(Tulanh tl[], int n);
        //friend void xuattl(Tulanh tl[], int n);
        friend void v500(Tulanh tl[], int n);
};

int main()
{
    Dienlanh dl[40];
    Tulanh tl[40];
    int n;
    int x;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"nhap so thiet bi dien lanh : ";
    cin>>x;
    for(int i = 0; i<x; i++)
    {
        cout<<"nhap thiet bi thu "<<i+1<<endl;
        cin>>dl[i];
        cout<<endl;
    }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"danh sach tiet bi dien lanh da nhap : "<<endl;
    for(int i = 0; i<x; i++)
    {
        cout<<dl[i]<<endl;
    }
    cout<<"nhap so luong tu lanh : ";
    cin>>n;
    nhaptl(tl,n);
    //xuattl(tl,n);
    v500(tl,n);
    return 0;
}

void nhaptl(Tulanh tl[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<"nhap tu lanh thu "<<i+1<<endl;
        cin>>tl[i];
        cout<<endl;
    }
}
/*void xuattl(Tulanh tl[], int n)
{
    cout<<"Danh sach tu lanh da nhap : "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<tl[i]<<endl;
    }
}*/

void v500(Tulanh tl[], int n)
{
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"danh sach cac tu lanh dung tich = 500 : "<<endl;
    for(int i=0; i<n; i++)
    {
        if(tl[i] == 500)
        cout<<tl[i]<<endl;
    }
}