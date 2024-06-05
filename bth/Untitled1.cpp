#include <iostream>
#include<string.h>
using namespace std;

struct NTN {
	int ngay, thang, nam;
};

struct Nguoi {
	char name[30];
	NTN ngaySinh;
	int diem;
};
void nhapNTN(NTN &ngaySinh) { // 
	cout << "Nhap ngay : ";
	cin >> ngaySinh.ngay;
	cout << "Nhap Thang: ";
	cin >> ngaySinh.thang;
	cout << "Nhap Nam: ";
	cin >> ngaySinh.nam;
	cin.ignore();
}
void xuatNTN(NTN ngaySinh) {
	cout << ngaySinh.ngay << "/" << ngaySinh.thang << "/" << ngaySinh.nam << endl;
	
}
// Nhap don cho 1 nguoi
void nhap(Nguoi &nguoi) {
	cout << "Nhap Ten: ";
	cin.getline(nguoi.name,30);
	cout<<"Diem kiem tra :";cin>>nguoi.diem;
	cout << "Nhap Vao Ngay Thang Nam Sinh: " << endl;
	nhapNTN(nguoi.ngaySinh);
}

void xuat(Nguoi nguoi) {
	cout << "Ten: ";
	cout << nguoi.name << endl;
	cout<<"diem so: "<<nguoi.diem<<endl;
	cout << "Ngay Thang Nam Sinh: ";
	xuatNTN(nguoi.ngaySinh);
}

void nhap(Nguoi nguoi[], int n) {
	for(int i = 0; i < n; i++) {
		cout << "nhap vao nguoi thu " << i+1 << endl;
		nhap(nguoi[i]);
	}
}
void xuat(Nguoi nguoi[], int n) {
	for(int i = 0; i < n; i++) {
		cout << "danh sach nguoi thu " << i+1 << endl;
		xuat(nguoi[i]);
	}
}

char * chuyenDoi(char *name) {
	for(int i = 0; i < strlen(name); i++) {
		 if((int)name[i] >= 97 && (int)name[i] <=122) {
		 	name[i] = (char)(int(name[i])-32);
		 }
	}
	return name;
}
void max(Nguoi nguoi[], int n)
{

	
}

Nguoi timKiem(Nguoi nguoi[], int n, char name[]) {
	char name1[30];
	for(int i = 0; i < n; i++) {
		strcpy(name1, nguoi[i].name);
		if(strcmp(chuyenDoi(name1),chuyenDoi(name)) == 0) {
			return nguoi[i];
		}
	}
	Nguoi a; strcpy(a.name, ""); a.ngaySinh.thang = 0;
	a.ngaySinh.nam= 0; a.ngaySinh.ngay = 0;
	return a;
}


int main() {
	Nguoi nguoi[100];
	int n;
	cout << "Ban Muon Nhap Vao Bao Nhieu Nguoi " << endl;
	cout << "n = ";
	cin >> n;
	cin.ignore();
	nhap(nguoi, n);
	xuat(nguoi, n);
	char name[30];
	cout << "nhap vao ten nguoi can tim kiem: ";
	cin.getline(name,30);
	Nguoi a  = timKiem(nguoi,n,name);
	xuat(a);
	
}
