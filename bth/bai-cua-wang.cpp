#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
using namespace std;

typedef struct
{
	char maho[10];
	char tenho[20];
	int thanhvien;
	float thu_nhap;
	bool ho_ngheo;
	float tro_cap; 
}quanli;




void nhap(quanli a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"nhap thong tin sinh vien thu : "<<i+1<<endl;
		cin.ignore();
		cout<<"ma ho : ";cin.getline(a[i].maho,10);
		cout<<"ten chu ho : ";cin.getline(a[i].tenho,20);
		cout<<"thanh vien : ";cin>>a[i].thanhvien;
		cout<<"thu nhap: ";cin>>a[i].thu_nhap;
		cout<<"ho ngheo(co: 1, khong: 0) ";cin>>a[i].ho_ngheo; 
	}
}

void trocap(quanli a[], int n)
{
	for (int i=0; i<n; i++)
	{
		if(a[i].ho_ngheo == true && a[i].thanhvien >= 5 )
		a[i].tro_cap = 1000;
			else
			if(a[i].ho_ngheo == true && a[i].thanhvien >= 3  )
			a[i].tro_cap = 800;
				else
				if(a[i].ho_ngheo == true && a[i].thanhvien >= 1 )
				a[i].tro_cap = 500;
					else 
					a[i].tro_cap = 0;
	}
}

void xuat(quanli a[], int n)
{
	trocap(a,n);
	cout<<"-------------------------------------------------------------- DANH SACH HO DAN -------------------------------------------------------------------"<<endl;
	cout<<setw(10)<<"ma ho"<<"|"<<setw(20)<<"Ten chu ho"<<"|";
	cout<<setw(10)<<"thanh vien"<<"|"<<setw(10)<<"thu nhap"<<"|"<<setw(10)<<"ho ngheo"<<"|";
	cout<<setw(15)<<"tro cap"<<"|"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
	{
	cout<<setw(10)<<a[i].maho<<"|"<<setw(20)<<a[i].tenho<<"|";
	cout<<setw(10)<<a[i].thanhvien<<"|"<<setw(10)<<a[i].thu_nhap<<"|"<<setw(10)<<boolalpha<<a[i].ho_ngheo<<"|";
	cout<<setw(15)<<a[i].tro_cap<<"|"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	}
}


void thu_nhap_min(quanli a[], int n)
{
	float Min = a[0].thu_nhap;
	for (int i=1; i<n; i++ )
 		if(Min > a[i].thu_nhap)
	 	{
 			Min = a[i].thu_nhap;
 		}
		cout<<"-------------------------------------------------------------- DANH SACH HO DAN -------------------------------------------------------------------"<<endl;
		cout<<setw(10)<<"ma ho"<<"|"<<setw(20)<<"Ten chu ho"<<"|";
		cout<<setw(10)<<"thanh vien"<<"|"<<setw(10)<<"thu nhap"<<"|"<<setw(10)<<"ho ngheo"<<"|";
		cout<<setw(15)<<"tro cap"<<"|"<<endl;
		cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		for (int i=0; i<n; i++)
		if(Min == a[i].thu_nhap)
		{
		cout<<setw(10)<<a[i].maho<<"|"<<setw(20)<<a[i].tenho<<"|";
		cout<<setw(10)<<a[i].thanhvien<<"|"<<setw(10)<<a[i].thu_nhap<<"|"<<setw(10)<<boolalpha<<a[i].ho_ngheo<<"|";
		cout<<setw(15)<<a[i].tro_cap<<"|"<<endl;
		cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		}
}


