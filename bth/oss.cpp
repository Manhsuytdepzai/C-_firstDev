#include<iostream>
#include<math.h>
using namespace std;

typedef struct
{
    int ngay, thang, nam;
}date;

typedef struct
{
    char name[30];
	date ngaysinh;
	int diem;
}sv;

void nhapdate(date &ngaySinh) { // 
	cout << "Nhap ngay : ";
	cin >> ngaySinh.ngay;
	cout << "Nhap Thang: ";
	cin >> ngaySinh.thang;
	cout << "Nhap Nam: ";
	cin >> ngaySinh.nam;
	cin.ignore();
}
