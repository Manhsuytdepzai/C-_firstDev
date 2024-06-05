#include<iostream>
#include<iomanip>
using namespace std;

typedef struct 
{	char 	ma[10];
	char	tensp[20];
	int		soluong;
	float	dongia;
} sanpham;


void nhap_sp(sanpham  a[], int n)
{	for(int i=0; i<n; i++)
	{	cout<<"Nhap thong tin san pham thu "<<i+1<<endl;
		cin.ignore();
		cout<<"Nhap ma san pham: ";cin.getline(a[i].ma,10);
		cout<<"Nhap ten san pham: ";cin.getline(a[i].tensp, 20);
		cout<<"Nhap so luong san pham: "; cin>>a[i].soluong;
		cout<<"Nhap don gia san pham: "; cin>>a[i].dongia;
	}
}

void xuat_sp(sanpham a[], int n)
{	cout<<"---------------------------- DANH SACH SAN PHAM -------------------------"<<endl;
	cout<<setw(10)<<"Ma sp"<<"|"<<setw(20)<<"Ten san pham"<<"|";
	cout<<setw(10)<<"So luong"<<"|"<<setw(15)<<"Don gia"<<"|";
	cout<<setw(15)<<"Thanh tien"<<"|"<<endl;
	for (int i=0; i<n; i++)
	{	cout<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].tensp<<"|";
		cout<<setw(10)<<a[i].soluong<<"|"<<setw(15)<<a[i].dongia<<"|"<<endl;
	}
	cout<<"-------------------------------------------------------------------------"<<endl;
}

void xuat_theo_gia(sanpham a[], int n)
{	cout<<"Cac san pham co don gia duoi 20000 la "<<endl;
	cout<<"---------------------------- DANH SACH SAN PHAM -------------------------"<<endl;
	cout<<setw(10)<<"Ma sp"<<"|"<<setw(20)<<"Ten san pham"<<"|";
	cout<<setw(10)<<"So luong"<<"|"<<setw(15)<<"Don gia"<<"|";
	cout<<setw(15)<<"Thanh tien"<<"|"<<endl;
	for (int i=0; i<n; i++)
		if(a[i].dongia<20000)
		{	cout<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].tensp<<"|";
			cout<<setw(10)<<a[i].soluong<<"|"<<setw(15)<<a[i].dongia<<"|"<<endl;
		}
	cout<<"-------------------------------------------------------------------------"<<endl;
}

int main()
{	sanpham 	sp[100];
	int n;		//n la so san pham
	cout<<"Nhap vao so san pham: ";cin>>n;
	nhap_sp(sp,n);	//nhap vao thong tin cua n san pham
	cout<<"x:";
	xuat_sp(sp,n);
	xuat_theo_gia(sp,n);
	return 0;
}