void xap_xep_giam(quanli a[], int n)
{
	for(int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if(a[i].thanhvien < a[j].thanhvien)
			{	quanli tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
 	xuat(a,n);
}


void them(quanli a[], int &n)
{
	n++;
	cout<<"Nhap thong tin ho dan muon them :"<<endl;
	cin.ignore ();
	cout<<"Nhap ma ho :"; cin.getline(a[n-1].maho,10);
	cout<<"Nhap ten ho :"; cin.getline(a[n-1].tenho,20);
	cout<<"Nhap so thanh vien :"; cin>>a[n-1].thanhvien;
	cout<<"Nhap thu nhap :"; cin>>a[n-1].thu_nhap;
	cout<<"Nhap ho ngheo(co: 1, khong: 0): "; cin>>a[n-1].ho_ngheo;
	trocap(a,n);
	xap_xep_giam(a,n);
}


void xoa(quanli a[], int &n){
	char tenchuho[10];
	int dem=0;
	cin.ignore();
	cout<<"nhap ten chu ho can xoa: ";
	cin.getline(tenchuho,10);
	for (int i = 0; i < n; i++)
	{
		
		if (strcmp(a[i].tenho, tenchuho) == 0) 		//cach so sanh 2 sau
			{
				dem = 1;
				for(int j = i; j < n-1; j++)
				{
					a[j] = a[j+1];
				}
				n --;		//n giam de ko gan ptu phia sau no
				i--;	//i-- de duyet tu ptu 0 
			}	
	}
}

int main()
{
	quanli a[100], b[100];
	int n;   
	fstream f;   
	int exit = 0;
	int op = 0;
	while (exit==0)
	{
	cout<<"*===========================MENU============================*"<<endl;
	cout<<"|"<<"1. Nhap du lieu:"<<"                                           |"<<endl;
	cout<<"|"<<"2. Tinh tro cap:"<<"                                           |"<<endl;
	cout<<"|"<<"3. In danh sach thong tin cac ho dan:"<<"                      |"<<endl;
	cout<<"|"<<"4. In thong tin cac ho dan co thu nhap nho nhat:"<<"           |"<<endl;
	cout<<"|"<<"5. Xap xep cac ho dan giam dan ve so thanh vien:"<<"           |"<<endl;   
	cout<<"|"<<"6. Them vao danh sach ho dan:"<<"                              |"<<endl;
	cout<<"|"<<"7. Xoa khoi danh sach ho dan co ten chu ho la ten"<<"          |"<<endl;
	cout<<"|"<<"8. Luu danh sach ra tep ho_dan.dat: "<<"                       |"<<endl;
	cout<<"|"<<"9. Doc danh sach cac ho dan tu tep va in ra man hinh"<<"       |"<<endl;                                        
	cout<<"|"<<"10. Thoat chuong trinh!!"<<"                                   |"<<endl;
	cout<<"*===========================================================*"<<endl<<endl;
	cout<<"\n\n nhap cong viec muon lam: \n\n";
	cin>> op;
	
	system ("cls");
	switch(op)
	{
	case 1: /////////////////
			cout<<"1. Nhap du lieu!!\n";
			cout<<"nhap so ho dan: "; cin>>n;
			nhap(a,n);
				cout <<" Da nhap thong tin thanh cong\n\n";
				cout<<"---------------------------------------------------------------------\n";
				break;
	case 2://///////////////   
			trocap(a, n);
				cout	<<" tinh tro cap xong !!!!\n";
				cout<<"---------------------------------------------------------------------\n";
				break;
	case 3: /////////////////   
		cout<<"In danh sach ho dan \n";
			xuat(a,n);
				cout<<" Xuat danh sach thanh cong\n";
				cout<<"---------------------------------------------------------------------\n";
				break;
	
	case 4:////////////////
			thu_nhap_min(a, n);
			cout	<<" Da tinh thu nhap xong !!!!\n";
			cout<<"---------------------------------------------------------------------\n";
			break;
	case 5://///////////////   
	    		xap_xep_giam(a, n);
				cout	<<" Da xap xep xong !!!!\n";
				cout<<"---------------------------------------------------------------------\n";
			break;
	
	case 6:////////////////
			them(a,n);
			cout<<" Da them ho dan!!!\n";
			cout<<"---------------------------------------------------------------------\n";
			break;
	case 7:////////////////
			xoa(a,n);
			cout<<" Da xoa ho dan!!!\n";
			cout<<"---------------------------------------------------------------------\n";
			break;
	case 8:////////////////
		{
			ofstream f;
			f.open("ho_dan.dat", ios::out | ios::binary);
			if(!f)			
				{   
					cout <<"Khong the tao duoc tep tin "<< f <<endl; 	
			  		return 1;
		   		}
				f.write((char *)(a), sizeof(a));  // ghi du lieu vao tep
				f.close();
		}
		cout<<"\n luu danh sach ra tep thanh cong!!! \n\n";
		break;
	case 9://////////////
		{
			ifstream f;
			f.open("ho_dan.dat", ios::in | ios::binary); 		//doc du lieu  
			if(!f)			
			{	
				cout <<"Khong the mo duoc tep tin "<<f<< endl; 	
				return 1;
			}
			f.read((char *)(b), sizeof(b)); //doc du lieu tu tep ghi ra mang b
				//in mang b ra man hinh
			xuat(b,n);
			cout << endl;
			f.close();
		}
		break;
	case 10: exit = 1;
		cout<<"Bam ENTER de thoat chuong trinh !!!\n";
			break;			
	};
}}