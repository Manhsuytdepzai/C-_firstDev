#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
//khai bao
typedef struct
{
	char ma[5];
	char ten_chuho[25];
	int thanh_vien;
	float thu_nhap;
	char ho_ngheo[5];
	long tro_cap;
}ho_dan;
//nhap danh sach
void nhap_dsach (ho_dan a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"nhap ho dan thu "<<i+1<<endl;
		cin.ignore();
		cout<<"ma ho dan : ";cin.getline(a[i].ma,5);
		cout<<"ten chu ho: ";cin.getline(a[i].ten_chuho,25);
		cout<<"so thanh vien : ";cin>>a[i].thanh_vien;
		cout<<"muc thu nhap : ";cin>>a[i].thu_nhap;
	}
}
//ho ngheo
void ho_ngheo( ho_dan a[], int n )
{
	for ( int i = 0; i < n; i++ )
	
		if ( a[i].thu_nhap < 2000 )
			strcpy( a[i].ho_ngheo,"co");
			else
				strcpy( a[i].ho_ngheo,"khong" );
}
// tinh tro cap
void tro_cap(ho_dan a[],int n)
{
	for (int i=0; i<n; i++)
	{
		if((a[i].thu_nhap < 2000 ) && (a[i].thanh_vien >= 5))
		{
			a[i].tro_cap = 	a[i].thanh_vien * 1000;
		}
		if((a[i].thu_nhap < 2000 ) && (a[i].thanh_vien >=3 && a[i].thanh_vien < 5 ))
		{
			a[i].tro_cap = 	a[i].thanh_vien * 800;
		}
		if((a[i].thu_nhap < 2000 ) && (a[i].thanh_vien >=1 && a[i].thanh_vien < 3 ))
		{
			a[i].tro_cap = 	a[i].thanh_vien * 500;
		}
	}
}
//in danh sach
void in_dsach (ho_dan a[],int n)
{
	cout<<"----------------------------------------- DANH SACH HO DAN --------------------------------------"<<endl;
	cout<<setw(20)<<"Ma ho dan"<<"|"<<setw(20)<<"Ten chu ho"<<"|";
	cout<<setw(20)<<"so thanh vien"<<"|"<<setw(20)<<"muc thu nhap"<<"|";
	cout<<setw(15)<<"ho ngheo"<<"|"<<setw(15)<<"tro cap"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
	{	cout<<setw(20)<<a[i].ma<<"|"<<setw(20)<<a[i].ten_chuho<<"|";
		cout<<setw(20)<<a[i].thanh_vien<<"|"<<setw(20)<<a[i].thu_nhap<<"|";
		cout<<setw(15)<<a[i].ho_ngheo<<"|"<<setw(15)<<a[i].tro_cap<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;	
}
//so thanh vien lon hon 5
void tren_5 (ho_dan a[],int n)
{
	cout<<"----------------------------------------- DANH SACH HO DAN --------------------------------------"<<endl;
	cout<<setw(20)<<"Ma ho dan"<<"|"<<setw(20)<<"Ten chu ho"<<"|";
	cout<<setw(20)<<"so thanh vien"<<"|"<<setw(20)<<"muc thu nhap"<<"|";
	cout<<setw(15)<<"ho ngheo"<<"|"<<setw(15)<<"tro cap"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
	if (a[i].thanh_vien > 5)
	{	cout<<setw(20)<<a[i].ma<<"|"<<setw(20)<<a[i].ten_chuho<<"|";
		cout<<setw(20)<<a[i].thanh_vien<<"|"<<setw(20)<<a[i].thu_nhap<<"|";
		cout<<setw(15)<<a[i].ho_ngheo<<"|"<<setw(15)<<a[i].tro_cap<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;	
}
//main
int main()
{
	ho_dan a[100];
	int n;
	cout<<"nhap so ho dan : ";cin>>n;
	nhap_dsach(a,n);
	ho_ngheo(a,n);
	tro_cap(a,n);
	in_dsach(a,n);
	tren_5(a,n);
	return 0;
}
