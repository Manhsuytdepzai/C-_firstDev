#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

typedef struct{
    int tu;
    int mau;
} phanSo;
void nhap(phanSo ps[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "nhap tu so: "; cin >> ps[i].tu;
        do{
            cout << "nhap mau so: "; cin >> ps[i].mau;
        }
        while(ps[i].mau == 0);
    }
}

void in_ps(phanSo ps[],int n)
{
	cout<<"------------------------------------------- DANH SACH SINH VIEN -----------------------------------------------"<<endl;
	cout<<setw(20)<<"Phan so"<<"|"<<setw(20)<<"Tong"<<"|"<<setw(20)<<"Hieu"<<"|"<<setw(20)<<""<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
	{
	cout<<setw(20)<<ps[i].tu<<"/"<<ps[i].mau<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
	}
}

int main()
{
    phanSo ps[50];
    int n;
    cin>>n;
    cout << "nhap phan so: " << endl;
    nhap(ps,n);
    in_ps(ps,n);
    return 0;
}