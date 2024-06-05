#include<iostream>
#include<iomanip>
#include<string.h>
#include<math.h> 
#include <fstream>
using namespace std;

typedef struct
{
	char ma[5];
	char ho_ten[20];
	char so_dth[10];
	float luong_cb;
	float he_so;
	float luong_thang;
	float phu_cap;
	float thu_nhap;
}nhan_vien;
// 1 
void nhap_dsach(nhan_vien a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"nhap thong tin nhan vien thu "<<i+1<<endl;
		cin.ignore();
		cout<<"ma nhan vien : ";cin.getline(a[i].ma,5);
		cout<<"ho ten : ";cin.getline(a[i].ho_ten,20);
		cout<<"so dien thoai : ";cin.getline(a[i].so_dth,10);
		cout<<"luong co ban : ";cin>>a[i].luong_cb;
		cout<<"he so luong : ";cin>>a[i].he_so;
		cout<<"phu cap : ";cin>>a[i].phu_cap;
	}
}
// 2
void in_dsach(nhan_vien a[], int n)
{
	cout<<"------------------------------------------ THU NHAP LON NHAT ---------------------------------------"<<endl;
	cout<<setw(10)<<"Ma nv"<<"|"<<setw(20)<<"Ten nv"<<"|";
	cout<<setw(15)<<"so dien thoai"<<"|"<<setw(10)<<"luong cb"<<"|";
	cout<<setw(10)<<"he so"<<"|"<<setw(8)<<"phu cap"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
	for (int i=0; i<n; i++)
	
	{	cout<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].ho_ten<<"|";
		cout<<setw(15)<<a[i].so_dth<<"|"<<setw(10)<<a[i].luong_cb<<"|";
		cout<<setw(10)<<a[i].he_so<<"|"<<setw(8)<<a[i].phu_cap<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
}
// 3
void luong_thang(nhan_vien a[], int n)
{
	for (int i=0; i<n; i++)
	a[i].luong_thang = a[i].luong_cb*a[i].he_so;
	cout<<"------------------------------------------ luong thang ---------------------------------------"<<endl;
	cout<<setw(10)<<"Ma nv"<<"|"<<setw(20)<<"Ten nv"<<"|";
	cout<<setw(15)<<"so dien thoai"<<"|"<<setw(10)<<"luong cb"<<"|";
	cout<<setw(10)<<"he so"<<"|"<<setw(8)<<"phu cap"<<"|"<<setw(15)<<"luong thang"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
	for (int i=0; i<n; i++)
	
	{	cout<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].ho_ten<<"|";
		cout<<setw(15)<<a[i].so_dth<<"|"<<setw(10)<<a[i].luong_cb<<"|";
		cout<<setw(10)<<a[i].he_so<<"|"<<setw(8)<<a[i].phu_cap<<"|"<<setw(15)<<a[i].luong_thang<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
}
// 4
void thu_nhap(nhan_vien a[], int n)
{
	for (int i=0; i<n; i++)
	a[i].thu_nhap = a[i].luong_thang + a[i].phu_cap;
	cout<<"------------------------------------------ thu nhap ---------------------------------------"<<endl;
	cout<<setw(10)<<"Ma nv"<<"|"<<setw(20)<<"Ten nv"<<"|";
	cout<<setw(15)<<"so dien thoai"<<"|"<<setw(10)<<"luong cb"<<"|";
	cout<<setw(10)<<"he so"<<"|"<<setw(8)<<"phu cap"<<"|";
	cout<<setw(15)<<"luong thang"<<"|"<<setw(15)<<"thu nhap"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
	for (int i=0; i<n; i++)
	
	{	cout<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].ho_ten<<"|";
		cout<<setw(15)<<a[i].so_dth<<"|"<<setw(10)<<a[i].luong_cb<<"|";
		cout<<setw(10)<<a[i].he_so<<"|"<<setw(8)<<a[i].phu_cap<<"|";
		cout<<setw(15)<<a[i].luong_thang<<"|"<<setw(15)<<a[i].thu_nhap<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;	
}
// 5
void sap_xep(nhan_vien a[], int n)
{
	nhan_vien tg;
	for (int i=0; i<n-1; i++)
		for ( int j = i+1; j < n; j++ )
	if (a[i].he_so < a[j].he_so)
	{
		tg = a[j];
		a[i] = a[j];
		a[j]=tg; 
	}
	cout<<"------------------------------------------ THU NHAP LON NHAT ---------------------------------------"<<endl;
	cout<<setw(10)<<"Ma nv"<<"|"<<setw(20)<<"Ten nv"<<"|";
	cout<<setw(15)<<"so dien thoai"<<"|"<<setw(10)<<"luong cb"<<"|";
	cout<<setw(10)<<"he so"<<"|"<<setw(8)<<"phu cap"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
	for (int i=0; i<n; i++)
	
	{	cout<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].ho_ten<<"|";
		cout<<setw(15)<<a[i].so_dth<<"|"<<setw(10)<<a[i].luong_cb<<"|";
		cout<<setw(10)<<a[i].he_so<<"|"<<setw(8)<<a[i].phu_cap<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
}
//6 
void nhan_vien_max(nhan_vien a[], int n)
{
	int max=0;
    int vitri=0;
	for(int i=0;i<n;i++)
		if(max < a[i].thu_nhap)
		{
			max = a[i].thu_nhap;
			vitri =i;
		}
	cout<<"------------------------------------------ THU NHAP LON NHAT ---------------------------------------"<<endl;
	cout<<setw(10)<<"Ma nv"<<"|"<<setw(20)<<"Ten nv"<<"|";
	cout<<setw(10)<<" thu nhap"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
	for (int i=0; i<n; i++)
	
	{	cout<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].ho_ten<<"|";
		cout<<setw(10)<<max<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;	
}
//7 
void luong_cty_tra(nhan_vien a[], int n)
{
	float s = 0;
	for (int i=0; i<n; i++)
	s += a[i].thu_nhap;
	cout<<"tong luong cong ty phai tra cho nhan vien la : "<<s<<" VND"<<endl; 
}
//8
void in_dsach8(nhan_vien a[], int n, float hs)
{
	cout<<"------------------------------------------ cau8 ---------------------------------------"<<endl;
	cout<<setw(10)<<"Ma nv"<<"|"<<setw(20)<<"Ten nv"<<"|";
	cout<<setw(15)<<"so dien thoai"<<"|"<<setw(10)<<"luong cb"<<"|";
	cout<<setw(10)<<"he so"<<"|"<<setw(8)<<"phu cap"<<"|";
	cout<<setw(15)<<"luong_thang"<<"|"<<setw(15)<<"thu nhap"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
	for (int i=0; i<n; i++)
		if (a[i].he_so > hs)
	{	
		cout<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].ho_ten<<"|";
		cout<<setw(15)<<a[i].so_dth<<"|"<<setw(10)<<a[i].luong_cb<<"|";
		cout<<setw(10)<<a[i].he_so<<"|"<<setw(8)<<a[i].phu_cap<<"|";
		cout<<setw(15)<<a[i].luong_thang<<"|"<<setw(15)<<a[i].thu_nhap<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
}
// 9 10
void luu_dsach(ofstream &f1, nhan_vien a[], int n)
{
	fflush (stdin);
	f1<<"------------------------------------------ .dat ---------------------------------------"<<endl;
	f1<<setw(10)<<"Ma nv"<<"|"<<setw(20)<<"Ten nv"<<"|";
	f1<<setw(15)<<"so dien thoai"<<"|"<<setw(10)<<"luong cb"<<"|";
	f1<<setw(10)<<"he so"<<"|"<<setw(8)<<"phu cap"<<"|"<<setw(15)<<"luong_thang"<<"|"<<setw(15)<<"thu nhap"<<"|"<<endl;
	f1<<"---------------------------------------------------------------------------------------------------"<<endl;
	
	for (int i=0; i<n; i++)
	
	{	f1<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].ho_ten<<"|";
		f1<<setw(15)<<a[i].so_dth<<"|"<<setw(10)<<a[i].luong_cb<<"|";
		f1<<setw(10)<<a[i].he_so<<"|"<<setw(8)<<a[i].phu_cap<<"|"<<setw(15)<<a[i].luong_thang<<"|"<<setw(15)<<a[i].thu_nhap<<"|"<<endl;
	}
	f1<<"---------------------------------------------------------------------------------------------------"<<endl;
}

int main()
{
	fstream f;
	nhan_vien a[100];
	int n;
	cout<<"n = ";cin>>n;
	cout<<"/*Menu*/"<<endl;
	cout<<" 1. nhap danh sach "<<endl;
	cout<<" 2. in danh sach "<<endl;
	cout<<" 3. bang luong nv "<<endl;
	cout<<" 4. thu nhap cua nhan vien "<<endl;
	cout<<" 5. danh sach tang dan he so luong "<<endl;
	cout<<" 6. nv co thu  nhap cao nhat "<<endl;
	
}

