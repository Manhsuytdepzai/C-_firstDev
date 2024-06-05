#include <iostream.h>
#include <iomanip.h>
#include <string.h>
#include <fstream.h>

typedef struct
{
	char	mahang[10];
	char	tenhang[20];
	char	donvitinh[15];
	float	dongia;
	int 	soluong;
	float 	thanhtien;
	float 	thueVAT;
} hanghoa;

void nhap_hanghoa (hanghoa hh[],int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap san pham thu :"<<i+1<<endl;
		cin.ignore();
		cout<<"Nhap ma hang :";cin.getline(hh[i].mahang,10);
		cout<<"Nhap ten hang :";cin.getline(hh[i].tenhang,20);
		cout<<"Nhap don vi tinh :";cin.getline(hh[i].donvitinh,15);
		cout<<"Nhap don gia :";cin>>hh[i].dongia;
		cout<<"Nhap so luong :";cin>>hh[i].soluong;
		cout<<endl;
	 }
}

void xuat_hanghoa (hanghoa hh[],int n)
{
	cout<<"-------------------------------------------------------------- DANH SACH HANG HOA -----------------------------"<<endl;
	cout<<setw(10)<<"Ma Hang"<<"|"<<setw(20)<<"Ten Hang"<<"|";
	cout<<setw(11)<<"Don vi tinh"<<"|"<<setw(20)<<"Don Gia"<<"|";
	cout<<setw(10)<<"So luong"<<"|"<<setw(15)<<"Thanh Tien"<<"|";
	cout<<setw(15)<<"Thue VAT"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n ;i++)
	{
		cout<<setw(10)<<hh[i].mahang<<"|"<<setw(20)<<hh[i].tenhang<<"|";
		cout<<setw(11)<<hh[i].donvitinh<<"|"<<setw(20)<<hh[i].dongia<<"|";
		cout<<setw(10)<<hh[i].soluong<<"|"<<setw(15)<<hh[i].thanhtien<<"|";
		cout<<setw(15)<<hh[i].thueVAT<<"|"<<endl;
	}	
	cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
}

void tinh_thanhtien (hanghoa hh[],int n)
{
	for(int i=0; i<n; i++) {
		hh[i].thanhtien = hh[i].dongia * hh[i].soluong;
	}
}	

void tinh_thueVAT (hanghoa hh[],int n)
{
	for(int i=0; i<n; i++) {
		hh[i].thueVAT = hh[i].thanhtien * 10 / 100;
	}
}

void sap_xep_giam_theo_thueVAT ( hanghoa hh[], int n)
{
	for(int i=0; i<n; i++)
		for (int j=i+1; j<n+1; j++)
			if(hh[i].thueVAT < hh[j].thueVAT)
			{	hanghoa tg = hh[i];
				hh[i] = hh[j];
				hh[j] = tg;
				}
 
 	xuat_hanghoa ( hh , n );
}

void in_thongtin_hhmin ( hanghoa hh[], int n)
{
	int min = hh[0].soluong;
	for (int i=1; i<n; i++ )
 		if(min < hh[i].soluong){
 			min = hh[i].soluong;
 		}
 		xuat_hanghoa ( hh ,n);
}

void them_hh(hanghoa hh[], int &n)
{
    n++;
    cout<<"Nhap thong tin hang hoa muon them :"<<endl;
    cin.ignore ();
    cout<<"Nhap ma hang :"; cin.getline(hh[n-1].mahang,10);
    cout<<"Nhap ten hang :"; cin.getline(hh[n-1].tenhang,25);
    cout<<"Nhap don vi tinh :"; cin.getline(hh[n-1].donvitinh,15);
    cout<<"Nhap don gia :"; cin>>hh[n-1].dongia;
    cout<<"Nhap so luong :"; cin>>hh[n-1].soluong;
    tinh_thanhtien(hh,n);
    tinh_thueVAT (hh,n);
    sap_xep_giam_theo_thueVAT(hh,n);
}

void xoa(hanghoa hh[], int &n)
{
	float dg;
	int dem = 0;
	cin.ignore();
	cout << "nhap dg mong muon"; 
	cin >> dg;
	for(int i = 0; i < n; i++) {
		if(hh[i].dongia > dg) 
		{
			dem++;
		}
	}
	for(int i = 0; i < dem; i++) {
		for(int j = 0; j < n; j++) {
			if(hh[j].dongia > dg) {
				hanghoa temp = hh[j];
				hh[j] = hh[j + 1];
				hh[j + 1] = temp;
			}
		}
	}
	n -= dem;
	xuat_hanghoa(hh, n);		
}

