#include<iostream>
#include<iomanip>
using namespace std;

typedef struct
{
	char ma[10];
	char ten[20];
	float hs_luong;
	float luong_cb;
	float phu_cap;
	float tong_luong;
}nhan_vien;

void nhap_dsach (nhan_vien a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"nhap thong tin nhan vien thu "<<i+1<<endl;
		cin.ignore();
		cout<<"ma nhan vien : ";cin.getline(a[i].ma, 10);
		cout<<"ten nhan vien : ";cin.getline(a[i].ten, 20);
		cout<<"he so luong : ";cin>>a[i].hs_luong;
	}
}

void tinh_luong (nhan_vien a[], int n)
{
	for (int i=0; i<n; i++)
	{
		a[i].luong_cb = a[i].hs_luong * 27500;
		a[i].phu_cap = a[i].luong_cb * 0.25;
		a[i].tong_luong = a[i].luong_cb + a[i].phu_cap;
	}	
}

void in_dsach(nhan_vien a[], int n)
{
	cout<<".................................................... DANH SACH NHAN VIEN ...................................................."<<endl;
	cout<<setw(15)<<"ma nhan vien"<<"|"<<setw(15)<<"ten nhan vien"<<"|"<<setw(15)<<"he so luong"<<"|"<<setw(15)<<"luong CB"<<"|"<<setw(15)<<"phu cap"<<"|"<<setw(15)<<"tong luong"<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<setw(15)<<a[i].ma<<"|"<<setw(15)<<a[i].ten<<"|"<<setw(15)<<a[i].hs_luong<<"|"<<setw(15)<<a[i].luong_cb<<"|"<<setw(15)<<a[i].phu_cap<<"|"<<setw(15)<<a[i].tong_luong<<endl;
	}
}

void sap_xep_giam (nhan_vien a[], int n)
{
	nhan_vien tg;
	cout<<".................................................... DANH SACH GIAM DAN ...................................................."<<endl;
	cout<<setw(15)<<"ma nhan vien"<<"|"<<setw(15)<<"ten nhan vien"<<"|"<<setw(15)<<"he so luong"<<"|"<<setw(15)<<"luong CB"<<"|"<<setw(15)<<"phu cap"<<"|"<<setw(15)<<"tong luong"<<endl;
	for (int i=0; i<n; i++)
	{
		for ( int j = i+1; j < n; j++ )
		if (a[i].tong_luong < a[j].tong_luong)
		{
			tg = a[j];
			a[i] = a[j];
			a[j]=tg; 
		}
	}
	cout<<setw(15)<<a[i].ma<<"|"<<setw(15)<<a[i].ten<<"|"<<setw(15)<<a[i].hs_luong<<"|"<<setw(15)<<a[i].luong_cb<<"|"<<setw(15)<<a[i].phu_cap<<"|"<<setw(15)<<a[i].tong_luong<<endl;
} 

int main(){
	nhan_vien a[100];
	int n;
	cout<<"nhap so luong nhan vien : ";cin>>n;
	nhap_dsach(a,n);
	tinh_luong (a,n);
	in_dsach(a,n);
	sap_xep_giam (a, n);
	return 0;
}
