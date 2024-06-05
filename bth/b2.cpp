#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;

typedef struct
{
	char ma[5];
	char ten_vdv[25];
	int tuoi;
	char vi_tri[15];
	int so_huychuong;
	float thuong;
}sach;
//nhap danh sach
void nhap_dsach(sach a[],int n)
{
	for( int i=0; i<n; i++ )
	{
		cout<<"nhap thong tin van dong vien thu "<<i+1<<endl;
		cin.ignore();
		cout<<"nhap ma van dong vien : ";cin.getline(a[i].ma, 5);
		cout<<"nhap ten van dong vien : ";cin.getline(a[i].ten_vdv, 25);
		cout<<"so tuoi : ";cin>>a[i].tuoi;
		cin.ignore();
		cout<<"vi tri : ";cin.getline(a[i].vi_tri, 15);
		cout<<"so huy chuong : ";cin>>a[i].so_huychuong;	
	}
}
// tinh thuong
void tinh_thuong(sach a[], int n)
{
	for( int i=0; i<n; i++ )
	if (a[i].tuoi >= 30)
		a[i].thuong = a[i].so_huychuong * 800;
		else
		if (a[i].tuoi >= 25)
			a[i].thuong = a[i].so_huychuong * 500;
			else
			if (a[i].tuoi >= 20)
				a[i].thuong = a[i].so_huychuong * 300;
				else
				a[i].thuong = a[i].so_huychuong * 200;
}
//van dong vien ow vi tri hau ve
void hau_ve(sach a[],int n)
{
	cout<<"---------------------------------------------------------------- DANH SACH VAN DONG VIEN -------------------------------------------------------------"<<endl;
	cout<<setw(30)<<"ma van dong vien"<<"|"<<setw(30)<<"Ten van dong vien"<<"|";
	cout<<setw(20)<<"so tuoi"<<"|"<<setw(20)<<"vi tri"<<"|";
	cout<<setw(30)<<"so huy chuong"<<"|"<<setw(15)<<"thuong"<<"|"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for( int i=0; i<n; i++ )
	if (strcmp(a[i].vi_tri, "hau ve")== 0)
	{	cout<<setw(30)<<a[i].ma<<"|"<<setw(30)<<a[i].ten_vdv<<"|";
		cout<<setw(20)<<a[i].tuoi<<"|"<<setw(20)<<a[i].vi_tri<<"|";
		cout<<setw(30)<<a[i].so_huychuong<<"|"<<setw(15)<<a[i].thuong<<"|"<<endl;
	}
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;	
}
//ham main
int main()
{
	sach a[100];
	int n;
	cout<<"nhap so cau thu : ";cin>>n;
	nhap_dsach(a,n);
	tinh_thuong(a,n);
	hau_ve(a,n);
	return 0;
}
