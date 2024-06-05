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
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
	{
	cout<<setw(20)<<a[i].masv<<"|"<<setw(25)<<a[i].tensv<<"|";
	cout<<setw(20)<<a[i].year<<"|"<<setw(20)<<boolalpha<<a[i].gioi_tinh<<"|";
	cout<<setw(20)<<a[i].tbcn<<"|"<<setw(15)<<a[i].hoc_bong<<"|"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	}
}
//5
void tbcnnu_max(sv a[], int n)
{
	float max=a[0].tbcn;
	int vitri=0;
    for(int i=1;i<n;i++)
        if( max < a[i].tbcn)
		{
            max = a[i].tbcn;
            vitri =i;
        }
    cout<<"----------------------------------------------------------- SINH VIEN NU CO TBCN CAO NHAT ----------------------------------------------------------------"<<endl;
	cout<<setw(20)<<"ma sinh vien"<<"|"<<setw(25)<<"Ten sinh vien"<<"|";
	cout<<setw(20)<<"nam sinh"<<"|"<<setw(20)<<"gioi tinh"<<"|";
	cout<<setw(20)<<"diem trung binh"<<"|"<<setw(15)<<"hoc bong"<<"|"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
	if(a[i].gioi_tinh == false && a[i].tbcn == max)
	{
	cout<<setw(20)<<a[i].masv<<"|"<<setw(25)<<a[i].tensv<<"|";
	cout<<setw(20)<<a[i].year<<"|"<<setw(20)<<boolalpha<<a[i].gioi_tinh<<"|";
	cout<<setw(20)<<a[i].tbcn<<"|"<<setw(15)<<a[i].hoc_bong<<"|"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
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
	in_sv(a,n);		
}
//7
void them_sv(sv a[], int n) {
	sv them;
	cout<<"nhap thong tin sinh vien muon them : "<<endl;
		cin.ignore();
		cout<<"ma sinh vien : ";cin.getline(them.masv, 20);
		cout<<"ten sinh vien : ";cin.getline(them.tensv, 20);
		cout<<"nam sinh : ";cin>>them.year;
		cout<<"gioi tinh (nam: 1, nu: 0) : ";cin>>them.gioi_tinh;
		cout<<"diem trung binh : ";cin>>them.tbcn; 
	int x;
	bool b = false;
	for(int i = 0 ; i < n; i++) 
	{
		if(a[i].tbcn > them.tbcn && a[i + 1].tbcn <=them.tbcn) 
		{
			x = i + 1;
			b = true;
		}
	}
	if(b == false) 
	{
		x = n;
	}
	n++;
	for(int i = n - 1; i > x; i--) 
	{
		a[i] = a[i - 1];
	}
	a[x] = them;
	in_sv(a, n);
}
//8
void xoa_sv(sv a[],int n)
{	string x=" ";
	cin.ignore();
	cout<<" nhap ma cua sinh vien can xoa la: ";
	getline(cin, x);
		for(int i=0;i<n;i++)
		{
			if(a[i].masv == x)
			{
				a[i]=a[i+1];	
				n--;
			}
		} 
	in_sv(a, n);	
}

//9
void ghi_tep(fstream &file_write, sv a[], int n)
{
	file_write.write((char*)(a), sizeof(a));
	in_sv(a, n);
	cout<<" ghi tep thanh cong \n";
}
//10
void doc_tep(fstream &file_read, sv a[], int n)
{
	file_read.read((char*)(a), sizeof(a));
	in_sv(a, n);
	cout<< "doc tep thanh cong \n";
}
int main()
{
	sv a[100], b[100];
	int n;
	sv x;
	int exit = 0;
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
		char tt;
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
				tbcnnu_max(a,n);
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
				cout<<"Ghi tep\n";
				std::fstream f_b_write("sinhvien.dat", ios::out|ios::binary);
				if(!f_b_write)
				{
					cout<<"mo tep bi loi \n";
					system("pause");
				}
				else
				{
					ghi_tep(f_b_write,a,n);
					f_b_write.close();
				}
			}
			break;
			case '9':
			{
				cout<<"Doc tep\n";
				std::fstream f_b_read("sinhvien.dat",ios::in|ios::binary);
				if(!f_b_read)
				{
					cout<<"mo tep bi loi \n";
					system ("pause");
				}
				else
				{
					doc_tep(f_b_read,a,n);
					f_b_read.close();
				}
			}
			break;
			case '10':
			{
				exit=1;
				cout<<"Bam ENTER de thoat chuong trinh !!!\n";
			}
			break;	
		}
	}
	return 0;
}
