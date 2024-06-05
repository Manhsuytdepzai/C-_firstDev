//them 1 nhan vien vao danh sach
//xoa 1 nhan vien co ma la ma nhap vao tu ban phim
#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>

typedef  struct
{
	char 	manv[10];
	char 	ten[30];
	char  	sdt[10];
	float		hesoluong;
	float 		luongthang;
	signed int 		luongcb;
	float 		phucap;
	double 		thunhap;
} quanli;
void nhap_tennv( quanli a[], int n)
{	for(int i=0; i<n; i++)
	{	cout<<"Nhap thong tin nhan vien thu : "<<i+1<<endl;
		cin.ignore();
		cout<<"Nhap ma nhan vien: ";cin.getline(a[i].manv,10);
		cout<<"Nhap ten nhan vien: ";cin.getline(a[i].ten, 30);
		cout<<"Nhap he so dien thoai nhan vien: "; cin.getline(a[i].sdt, 10);
		cout<<"Nhap luong co ban nhan vien: "; cin>>a[i].luongcb;
		cout<<"Nhap phu cap cua nhan vien: "; cin>>a[i].phucap;
		cout<<"Nhap he so cua nhan vien: "; cin>>a[i].hesoluong;	
	}
}
void xuat_tennv(quanli a[], int n)
{	cout<<"------------------------------------------------ DANH SACH NHAN VIEN --------------------------------------------------"<<endl;
	cout<<setw(15)<<"Ma nhan vien"<<"|"<<setw(20)<<"Ten nhan vien"<<"|";
	cout<<setw(15)<<"So dien thoai"<<"|"<<setw(15)<<"He so luong"<<"|";
	cout<<setw(15)<<"Luong thang"<<"|"<<setw(15)<<"Luong Co Ban"<<"|";
	cout<<setw(15)<<"Phu Cap"<<"|"<<setw(15)<<"Thu nhap"<<"|"<<endl;
	for (int i=0; i<n; i++)
	{	cout<<setw(15)<<a[i].manv<<"|"<<setw(20)<<a[i].ten<<"|";
		cout<<setw(15)<<a[i].sdt<<"|"<<setw(15)<<a[i].hesoluong<<"|";
		cout<<setw(15)<<a[i].luongthang<<"|"<<setw(15)<<a[i].luongcb<<"|";
		cout<<setw(15)<<a[i].phucap<<"|"<<setw(15)<<a[i].thunhap<<"|"<<endl;
	}
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
}	 
void tinh_luong_thang(quanli  a[], int n)
{	
	for(int i=0; i<n; i++)
		a[i].luongthang = a[i].luongcb*a[i].hesoluong ;
}
void tinh_thu_nhap(quanli  a[], int n)
{	
	for(int i=0; i<n; i++)
		a[i].thunhap = (double)a[i].luongcb+a[i].phucap;
}
void ttangdan(quanli a[], int n)
{
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if(a[i].thunhap > a[j].thunhap)
			{	quanli tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
	xuat_tennv(a,n);
}
int nhan_vien_luong_cao_nhat(quanli  a[], int n)
{   float max=a[0].thunhap;
	int vitri=0;
    for(int i=1;i<n;i++)
        if(max < a[i].thunhap){
            max = a[i].thunhap;
            vitri =i;
        }
    // bang ten nhan vien co thu nhap cao nhat
    cout<<"thong tin cua nhan vien co thu nhap cao nhat\n";
    cout<<"--------------------------------------------- DANH SACH NHAN THU NHAP CAO NHAT ---------------------------------------------"<<endl;
	cout<<setw(15)<<"Ma nhan vien"<<"|"<<setw(20)<<"Ten nhan vien"<<"|";
	cout<<setw(15)<<"So dien thoai"<<"|"<<setw(15)<<"He so luong"<<"|";
	cout<<setw(15)<<"Luong thang"<<"|"<<setw(15)<<"Luong Co Ban"<<"|";
	cout<<setw(15)<<"Phu Cap"<<"|"<<setw(15)<<"Thu nhap"<<"|"<<endl;
	for(int i=0;i<n;i++)
        if(a[i].thunhap == max)
        {	cout<<setw(15)<<a[i].manv<<"|"<<setw(20)<<a[i].ten<<"|";
			cout<<setw(15)<<a[i].sdt<<"|"<<setw(15)<<a[i].hesoluong<<"|";
			cout<<setw(15)<<a[i].luongthang<<"|"<<setw(15)<<a[i].luongcb<<"|";
			cout<<setw(15)<<a[i].phucap<<"|"<<setw(15)<<a[i].thunhap<<"|"<<endl;
		}
	cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
}
	
void luong_cty_phai_tra(quanli a[], int n)	
{
	double tong = 0;
	for(int i=0; i< n; i++)
	tong += a[i].thunhap;
}
void xuat_theo_hs(quanli a[], int n, float hs)
{	cout<<"--------------------------------------------- DANH SACH NHAN VIEN ---------------------------------------------"<<endl;
	cout<<setw(15)<<"Ma nhan vien"<<"|"<<setw(20)<<"Ten nhan vien"<<"|";
	cout<<setw(15)<<"So dien thoai"<<"|"<<setw(15)<<"He so luong"<<"|";
	cout<<setw(15)<<"Luong thang"<<"|"<<setw(15)<<"Luong Co Ban"<<"|";
	cout<<setw(15)<<"Phu Cap"<<"|"<<setw(15)<<"Thu nhap"<<"|"<<endl;
	for (int i=0; i<n; i++)
		if(a[i].hesoluong > hs )
	{	cout<<setw(15)<<a[i].manv<<"|"<<setw(20)<<a[i].ten<<"|";
		cout<<setw(15)<<a[i].sdt<<"|"<<setw(15)<<a[i].hesoluong<<"|";
		cout<<setw(15)<<a[i].luongthang<<"|"<<setw(15)<<a[i].luongcb<<"|";
		cout<<setw(15)<<a[i].phucap<<"|"<<setw(15)<<a[i].thunhap<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
}	
int main()
{	quanli 	ql[100], nv[100];
	int n;		//n la so nha vien
	float hs;
	
	cout<<"Nhap vao so nhan vien: ";cin>>n;
	nhap_tennv(ql,n);	//nhap vao thong tin cua n nhan vien
	tinh_luong_thang(ql,n);
	tinh_thu_nhap (ql,n);
	xuat_tennv(ql,n);
	cout<<"nhap he so mong muon :";cin>>hs;
	xuat_theo_hs(ql,n,hs);
	cout<<"Bang luong xep theo thu tu tang dan"<<endl;
	ttangdan (ql,n);
	nhan_vien_luong_cao_nhat (ql,n);
	// Ghi du lieu
	fstream f;
	f.open("nv.dat", ios::out | ios::binary);
   	if(!f)			
   	{   cout <<"Khong the tao duoc tep tin "<< f <<endl; 	
	   	exit(1);
   	}
	f.write((char *)(ql), sizeof(ql));  // ghi du lieu vao tep
  	f.close();
  	// Doc du lieu
	f.open("nv.dat", ios::in | ios::binary);  
	if(!f)			
	{	cout <<"Khong the mo duoc tep tin "<<f<< endl; 	
		exit(1);
	}
	f.read((char *)(nv), sizeof(nv)); //doc du lieu tu tep ghi ra mang b
	//in mang b ra man hinh
	xuat_tennv(nv,n);
	cout << endl;
	f.close();    
	return 0;
}