#include <iostream>
#include <iomanip>
using namespace std; 
//ham nhap mang
void nhap_mang(int b[], int m)
{	for(int j = 0; j < m; j++)
	{	cout<<"b["<<j<<"]= ";
		cin>>b[j];
	}
}
//ham xuat mang thuong
void xuat_mang(int b[], int m)
{	
	for(int j = 0; j < m; j++)
		cout<<b[j]<<"\t";
}

//ham xuat mang duoi dang cot
void xuat_cot(int b[], int m)
{	cout<<setw(15)<<"Element"<<setw(15)<<"Value"<<endl;
	for(int j = 0; j < m; j++)
		cout<<setw(15)<<j<<setw(15)<<b[j]<<endl;
}
//tinh trung binh cong cac so am
void tbc_am(int b[], int m)
{	int T = 0, d = 0;	//T luu tong cac so am, d dem cac so am
	for(int j = 0; j< m; j++)
		if(b[j] < 0)
		{	d++;			//dem so am tang 1
			T = T + b[j];	//tinh tong so am
		}
	cout<<"Trung binh cong cac phan tu am cua mang la: "<<(float)T/d<<endl;
}
//In ra cac phan tu chia het cho 5
void  divide_5(int b[], int m)
{	cout<<"Cac phan tu chia het cho 5 la: "<<endl;
	for(int j = 0; j< m; j++)
		if(b[j]%5 == 0)
			cout<<b[j]<<"\t";
}
//Sap xep mang theo thu tu giam dan
void  Sort_decrease(int b[], int m)
{	int tg;
	for(int j = 0; j< m-1; j++)
		for(int k = j+1; k < m; k++)
			if (b[j] < b[k])
			{	tg = b[j];
				b[j] = b[k];
				b[k] = tg;
			}
}

//chuong trinh chinh
int main()
{	
	int a[100];
	int n, i;
	cout<<"Nhap vao so phan tu cua mang ";cin>>n;
	nhap_mang(a,n);
	tbc_am(a, n);
	divide_5(a, n);
	cout<<"\nMang truoc khi sap xep la: "<<endl;
	xuat_mang(a, n);
	Sort_decrease(a, n);		//sap xep giam dan
	cout<<"\nMang sau khi sap xep la: "<<endl;
	xuat_mang(a, n);
	return 0;
}	
