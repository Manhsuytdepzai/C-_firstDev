#include<iostream.h>
#include<iomanip.h>
#include<string.h>

typedef struct 
{	
	char 	ma[8];
	char	tenhs[20];
	char	gioitinh[8];
	char	xeploai[20]	;
	float	diemtoan;
	float	diemly;
	float	diemhoa;
	float	diemtb;

} hocsinh;

void nhap_hs(hocsinh  a[], int n)
{	
	for(int i=0; i<n; i++)
		{	cout<<"Nhap thong tin hoc sinh "<<i+1<<endl;
			cin.ignore();
			cout<<"Nhap ma hoc sinh: ";cin.getline(a[i].ma,8);
			cout<<"Nhap ten hoc sinh: ";cin.getline(a[i].tenhs, 20);
			cout<<"Nhap gioi tinh: ";cin.getline(a[i].gioitinh, 8);
			cout<<"Nhap diem toan: ";cin>>a[i].diemtoan;
			cout<<"Nhap diem ly: ";cin>>a[i].diemly;
			cout<<"Nhap diem hoa: ";cin>>a[i].diemhoa;
		}
}
void xuat_hs(hocsinh a[], int n)
{
	cout<<"----------------------------------------- DANH SACH HOC SINH --------------------------------------"<<endl;
	cout<<setw(10)<<"Ma hs"<<"|"<<setw(20)<<"Ten hs"<<"|";
	cout<<setw(10)<<"Gioi tinh"<<"|"<<setw(8)<<"Toan"<<"|";
	cout<<setw(8)<<"Ly"<<"|"<<setw(8)<<"Hoa"<<"|";
	cout<<setw(8)<<"Diem TB"<<"|"<<setw(20)<<"Xep loai"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
	{	cout<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].tenhs<<"|";
		cout<<setw(10)<<a[i].gioitinh<<"|"<<setw(8)<<a[i].diemtoan<<"|";
		cout<<setw(8)<<a[i].diemly<<"|"<<setw(8)<<a[i].diemhoa<<"|";
		cout<<setw(8)<<a[i].diemtb<<"|"<<setw(20)<<a[i].xeploai<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
}
void diem_tb(hocsinh  a[], int n)
{	
	for(int i=0; i<n; i++)
		a[i].diemtb = (a[i].diemtoan*4 +a[i].diemly*3 + a[i].diemhoa*2)/9;
}

void xep_loai(hocsinh  a[], int n)
{	
	for(int i=0; i<n; i++)
		if(a[i].diemtb >=9)
			strcpy(a[i].xeploai,"Xuat sac");			 	
		else 
			if (a[i].diemtb >= 8) 
				strcpy(a[i].xeploai,"Gioi");			
			else
				if (a[i].diemtb >= 6.5)
					strcpy(a[i].xeploai,"Kha");
				else
					if (a[i].diemtb >= 5)
						strcpy(a[i].xeploai,"Trung binh");
					else
						strcpy(a[i].xeploai,"Yeu");
}

void in_hs_gioi(hocsinh a[], int n)
{	cout<<"Danh sach hoc sinh nu xep loai gioi va xuat sac la :"<<endl;
	cout<<"----------------------------------------- DANH SACH HOC SINH --------------------------------------"<<endl;
	cout<<setw(10)<<"Ma hs"<<"|"<<setw(20)<<"Ten hs"<<"|";
	cout<<setw(10)<<"Gioi tinh"<<"|"<<setw(8)<<"Toan"<<"|";
	cout<<setw(8)<<"Ly"<<"|"<<setw(8)<<"Hoa"<<"|";
	cout<<setw(8)<<"Diem TB"<<"|"<<setw(20)<<"Xep loai"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
		if (((strcmp(a[i].gioitinh,"Nu")==0)&& (strcmp(a[i].xeploai,"Xuat sac")==0))||
			((strcmp(a[i].gioitinh,"Nu")==0)&& (strcmp(a[i].xeploai,"Gioi")==0)))
		{	cout<<setw(10)<<a[i].ma<<"|"<<setw(20)<<a[i].tenhs<<"|";
			cout<<setw(10)<<a[i].gioitinh<<"|"<<setw(8)<<a[i].diemtoan<<"|";
			cout<<setw(8)<<a[i].diemly<<"|"<<setw(8)<<a[i].diemhoa<<"|";
			cout<<setw(8)<<a[i].diemtb<<"|"<<setw(20)<<a[i].xeploai<<"|"<<endl;
		}
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
}
int main()

{	hocsinh 	hs[100];
	int n;		
	cout<<"Nhap vao so hoc sinh : ";cin>>n;
	nhap_hs(hs,n);	
	diem_tb(hs,n);
	xep_loai(hs,n);
 	xuat_hs(hs,n);
 	in_hs_gioi(hs,n);
	return 0;
}
	