#include<iostream.h>
#include<iomanip.h>

typedef struct 
{
	char 	mavdv[5];
	char	tenvdv[25];
	int		tuoi;
	char	vitri[25];
	int		sohuychuong;
	float	thuong;
}	vandongvien;

void nhap_vdv ( vandongvien a[], int n)
{
	for ( int i=0; i<n; i++)
	{	cout<<"nhap thong tin van dong vien "<<i+1<<endl;
		cin.ignore();
		cout<<"nhap ma vdv: ";			cin.getline(a[i].mavdv,5);
		cout<<"nhap ten vdv: ";			cin.getline(a[i].tenvdv,25);
		cout<<"nhap tuoi vdv: ";		cin>>a[i].tuoi;
		cout<<"nhap vi tri: ";			cin.getline(a[i].vitri,25);
		cout<<"nhap so huy chuong: ";	cin>>a[i].sohuychuong;						
	}	
}

void xuat_vdv(vandongvien a[], int n)
{	cout<<"------------------------- DANH SACH CAC VAN DONG VIEN ----------------------"<<endl;
	cout<<setw(5)<<"Ma vdv"<<"|"<<setw(25)<<"Ten vdv"<<"|";
	cout<<setw(5)<<"Tuoi vdv"<<"|"<<setw(25)<<"Vi tri"<<"|";
	cout<<setw(10)<<"So huy chuong"<<"|"<<endl;
	for (int i=0; i<n; i++)
	{	cout<<setw(5)<<a[i].mavdv<<"|"<<setw(25)<<a[i].tenvdv<<"|";
		cout<<setw(5)<<a[i].tuoi<<"|"<<setw(25)<<a[i].vitri<<"|";
		cout<<setw(10)<<a[i].sohuychuong<<"|"<<endl;
	}
	cout<<"-------------------------------------------------------------------------"<<endl;
}

void tinh_thuong(vandongvien a[], int n)
{	for(int i=0; i<n; i++)
		if ( a[i].tuoi >= 30)
			a[i].thuong = a[i].sohuychuong * 800;
		else
			if ( a[i].tuoi >= 25)
				a[i].thuong = a[i].sohuychuong * 500;
			else
				if ( a[i].tuoi >= 20)	
					a[i].thuong = a[i].sohuychuong * 300;
				else
					if ( a[i].tuoi < 20)
						a[i].thuong = a[i].sohuychuong * 200;	
}

void xuat_hau_ve(vandongvien a[], int n)
{	cout<<"Cac van dong cien choi o vi tri hau ve la: "<<endl;
	cout<<"---------------------------- DANH SACH CAC VIEN DONG VIEN-------------------------"<<endl;
	cout<<setw(5)<<"Ma vdv"<<"|"<<setw(25)<<"Ten vdv"<<"|";
	cout<<setw(5)<<"Tuoi vdv"<<"|"<<setw(25)<<"Vi tri"<<"|";
	cout<<setw(10)<<"So huy chuong"<<"|"<<setw(10)<<"thuong"<<"|"<<endl;
	for (int i=0; i<n; i++)
		if(a[i].vitri == hau ve)
		{	cout<<setw(5)<<a[i].mavdv<<"|"<<setw(25)<<a[i].tenvdv<<"|";
			cout<<setw(5)<<a[i].tuoi<<"|"<<setw(25)<<a[i].vitri<<"|";
			cout<<setw(10)<<a[i].sohuychuong<<"|"<<setw(10)<<"thuong"<<"|"<<endl;
		}
	cout<<"-------------------------------------------------------------------------"<<endl;
}

int main()
{	vandongvien	vdv[100];
	int n;		//n la so san pham
	cout<<"Nhap vao so van dong vien: ";cin>>n;
	nhap_vdv(vdv,n);	//nhap vao thong tin cua n san pham
	tinh_thuong(vdv,n);
	xuat_vdv(vdv,n);
	xuat_hau_ve(vdv,n);
	return 0;
}
			