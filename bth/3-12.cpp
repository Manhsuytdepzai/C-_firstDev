#include <iostream>
#include<iomanip>
using namespace std;

typedef struct
{
	char ma[5];
	char ten_sach[20];
	int so_trang;
	char ten_tg[20];
	float gia_thanh;
}sach;
//nhap danh sach
void nhap_dsach(sach a[],int n)
{
	for( int i=0; i<n; i++ )
	{
		cout<<"nhap thong tin cuon sach thu "<<i+1<<endl;
		cin.ignore();
		cout<<"nhap ma sach : ";cin.getline(a[i].ma, 5);
		cout<<"nhap ten sach : ";cin.getline(a[i].ten_sach, 20);
		cout<<"so trang sach : ";cin>>a[i].so_trang;
		cout<<"ten tac gia : ";cin.getline(a[i].ten_tg, 20);
	}
}
//tinh gia thanh
void gia_thanh(sach a[], int n)
{
	for( int i=0; i<n; i++ )
	a[i].gia_thanh = a[i].so_trang * 500;
}
//sach tren 100 trang
void sach_tren_100trang(sach a[], int n)
{
	cout<<"----------------------------------------- DANH SACH THU VIEN --------------------------------------"<<endl;
	cout<<setw(20)<<"ma sach"<<"|"<<setw(20)<<"Ten sach"<<"|";
	cout<<setw(20)<<"so trang"<<"|"<<setw(20)<<"ten tac gia"<<"|";
	cout<<setw(15)<<"gia thanh"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	for( int i=0; i<n; i++ )
	if (a[i].so_trang > 100)
	{	cout<<setw(20)<<a[i].ma<<"|"<<setw(20)<<a[i].ten_sach<<"|";
		cout<<setw(20)<<a[i].so_trang<<"|"<<setw(20)<<a[i].ten_tg<<"|";
		cout<<setw(15)<<a[i].gia_thanh<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;	
}
//in danh sach truoc sap xep
void in_dsach(sach a[], int n)
{
	cout<<"----------------------------------------- DANH SACH THU VIEN --------------------------------------"<<endl;
	cout<<setw(20)<<"ma sach"<<"|"<<setw(20)<<"Ten sach"<<"|";
	cout<<setw(20)<<"so trang"<<"|"<<setw(20)<<"ten tac gia"<<"|";
	cout<<setw(15)<<"gia thanh"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	for( int i=0; i<n; i++ )
	{	cout<<setw(20)<<a[i].ma<<"|"<<setw(20)<<a[i].ten_sach<<"|";
		cout<<setw(20)<<a[i].so_trang<<"|"<<setw(20)<<a[i].ten_tg<<"|";
		cout<<setw(15)<<a[i].gia_thanh<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;	
}
//danh sach sau sap xep
void sach_tren_100trang(sach a[], int n)
{
	cout<<"----------------------------------------- DANH SACH THU VIEN --------------------------------------"<<endl;
	cout<<setw(20)<<"ma sach"<<"|"<<setw(20)<<"Ten sach"<<"|";
	cout<<setw(20)<<"so trang"<<"|"<<setw(20)<<"ten tac gia"<<"|";
	cout<<setw(15)<<"gia thanh"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	for( int i=0; i<n; i++ )
	if (a[i].so_trang > 100)
	{	cout<<setw(20)<<a[i].ma<<"|"<<setw(20)<<a[i].ten_sach<<"|";
		cout<<setw(20)<<a[i].so_trang<<"|"<<setw(20)<<a[i].ten_tg<<"|";
		cout<<setw(15)<<a[i].gia_thanh<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;	
}
