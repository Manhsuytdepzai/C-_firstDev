#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
typedef struct
{
    char ID[8];
    char tensv[15];
    int tuoi;
    float diemtongketki1;
    float diemtongketki2;
    double diemtongcuoinam;
} sv ;
void nhap(sv a[],int n){
	for(int i=0; i<n; i++){	
        cout<<"Nhap thong tin sinh  vien "<<i+1<<endl;
		cin.ignore();
		cout<<"Ma sinh vien: ";cin.getline(a[i].ID,8);
		cout<<"Nhap ten sinh vien: ";cin.getline(a[i].tensv, 15);
        cout<<"Nhap tuoi: ";cin>>a[i].tuoi;
	 	cout<<"Nhap diem tong ki 1: ";cin>>a[i].diemtongketki1;
        cout<<"Nhap diem tong ki 2: ";cin>>a[i].diemtongketki2;
    }
}

void xuat(sv a[],int n){
	cout<<"------------------------------------ DANH SACH SINH VIEN ----------------------------------"<<endl;
	cout<<setw(8)<<" ID "<<"|"<<setw(15)<<"Ten sinh vien"<<"|"<<setw(15)<<"tuoi sinh vien"<<"|";
	cout<<setw(20)<<"Diem tong ket ki 1"<<"|"<<setw(20)<<"Diem tong ket ki 2"<<"|"<<setw(20)<<"Diem tong cuoi nam"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n; i++)
	{	cout<<setw(8)<<a[i].ID<<"|"<<setw(15)<<a[i].tensv<<"|"<<setw(15)<<a[i].tuoi<<"|";
		cout<<setw(20)<<a[i].diemtongketki1<<"|"<<setw(20)<<a[i].diemtongketki2<<"|"<<setw(20)<<a[i].diemtongcuoinam<<"|"<<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------"<<endl;   
}
void diemcuoinam(sv a[],int n){
    for(int i=0; i<n; i++)
        a[i].diemtongcuoinam = (a[i].diemtongketki1 + a[i].diemtongketki2 * 2) / 3;
}	
void xuatdiemcao(sv a[],int n){
	double max = a[0].diemtongcuoinam;
	for (int i=1; i<n; i++ ){
 		if(max < a[i].diemtongcuoinam)
	 	{
 			max = a[i].diemtongcuoinam;
 		}
    }
	cout<<"------------------------------------ DANH SACH SINH VIEN ----------------------------------"<<endl;
	cout<<setw(8)<<" ID "<<"|"<<setw(15)<<"Ten sinh vien"<<"|"<<setw(15)<<"tuoi sinh vien"<<"|";
	cout<<setw(20)<<"Diem tong ket ki 1"<<"|"<<setw(20)<<"Diem tong ket ki 2"<<"|"<<setw(20)<<"Diem tong cuoi nam"<<"|"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n; i++)
        if(max == a[i].diemtongcuoinam)
	{	cout<<setw(8)<<a[i].ID<<"|"<<setw(15)<<a[i].tensv<<"|"<<setw(15)<<a[i].tuoi<<"|";
		cout<<setw(20)<<a[i].diemtongketki1<<"|"<<setw(20)<<a[i].diemtongketki2<<"|"<<setw(20)<<a[i].diemtongcuoinam<<"|"<<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------"<<endl;   
}

void xuathocsinhtienbo(sv a[],int n){
	cout<<"------------------------------- DANH SACH SINH VIEN ----------------------------------"<<endl;
	cout<<setw(8)<<" ID "<<"|"<<setw(15)<<"Ten sinh vien"<<"|"<<setw(15)<<"tuoi sinh vien"<<"|";
	cout<<setw(20)<<"Diem tong ket ki 1"<<"|"<<setw(20)<<"Diem tong ket ki 2"<<"|"<<setw(20)<<"Diem tong cuoi nam"<<"|"<<endl;
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n; i++)
        if(a[i].diemtongketki1 < a[i].diemtongketki2)
	{	cout<<setw(8)<<a[i].ID<<"|"<<setw(15)<<a[i].tensv<<"|"<<setw(15)<<a[i].tuoi<<"|";
		cout<<setw(20)<<a[i].diemtongketki1<<"|"<<setw(20)<<a[i].diemtongketki2<<"|"<<setw(20)<<a[i].diemtongcuoinam<<"|"<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------"<<endl;   
}
int main(){
    sv a[20];
    int n;
    cout<<"nhap so luong sinh vien: ";
    cin>>n;
    nhap(a,n);
    cout<<"\nBang diem trung binh cuoi nam cua ca lop la: "<<endl;
	diemcuoinam(a,n); 
    xuat(a,n);
    cout<<"\nBang sinh vien có diem tong cao nhat la: "<<endl;
	diemcuoinam(a,n); 
    xuatdiemcao(a,n);
    cout<<"\nBang sinh vien tien bo la: "<<endl;
	diemcuoinam(a,n); 
    xuathocsinhtienbo(a,n);
    return 0;

}