#include<iostream>
#include<iomanip>
using namespace std;

typedef struct 
{
	int		tuso;
	int	mauso;
} sanpham;


void nhap_sp(sanpham  a[], int n)
{	for(int i=0; i<n; i++)
	{	cout<<"Nhap thong tin so thu "<<i+1<<endl;
		cin.ignore();
		cout<<"Nhap tu so: ";cin>>a[i].tuso;
		cout<<"Nhap mau so: ";cin>>a[i].mauso;
	}
}

void xuat_sp(sanpham a[], int n)
{	cout<<"------------------ DANH SACH PHAN SO ---------------"<<endl;
	cout<<setw(10)<<" Phan so "<<"|"<<endl;
	for (int i=0; i<n; i++)
	{	cout<<setw(10)<<a[i].tuso<<"/"<<a[i].mauso<<"|"<<endl;
	}
	cout<<"-------------------------------------------------------------------------"<<endl;
}

/*void xuat_theo_gia(sanpham a[], int n)
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
*/
int main()
{	sanpham 	sp[100];
	int n;		//n la so san pham
	cout<<"Nhap vao so san pham: ";cin>>n;
	nhap_sp(sp,n);	//nhap vao thong tin cua n san pham
	xuat_sp(sp,n);
	//xuat_theo_gia(sp,n);
	return 0;
}