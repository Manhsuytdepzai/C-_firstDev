#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
using namespace std;
typedef struct
{
	char mact[20];
	char tenct[20];
	int year;
	int huychuong;
	float thuong; 
}ct;
//2
void nhap_ct(ct a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"nhap thong tin cau thu thu : "<<i+1<<endl;
		cin.ignore();
		cout<<"ma cau thu : ";cin.getline(a[i].mact, 20);
		cout<<"ten cau thu : ";cin.getline(a[i].tenct, 20);
		cout<<"tuoi : ";cin>>a[i].year;
		cout<<"Huy chuong : ";cin>>a[i].huychuong; 
	}
}
//3
void thuong(ct a[], int n)
{
	for (int i=0; i<n; i++)
	{
		if(a[i].huychuong > 5)
			a[i].thuong = 500000;
			else if(a[i].huychuong > 3)
				a[i].thuong = 300000;
				else if (a[i].huychuong > 2)
					a[i].thuong = 200000;
	}
}
//4
void sapxeptuoi(ct a[], int n)
{
    for(int i=0; i<n; i++)
		for (int j=i+1; j<n+1; j++)
			if(a[i].year < a[j].year)
			{	
				ct tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}	
}
void in_ct(ct a[], int n)
{
	thuong(a,n);
	sapxeptuoi(a,n);
	cout<<"---------------------------------------------------- DANH SACH CAU THU ---------------------------------------------------------"<<endl;
	cout<<setw(20)<<"ma cau thu"<<"|"<<setw(25)<<"Ten cau htu"<<"|";
	cout<<setw(20)<<"tuoi"<<"|"<<setw(20)<<"huy chuong"<<"|";
	cout<<setw(20)<<"thuong"<<"|"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
	for (int i=0; i<n; i++)
	{
	cout<<setw(20)<<a[i].mact<<"|"<<setw(25)<<a[i].tenct<<"|";
	cout<<setw(20)<<a[i].year<<"|"<<setw(20)<<a[i].huychuong<<"|";
	cout<<setw(20)<<a[i].thuong<<"|"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
	}
}
int main()
{
	ct a[100];
	int n;
	cout<<"nhap vao so cau thu mong muon : ";cin>>n;
	cout<<endl;
	nhap_ct(a,n);
	in_ct(a,n);
	return 0;
}
