#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
typedef struct
{
    float x;
    float y;
    float doixungtung;
    float doixunghoanh;
    float doixungtamx;
    float doixungtamy;
    float hieu;
} Oxy ;
void nhap(Oxy a[],int n){
	for(int i=0; i<n; i++){	
        cout<<"Nhap diem du lieu: "<<i+1<<endl;
		cin.ignore();
		cout<<"nhap vao tung do: ";cin>>a[i].x;
		cout<<"Nhap vao hoanh do: ";cin>>a[i].y;
    }
}

void xuat(Oxy a[],int n){
	cout<<"------------------------------------- DANH SACH CAC DIEM -----------------------------------"<<endl;
	cout<<setw(22)<<"   diem ban dau    "<<"|"<<setw(22)<<"doi xung qua tung do"<<"|"<<setw(22)<<"doi xung qua hoanh do"<<"|"<<setw(22)<<"doi xung qua tam O"<<"|"<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
	cout<<setw(11)<<"hoanh do"<<"|"<<setw(10)<<"tung do"<<"|"<<setw(11)<<"hoanh do"<<"|"<<setw(10)<<"tung do"<<"|";
    cout<<setw(11)<<"hoanh do"<<"|"<<setw(10)<<"tung do"<<"|"<<setw(11)<<"hoanh do"<<"|"<<setw(10)<<"tung do"<<"|"<<endl;
	cout<<"--------------------------------------------------------------------------------------------"<<endl;
	for(int i=0; i<n; i++)
	{	cout<<setw(11)<<a[i].x<<"|"<<setw(10)<<a[i].y<<"|"<<setw(11)<<a[i].x<<"|"<<setw(10)<<a[i].doixungtung<<"|";
        cout<<setw(11)<<a[i].doixunghoanh<<"|"<<setw(10)<<a[i].y<<"|"<<setw(11)<<a[i].doixungtamx<<"|"<<setw(10)<<a[i].doixungtamy<<"|"<<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------"<<endl;   
}
void doisungquatungdo(Oxy a[],int n){
    for(int i=0; i<n; i++){
        a[i].doixungtung =a[i].y*(-1);
    }
}
void doisungquahoanhdo(Oxy a[],int n){
    for(int i=0; i<n; i++)
        a[i].doixunghoanh =a[i].x*(-1);
}
void doisungquatam(Oxy a[],int n){
    for(int i=0; i<n; i++){
        a[i].doixungtamx =a[i].x*(-1);
        a[i].doixungtamy =a[i].y*(-1);
    }
}
void xuathieu(Oxy a[],int n){
    float hieux;
    float hieuy;
    cout<<"hieu cac diem co toa do la: "<<endl;
	for(int i=0; i<n; i++)
	{	hieux = a[i].x - a[i].x;
        hieuy = a[i].y - a[i].y;
	}
    cout<<"("<<hieux<<";"<<hieuy<<")";
}
void xuattong(Oxy a[],int n){
    float tongx;
    float tongy;
    cout<<"tong cac diem co toa do la: "<<endl;
	for(int i=0; i<n; i++)
	{	tongx = a[i].x + a[i].x;
        tongy = a[i].y + a[i].y;
	}
    cout<<"("<<tongx<<";"<<tongy<<")";
}
void xuattich(Oxy a[],int n){
    float tichx;
    float tichy;
    cout<<"tich cac diem co toa do la: "<<endl;
	for(int i=0; i<n; i++)
	{	tichx = a[i].x * a[i].x;
        tichy = a[i].y * a[i].y;
	}
    cout<<"("<<tichx<<";"<<tichy<<")";
}
int main(){
    Oxy a[20];
    int n;
    cout<<"nhap so diem: ";
    cin>>n;
    nhap(a,n);
    doisungquatungdo(a,n);
    doisungquahoanhdo(a,n);
    doisungquatam(a,n);
    xuat(a,n);  
    xuattong(a,n);  
    xuathieu(a,n);
    xuattich(a,n);
    return 0;
}