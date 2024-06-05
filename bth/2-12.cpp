#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

typedef struct 
{
	char ma_hs[5];
	char ten_hs[20];
	char gioi_tinh[5];
	float diem_toan;
	float diem_li;
	float diem_hoa;
	float diem_tb;
	char xep_loai[10];
}hoc_sinh;

void nhap_dsach(hoc_sinh a[], int n)
{
	for ( int i=0; i<n; i++ )
	{
		cout<<" Nhap hoc sinh thu "<<i+1<<endl;
		cin.ignore();
		cout<<" Ma hoc sinh : ";cin.getline(a[i].ma_hs, 5);
		cout<<" Ten hoc sinh : ";cin.getline(a[i].ten_hs, 20);
		cout<<" Gioi tinh : ";cin.getline(a[i].gioi_tinh, 5);
		cout<<" Diem toan : ";cin>>(a[i].diem_toan);
		cout<<" Diem li : ";cin>>(a[i].diem_li);
		cout<<" Diem hoa : ";cin>>(a[i].diem_hoa); 
	}
}

void  diem_tb(hoc_sinh a[], int n)
{
	for ( int i=0; i<n; i++ )
		a[i].diem_tb = (a[i].diem_toan*4 + a[i].diem_li*3 + a[i].diem_hoa*2)/9;
}

void xep_loai(hoc_sinh a[], int n)
{
	for ( int i=0; i<n; i++ )
	{
		if( a[i].diem_tb >= 9 )
			strcpy(a[i].xep_loai, "xuat sac !");
			else 
			if( a[i].diem_tb >= 8 )	
				strcpy(a[i].xep_loai, "gioi !");
				else 
				if( a[i].diem_tb >= 6.5 )	
					strcpy(a[i].xep_loai, "kha !");
					else
					if( a[i].diem_tb >= 5 )
						strcpy(a[i].xep_loai, "trung binh !");
					else
						strcpy(a[i].xep_loai, "yeu !");
	}
}

void in_dsach(hoc_sinh a[], int n)
{
	
	cout<<"----------------------------------------- DANH SACH HOC SINH --------------------------------------"<<endl;
	cout<<setw(10)<<"Ma hs"<<"|"<<setw(20)<<"Ten hs"<<"|";
	cout<<setw(10)<<"Gioi tinh"<<"|"<<setw(8)<<"Toan"<<"|";
	cout<<setw(8)<<"Ly"<<"|"<<setw(8)<<"Hoa"<<"|";
	cout<<setw(8)<<"Diem TB"<<"|"<<setw(20)<<"Xep loai"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
	for (int i=0; i<n; i++)
	
	{	cout<<setw(10)<<a[i].ma_hs<<"|"<<setw(20)<<a[i].ten_hs<<"|";
		cout<<setw(10)<<a[i].gioi_tinh<<"|"<<setw(8)<<a[i].diem_toan<<"|";
		cout<<setw(8)<<a[i].diem_li<<"|"<<setw(8)<<a[i].diem_hoa<<"|";
		cout<<setw(8)<<a[i].diem_tb<<"|"<<setw(20)<<a[i].xep_loai<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
}

void nu_xs(hoc_sinh a[],int n)
{
	
	cout<<"---------------------------------------- DANH SACH NU XUAT SAC ------------------------------------"<<endl;
	cout<<setw(10)<<"Ma hs"<<"|"<<setw(20)<<"Ten hs"<<"|";
	cout<<setw(10)<<"Gioi tinh"<<"|"<<setw(8)<<"Toan"<<"|";
	cout<<setw(8)<<"Ly"<<"|"<<setw(8)<<"Hoa"<<"|";
	cout<<setw(8)<<"Diem TB"<<"|"<<setw(20)<<"Xep loai"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	
	for (int i=0; i<n; i++)
	if (strcmp(a[i].gioi_tinh, "nu")== 0 && ( a[i].diem_tb >= 8 && a[i].diem_tb < 10 ) )
	{	cout<<setw(10)<<a[i].ma_hs<<"|"<<setw(20)<<a[i].ten_hs<<"|";
		cout<<setw(10)<<a[i].gioi_tinh<<"|"<<setw(8)<<a[i].diem_toan<<"|";
		cout<<setw(8)<<a[i].diem_li<<"|"<<setw(8)<<a[i].diem_hoa<<"|";
		cout<<setw(8)<<a[i].diem_tb<<"|"<<setw(20)<<a[i].xep_loai<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;

}

int main()
{
	hoc_sinh a[100];
	
	int n;
	
	cout<<" Nhap so luong hoc sinh : ";cin>>n;
	
	nhap_dsach(a,n);
	
	diem_tb(a,n);
	
	xep_loai(a,n);
	
	in_dsach(a,n);
	
	nu_xs(a,n);
	
	return 0;
}