int main()
{	
	hanghoa 	hh[100], ch[100];
	int n;		
	float dg;
	int exit = 0;
	int op = 0;
	while (exit==0)
	{
	cout<<"*-------------------------- MENU ----------------------------*\n";
	cout<<"| 1. Nhap du lieu hang hoa :                                 |\n";
	cout<<"| 2. Tinh cot thanh tien :                                   |\n";
	cout<<"| 3. Tinh cot Thue VAT :                                     |\n";
	cout<<"| 4. In danh sach thong tin cac mat hang :                   |\n";
	cout<<"| 5. Sap xep cac mat hang :                                  |\n";
	cout<<"| 6. In thong tin cuon sach co thuc tien lon nhat :          |\n";
	cout<<"| 7. Them vao danh sach mat hang :                           |\n";
	cout<<"| 8. Xoa khoi danh sach cac cuon sach co thue VAT > he so :  |\n";
	cout<<"| 9. Luu danh sach vao tep sales.dat!!!                      |\n";           
	cout<<"| 10. Doc danh sach cac mat hang tu tep sales.dat va xuat!!  |\n";
	cout<<"| 11. Chua co OPTION!!                                       |\n";                   
	cout<<"| 12. Thoat chuong trinh!!                                   |\n";
	cout<<"*------------------------------------------------------------*\n\n";
	cout<<"Nhap lua chon can thuc hien :";
	cin>> op;
	
	system ("cls");
	switch(op)
	{
	case 1: /////////////////
			cout<<"Nhap vao so hoang hoa: ";cin>>n;
			cout<<"Nhap du lieu hang hoa!!\n";
			nhap_hanghoa(hh,n);
			cout <<" Da nhap thong tin thanh cong\n";
			break;
	case 2: /////////////////   
			cout<<"Tinh cot thanh tien \n";
			tinh_thanhtien(hh, n);
			cout<<"Tinh cot thanh tien xong !!!\n";
			break;
	case 3://///////////////   
			cout<<"Tinh cot thue VAT \n";
			tinh_thueVAT (hh,n);
			cout	<<" Tinh cot thue VAT xong !!!!\n";
			break;
	case 4://///////////////
			cout<<" Xuat du lieu hang hoa!!\n";   
			xuat_hanghoa (hh,n);
			cout	<<" Xuat danh sach hang hoa xong !!!!\n";
			break;
	case 5:////////////////
			cout<<"Sap xep cac mat hang theo thu tu giam dan ve Thue hang hoa!!\n";
			sap_xep_giam_theo_thueVAT(hh, n);
			cout	<<" Da sap xep xong !!!!\n";
			break;
	case 6:///////////////
			cout<<"In thong tin mat hang có so luong nho nhat!!\n";
	   		in_thongtin_hhmin(hh,n);
	        cout<<" In thong tin mat hang có so luong nho nhat xong!!!!\n";
			break;
	case 7:///////////////
			them_hh(hh,n);
			cout<<" Da them vao mat hang!!!\n";
			break;
	case 8:///////////////
			xoa(hh,n);
			cout<<" Da bo mat hang!!!\n";
			break;				
	case 9:///////////////
	// Ghi du lieu
	{
		 ofstream f;
		 f.open("sales.dat", ios::out | ios::binary);
    		if(!f)			
    		{   cout <<"Khong the tao duoc tep tin "<< f <<endl; 	
	 	   	return 1;
    		}
		 	f.write((char *)(ch), sizeof(ch));  // ghi du lieu vao tep
   			f.close();
	}
			break;
	case 10://////////////
	{
		ifstream f;
		f.open("sales.dat", ios::in | ios::binary);  
	 	if(!f)			
		 {
		 	cout <<"Khong the mo duoc tep tin "<<f<< endl; 	
	 		return 1;
 		 }
		 f.read((char *)(ch), sizeof(ch)); //doc du lieu tu tep ghi ra mang b
		 //in mang b ra man hinh
		 xuat_hanghoa(ch,n);
		 cout << endl;
		 f.close(); 
	}
	break;
	case 11:////////////// 
			break;		
	case 12:////////////// 
		exit =1;
		cout<<"Bam ENTER de thoat chuong trinh !!!\n";
			break;				
	}
}}		