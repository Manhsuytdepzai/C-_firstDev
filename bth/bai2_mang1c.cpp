#include <iostream.h>
#include <iomanip.h>
#include <math.h>
//ham nhap mang
void nhap_mang(unsigned int b[], int m)
{	for(int j = 0; j < m; j++)
	{	cout<<"b["<<j<<"]= ";
		cin>>b[j];
	}
}
//ham xuat mang duoi dang cot
void xuat_mang(unsigned int b[], int m)
{	cout<<setw(15)<<"Element"<<setw(15)<<"Value"<<endl;
	for(int j = 0; j < m; j++)
		cout<<setw(15)<<j<<setw(15)<<b[j]<<endl;
}

void tim_max(unsigned int b[], int m)
{	int max = 0;		//max chua chi so phan tu lon nhat
	for(int i = 1; i<m; i++)
		if (b[max]<b[i])
			max = i;
	cout<<"Phan tu lon nhat la "<<b[max]<<" co vi tri la "<<max<<endl;
}

void in_so_hoan_hao(unsigned int b[],int m)
{
	cout<<"\nCac so hoan hao trong mang la: "<<endl;
	for(int i = 0; i<m; i++)
	{	int S = 0;			//tinh tong cac uoc cua b[i]			
		for (int j = 1; j< b[i]; j++) 
			if (b[i]%j == 0)
				S = S + j;
		if (S == b[i])	cout<<b[i]<<"\t";
	}
}

void in_so_chinh_phuong(unsigned int b[], int m)
{
	cout<<"\nCac so chinh phuong trong mang la: "<<endl;
	for(int i = 0; i<m; i++)
		if (int(sqrt(b[i]))== sqrt(b[i]))
			cout<<b[i]<<"\t";
}	

int main()
{	unsigned int a[100];
	int n;
	cout<<"Nhap so phan tu cua mang n = ";cin>>n;
	nhap_mang(a, n);
	cout<<"Mang da nhap la:"<<endl;
	xuat_mang(a, n);
	tim_max(a, n);
	in_so_hoan_hao(a, n);
	in_so_chinh_phuong(a, n);
	cout<<endl;
	return 0;
}
	