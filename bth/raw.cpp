#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
using namespace std;
typedef struct
{
	char masv[20];
	char tensv[20];
	int year;
	bool gioi_tinh;
	float tbcn;
	float hoc_bong; 
}sv;
//2
void nhap_sv(sv a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"nhap thong tin sinh vien thu : "<<i+1<<endl;
		cin.ignore();
		cout<<"ma sinh vien : ";cin.getline(a[i].masv, 20);
		cout<<"ten sinh vien : ";cin.getline(a[i].tensv, 20);
		cout<<"nam sinh : ";cin>>a[i].year;
		cout<<"gioi tinh (nam: 1, nu: 0) : ";cin>>a[i].gioi_tinh;
		cout<<"diem trung binh : ";cin>>a[i].tbcn; 
	}
}
//3
void hoc_bong(sv a[], int n)
{
	for (int i=0; i<n; i++)
	{
		if(a[i].tbcn >= 9.0 )
		a[i].hoc_bong = 8000;
			else
			if(a[i].tbcn >= 8.0 )
			a[i].hoc_bong = 5000;
				else
				if(a[i].tbcn >= 7.0 )
				a[i].hoc_bong = 3000;
					else 
					a[i].hoc_bong = 0;
	}
}
//4
void in_sv(sv a[], int n)
{
	hoc_bong(a,n);
	cout<<"-------------------------------------------------------------- DANH SACH SINH VIEN -------------------------------------------------------------------"<<endl;
	cout<<setw(20)<<"ma sinh vien"<<"|"<<setw(25)<<"Ten sinh vien"<<"|";
	cout<<setw(20)<<"nam sinh"<<"|"<<setw(20)<<"gioi tinh"<<"|";
	cout<<setw(20)<<"diem trung binh"<<"|"<<setw(15)<<"hoc bong"<<"|"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
	{
	cout<<setw(20)<<a[i].masv<<"|"<<setw(25)<<a[i].tensv<<"|";
	cout<<setw(20)<<a[i].year<<"|"<<setw(20)<<boolalpha<<a[i].gioi_tinh<<"|";
	cout<<setw(20)<<a[i].tbcn<<"|"<<setw(15)<<a[i].hoc_bong<<"|"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	}
}
//5
void tbcnnu_max(sv a[], int n)
{
	float max=a[0].tbcn;
	int vitri=0;
    for(int i=1;i<n;i++)
        if(  max < a[i].tbcn)
		{
            max = a[i].tbcn;
            vitri =i;
        }
    hoc_bong(a,n);    
    cout<<"--------------------------------------------------------- SINH VIEN NU CO TBCN CAO NHAT --------------------------------------------------------------"<<endl;
	cout<<setw(20)<<"ma sinh vien"<<"|"<<setw(25)<<"Ten sinh vien"<<"|";
	cout<<setw(20)<<"nam sinh"<<"|"<<setw(20)<<"gioi tinh"<<"|";
	cout<<setw(20)<<"diem trung binh"<<"|"<<setw(15)<<"hoc bong"<<"|"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
		if((a[i].gioi_tinh == false) && (a[i].tbcn == max))
		{
		cout<<setw(20)<<a[i].masv<<"|"<<setw(25)<<a[i].tensv<<"|";
		cout<<setw(20)<<a[i].year<<"|"<<setw(20)<<boolalpha<<a[i].gioi_tinh<<"|";
		cout<<setw(20)<<a[i].tbcn<<"|"<<setw(15)<<a[i].hoc_bong<<"|"<<endl;
		cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
		}     
}
//6
void sxepgiam_tbcn(sv a[], int n)
{
	for(int i=0; i<n; i++)
		for (int j=i+1; j<n+1; j++)
			if(a[i].tbcn < a[j].tbcn)
			{	
				sv tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
	cout<<"Danh sach sau khi sap xep : "<<endl;		
	in_sv(a,n);		
}
//7
void them_sv(sv a[], int n) {
	n++;
	cout<<"nhap thong tin sinh vien muon them : "<<endl;
	cin.ignore();
	cout<<"ma sinh vien : ";cin.getline(a[n-1].masv, 20);
	cout<<"ten sinh vien : ";cin.getline(a[n-1].tensv, 20);
	cout<<"nam sinh : ";cin>>a[n-1].year;
	cout<<"gioi tinh (nam: 1, nu: 0) : ";cin>>a[n-1].gioi_tinh;
	cout<<"diem trung binh : ";cin>>a[n-1].tbcn; 
	sxepgiam_tbcn(a,n);
}
//8
void xoa_sv(sv a[],int n)
{	
	char xoa[20];
	int dem=0;
	cin.ignore();
	cout<<"nhap ma sinh vien can xoa: ";
	cin.getline(xoa,20);
	for (int i = 0; i < n; i++)
	{
		
		if (strcmp(a[i].masv, xoa) == 0) 
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
	sxepgiam_tbcn(a,n);	
}
//9
int main()
{
	sv a[100];
	sv b[100];
	int n;
	fstream f;
	int exit = 0;
	char tt ;
	while(exit == 0)
	{
		cout<<"------------------------------------- MENU ------------------------------------------"<<endl;
		cout<<" 1.Nhap danh sach sinh vien !"<<endl;
		cout<<" 2.Tinh hoc bong !"<<endl;
		cout<<" 3.In danh sach sinh vien !"<<endl;
		cout<<" 4.In thong tin sinh vien nu cos diem trung binh cao nhat !"<<endl;
		cout<<" 5.Sap xep danh sach sinh vien giam dan theo diem trung binh ca nam !"<<endl;
		cout<<" 6.Them vao danh sach mot sinh vien !"<<endl;
		cout<<" 7.Xoa khoi danh sach mot sinh vien !"<<endl;
		cout<<" 8.Luu danh sach nhan vien ra tep sinhvien.dat !"<<endl;
		cout<<" 9.Doc danh sach nhan vien ra tu tep sinhvien.dat va ket xua thong tin ra man hinh !"<<endl;
		cout<<"10. Thoat chuong trinh"<<endl; 
		cout<<"*************************************************************************************"<<endl;
		cout <<"nhap cong viec muon lam : ";cin>>tt;
		system ("cls");
		switch(tt)
		{
			case '1':
			{
				cout<<"nhap vao so sinh vien mong muon : ";cin>>n;
				nhap_sv(a,n);
			}
			break;
			case '2':
			{
				hoc_bong(a,n);
				cout<<"-------------------------------- HOC BONG -------------------------------------"<<endl;
				cout<<setw(20)<<"ma sinh vien"<<"|"<<setw(20)<<"trung binh ca nam"<<"|"<<setw(20)<<"hoc bong"<<"|"<<endl;
				for ( int i=0; i<n; i++)
				{
					cout<<setw(20)<<a[i].masv<<"|"<<setw(20)<<a[i].tbcn<<"|"<<setw(20)<<a[i].hoc_bong<<"|"<<endl;
				}
			}
			break;
			case '3': 
			{
				in_sv(a,n);
			}
			break;
			case '4':
			{
				tbcnnu_max(a, n);
			}
			break;
			case '5':
			{
				sxepgiam_tbcn(a,n);
			}
			break;	
			case '6':
			{
				them_sv(a,n);
			}
			break;
			case '7':
			{
				xoa_sv(a,n);
			}
			break;
			case '8':
			{
				f.open("sinhvien.dat", ios::out | ios::binary);
			   	if(!f)			
			   	{   cout <<"Khong the tao duoc tep tin "<< f <<endl; 	
				   	return 1;
			   	}
				f.write((char *)(a), sizeof(a));  // ghi du lieu vao tep
			  	f.close();
			}
			break;
			case '9':
			{
				f.open("sinhvien.dat", ios::in | ios::binary);  
				if(!f)			
				{	cout <<"Khong the mo duoc tep tin "<<f<< endl; 	
					return 1;
				}
				f.read((char *)(b), sizeof(b)); //doc du lieu tu tep ghi ra mang b
				hoc_bong(b,n);
				cout<<"-------------------------------- HOC BONG -------------------------------------"<<endl;
				cout<<setw(20)<<"ma sinh vien"<<"|"<<setw(20)<<"trung binh ca nam"<<"|"<<setw(20)<<"hoc bong"<<"|"<<endl;
				for ( int i=0; i<n; i++)
				{
					cout<<setw(20)<<b[i].masv<<"|"<<setw(20)<<b[i].tbcn<<"|"<<setw(20)<<b[i].hoc_bong<<"|"<<endl;
				}
				in_sv(b,n);
				cout << endl<< endl;;
				f.close();
			}
			break;
			case '10':	
			{
				exit = 1;
				cout<<"Bam ENTER de thoat chuong trinh !!!\n";
			}
			break;	
		};
	}
}