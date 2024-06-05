#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>

typedef  struct
{
	char mabook[10];
	char ten_book[25];
	char tacgia[20];
	char nhaxb[20];
	int namxb;
	int dongia;
	int soluong;
	float thanhtien;
	double thueVAT;
	double thuctien;
} thuvien;
void nhap_thuvien (thuvien a[], int n )
{
	for(int i=0; i<n ;i++)
	{
		cout<<"Nhap thong tin sach thu :"<<1+i<<endl;
		cin.ignore ();
		cout<<"Nhap ma Book :"; cin.getline(a[i].mabook,10);
		cout<<"Nhap ten Book :"; cin.getline(a[i].ten_book,25);
		cout<<"Nhap ten tac gia :"; cin.getline(a[i].tacgia,25);
		cout<<"Nhap nha xuat ban :"; cin.getline(a[i].nhaxb,25);
		cout<<"Nhap nam xuat ban :"; cin>>a[i].namxb;
		cout<<"Nhap don gia :"; cin>>a[i].dongia;
		cout<<"Nhap so luong :"; cin>>a[i].soluong;
		cout<<"Nhap thue VAT :"; cin>>a[i].thueVAT;
	}	
}		
void xuat_thuvien (thuvien a[] , int n )		
{
	cout<<"-------------------------------------------------------------- DANH SACH THU VIEN -------------------------------------------------------------------"<<endl;
	cout<<setw(10)<<"Ma book"<<"|"<<setw(25)<<"Ten book"<<"|";
	cout<<setw(20)<<"Ten tac gia"<<"|"<<setw(20)<<"Nha XB"<<"|";
	cout<<setw(6)<<"Nam XB"<<"|"<<setw(15)<<"Don gia"<<"|";
	cout<<setw(10)<<"So luong"<<"|"<<setw(15)<<"Thue VAT"<<"|";
	cout<<setw(20)<<"Thanh tien"<<"|"<<setw(20)<<"Thuc tien"<<"|"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n ;i++)
	{
		cout<<setw(10)<<a[i].mabook<<"|"<<setw(25)<<a[i].ten_book<<"|";
		cout<<setw(20)<<a[i].tacgia<<"|"<<setw(20)<<a[i].nhaxb<<"|";
		cout<<setw(6)<<a[i].namxb<<"|"<<setw(15)<<a[i].dongia<<"|";
		cout<<setw(10)<<a[i].soluong<<"|"<<setw(15)<<a[i].thueVAT<<"|";
		cout<<setw(20)<<a[i].thanhtien<<"|"<<setw(20)<<a[i].thuctien<<"|"<<endl;
	}	
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}		
void tinh_thanhtien (thuvien a[], int n)
{
	for(int i=0; i<n; i++)
	a[i].thanhtien = a[i].dongia * a[i].soluong;
}
void tinh_thuctien (thuvien a[], int n)
{
	for(int i=0; i<n; i++)
	a[i].thuctien = a[i].thanhtien + a[i].thueVAT;
}
void sap_xep_giam_theo_namxb ( thuvien a[], int n)
{
	for(int i=0; i<n; i++)
		for (int j=i+1; j<n+1; j++)
			if(a[i].namxb < a[j].namxb)
			{	thuvien tg = a[i];
				a[i] = a[j];
				a[j] = tg;
				}
 
 	xuat_thuvien ( a , n );
}
void thuc_tien_max ( thuvien a[], int n)
{
	double max = a[0].thuctien;
	int vitri = 0;
	for (int i=1; i<n; i++ )
 		if(max < a[i].thuctien){
 			max = a[i].thuctien;
 			vitri = i ;
 		}
 		cout<<"-------------------------------------------------------- DANH SACH THU VIEN MAX -----------------------------------------------------------------"<<endl;
	cout<<setw(10)<<"Ma book"<<"|"<<setw(25)<<"Ten book"<<"|";
	cout<<setw(20)<<"Ten tac gia"<<"|"<<setw(20)<<"Nha XB"<<"|";
	cout<<setw(6)<<"Nam XB"<<"|"<<setw(15)<<"Don gia"<<"|";
	cout<<setw(10)<<"So luong"<<"|"<<setw(15)<<"Thue VAT"<<"|";
	cout<<setw(20)<<"Thanh tien"<<"|"<<setw(20)<<"Thuc tien"<<"|"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n ;i++)
		if(max == a[i].thuctien)
	{
		cout<<setw(10)<<a[i].mabook<<"|"<<setw(25)<<a[i].ten_book<<"|";
		cout<<setw(20)<<a[i].tacgia<<"|"<<setw(20)<<a[i].nhaxb<<"|";
		cout<<setw(6)<<a[i].namxb<<"|"<<setw(15)<<a[i].dongia<<"|";
		cout<<setw(10)<<a[i].soluong<<"|"<<setw(15)<<a[i].thueVAT<<"|";
		cout<<setw(20)<<a[i].thanhtien<<"|"<<setw(20)<<a[i].thuctien<<"|"<<endl;
	}	
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}
void tong_cuon_sach (thuvien a[] , int n )
{
	int Tong =0;
	for (int i=0;i<n;i++)
	Tong += a[i].soluong;
}		
void xuat_theo_hs (thuvien a[] , int n ,float hs)		
{
	cout<<"--------------------------------------------------- DANH SACH CAC CUON SACH CO THUE VAT CAO ---------------------------------------------------------"<<endl;
	cout<<setw(10)<<"Ma book"<<"|"<<setw(25)<<"Ten book"<<"|";
	cout<<setw(20)<<"Ten tac gia"<<"|"<<setw(20)<<"Nha XB"<<"|";
	cout<<setw(6)<<"Nam XB"<<"|"<<setw(15)<<"Don gia"<<"|";
	cout<<setw(10)<<"So luong"<<"|"<<setw(15)<<"Thue VAT"<<"|";
	cout<<setw(20)<<"Thanh tien"<<"|"<<setw(20)<<"Thuc tien"<<"|"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n ;i++)
		if(a[i].thueVAT > hs) 
	{
		cout<<setw(10)<<a[i].mabook<<"|"<<setw(25)<<a[i].ten_book<<"|";
		cout<<setw(20)<<a[i].tacgia<<"|"<<setw(20)<<a[i].nhaxb<<"|";
		cout<<setw(6)<<a[i].namxb<<"|"<<setw(15)<<a[i].dongia<<"|";
		cout<<setw(10)<<a[i].soluong<<"|"<<setw(15)<<a[i].thueVAT<<"|";
		cout<<setw(20)<<a[i].thanhtien<<"|"<<setw(20)<<a[i].thuctien<<"|"<<endl;
	}	
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}	

