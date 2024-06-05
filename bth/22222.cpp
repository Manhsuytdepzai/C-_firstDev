#include<iostream>
#include<iomanip>
using namespace std;

typedef struct
{
	int Ma_hs;
	char Ten_hs[20];
	char Gioi_tinh[20];
	float Diem_toan;
	float Diem_ly;
	float Diem_hoa;
	float Diem_tb;
	
}Hocsinh;

void Nhap_ds ( Hocsinh a[], int n )
{
	for ( int i = 0; i < n; i++ )
	{
		cin.ignore();
		cout << " Nhap thong tin hoc sinh thu: " << i + 1 << endl;
		cout << " Nhap ma hoc sinh: "; cin >> a[i].Ma_hs;
		cin.ignore();
		cout << " Nhap ten hoc sinh: "; cin.getline( a[i].Ten_hs, 20 );
		cout << " Nhap gioi tinh: "; cin.getline( a[i].Gioi_tinh, 20 );
		cout << " NNhap diem toan: "; cin >> a[i].Diem_toan;
		cout << " Nhap diem ly: "; cin >> a[i].Diem_ly;
		cout << " Nhap diem hoa: "; cin >> a[i].Diem_hoa;
	}
}

void Xuat_ds ( Hocsinh a[], int n )
{
	cout << " ------------------------------------------------ DANH SACH HS ----------------------------------------------------------- " << endl;
	cout << setw(20) << " Ma hs " << " | " << setw(20) << " Ten hs " << " | " << setw(20) << " Gioi tinh " << " | "; 
	cout << setw(20) << " Dien toan " << " | " << setw(20) << " Diem ly " << " | " << setw(20) << " Diem hoa " << " | " << endl;
	for ( int i = 0; i < n; i++ )
	{
		cout << setw(20) << a[i].Ma_hs << " | " << setw(20) << a[i].Ten_hs << " | " << setw(20) << a[i].Gioi_tinh << " | ";
		cout << setw(20) << a[i].Diem_toan << " | " << setw(20) << a[i].Diem_ly << " | " << setw(20) << a[i].Diem_hoa << " | " << endl;
	}
	cout << " ------------------------------------------------------------------------------------------------------------------------- "<<endl;
}

void Tinh_diem_tb ( Hocsinh a[], int n )
{
	for ( int i = 0; i < n; i++ )
	( a[i].Diem_toan * 4 + a[i].Diem_ly * 3 + a[i].Diem_hoa * 2) / 9 ;
}

void Xep_loai ( Hocsinh a[], int n )
{
	for ( int i = 0; i < n; i++ )
	{
		if ( a[i].Diem_tb >= 9 )
		{
			cout << " Xep loai tot ";
			break;
		}
		if ( a[i].Diem_tb >= 6.5 && a[i].Diem_tb < 9 )
		{
			cout << " Xep loai kha ";
			break;
		}
		if ( a[i].Diem_tb >= 5 && a[i].Diem_tb < 6.5 )
		{
			cout << " Xep loai trung binh ";
			break;
		}
		if ( a[i].Diem_tb < 5 && a[i].Diem_tb >=3 )
		{
			cout << " Xep loai yeu ";
			break;
		}
		if ( a[i].Diem_tb < 3 )
		{
			cout << " Xep loai kem ";
			break;
		}
	}
}

int main()
{
	Hocsinh sp[100];
	int n;
	cout << " Nhap vao so hoc sinh "; cin >> n;
	Nhap_ds( sp, n );
	Xuat_ds( sp, n );			
	Tinh_diem_tb( sp, n );
	Xep_loai( sp, n );
	return 0;
}
