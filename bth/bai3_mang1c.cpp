#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//ham nhap mang
void nhap_mang(int b[], int m)
{
	{	cout<<"b["<<j<<"]= ";
		cin>>b[j];
	}
}
//ham xuat mang duoi dang cot
void xuat_mang( int b[], int m)
{	cout<<setw(15)<<"Element"<<setw(15)<<"Value"<<endl;
	for(int j = 0; j < m; j++)
		cout<<setw(15)<<j<<setw(15)<<b[j]<<endl;
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
//Tim kiem
int Search(int b[], int m, int x)
{	for(int i = 0; i< m; i++)
		if(b[i] == x)
			return i;		//tim thay
	return -1;				//khong thay
}
//ham them phan tu vao mang da sap xep 
//sao cho van dam bao thu tu sap xep
void	Insert(int b[], int n, int x) 
{
	int pos = n;

	while ((pos>0) && (b[pos-1]< x))
	{	b[pos] = b[pos-1];
		pos --;
	}
	b[pos] = x;
}
//xoa phan tu
void	Remove(int b[], int n, int x) 
{
	int pos = Search(b, n, x);
	if (pos == -1)	//khong co x trong mang
		return;
	n--;			//so phan tu giam di 1
	for (; pos < n; pos++)
		b[pos] = b[pos + 1];
	
}

			
int main()
{
	int a[100];
	int n,x,chon;
	cout<<"Nhap so phan tu mang n = "; cin>>n;
	nhap_mang(a, n);
	cout<<endl;
	cout<<"**********************************************"<<endl;
	cout<<"*1. Xuat mang                                *"<<endl;
	cout<<"*2. Sap xep giam dan                         *"<<endl;
	cout<<"*3. Tim kiem giá tri x                       *"<<endl;
	cout<<"*4. Them phan tu                             *"<<endl;
	cout<<"*5. Xoa phan tu                              *"<<endl;
	cout<<"**********************************************"<<endl;
	do{
	cout<<"\nMoi ban chon cong viec (1/2/3/4/5):"; cin>>chon;
	switch(chon)
	{ 
		case 1: xuat_mang(a, n); break;
		case 2: 
		{	Sort_decrease(a,n);
			cout<<"Mang sau khi sap xep la "<<endl;
			xuat_mang(a, n);
			break;
		}
		case 3: 
		{	cout<<"Nhap gia tri can tim ";cin>>x;
			if(Search(a, n, x)== -1)
				cout<<"Khong co phan tu "<<x<<" trong mang"<<endl;
			else
				cout<<"Phan tu "<<x<<" o vi tri "<<Search(a,n,x)<<" trong mang"<<endl;
			break;
		}
		case 4:
		{	cout<<"Nhap gia tri can them "; cin>>x;
			Insert(a, n, x);
			n++;
			xuat_mang(a,n);
			break;
		}
		case 5:
		{	cout<<"Nhap phan tu can xoa "; cin>>x;
			Remove(a, n, x);
			cout<<"Mang sau khi loai bo la "<<endl;
			n--;
			xuat_mang(a,n);
			break;
		}
	}	
	} while (chon != 0);
	
	return 0;
}
			
		
		