void them_tv(int n, thuvien tv[]) {
	thuvien them;
	cout << "nhap thong cuon sach muon them:" << endl;
	cin.ignore();
	cout<<"Nhap ma Book :"; cin.getline(them.mabook,10);
	cout<<"Nhap ten Book :"; cin.getline(them.ten_book,25);
	cout<<"Nhap ten tac gia :"; cin.getline(them.tacgia,25);
	cout<<"Nhap nha xuat ban :"; cin.getline(them.nhaxb,25);
	cout<<"Nhap nam xuat ban :"; cin>>them.namxb;
	cout<<"Nhap nam don gia :"; cin>>them.dongia;
	cout<<"Nhap so luong :"; cin>>them.soluong;
	cout<<"Nhap thue VAT :"; cin>>them.thueVAT;
	them.thanhtien = them.dongia * them.soluong;
	them.thuctien = them.thanhtien + them.thueVAT;
	int a;
	bool b = false;
	for(int i = 0 ; i < n; i++) {
		if(tv[i].namxb > them.namxb && tv[i + 1].namxb <=them.namxb) {
			a = i + 1;
			b = true;
		}
	}
	if(b == false) {
		a = n;
	}
	n++;
	for(int i = n - 1; i > a; i--) {
		tv[i] = tv[i - 1];
	}
	tv[a] = them;
	xuat_thuvien(tv, n);
}

int main()
{	thuvien 	tv[100], ch[100];
	int n;		//n la so cuon sach
	float hs;
	cout<<"Nhap vao so cuon sach vien: ";cin>>n;
	nhap_thuvien(tv,n);	//nhap vao thong tin cua n nhan vien
	tinh_thanhtien(tv,n);
	tinh_thuctien (tv,n);
	xuat_thuvien (tv,n);
	cout<<"Bang theo nam thu tu giam dan cua nam xuat ban  "<<endl;
	sap_xep_giam_theo_namxb (tv,n);
	thuc_tien_max (tv,n);
	cout<<"nhap He So VAT mong muon :";cin>>hs;
	xuat_theo_hs (tv,n,hs);
	cout<<"Tong so cuon sach la :"<<endl;
	tong_cuon_sach (tv ,n);
	
	// Ghi du lieu
	fstream f;
	f.open("book.s", ios::out | ios::binary);
   	if(!f)			
   	{   cout <<"Khong the tao duoc tep tin "<< f <<endl; 	
	   	exit(1);
   	}
	f.write((char *)(tv), sizeof(tv));  // ghi du lieu vao tep
  	f.close();
  	// Doc du lieu
	f.open("book.s", ios::in | ios::binary);  
	if(!f)			
	{	cout <<"Khong the mo duoc tep tin "<<f<< endl; 	
		exit(1);
	}
	f.read((char *)(ch), sizeof(ch)); //doc du lieu tu tep ghi ra mang b
	//in mang b ra man hinh
	xuat_thuvien(ch,n);
	cout << endl;
	f.close();  
	them_tv(n, tv);

	return 0;
}		 	