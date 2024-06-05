#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream file1;												// Khai bao luong du lieu ten file1
	char ten_file[20];
	cout<<"Nhap ten file nhi phan can tao: ";		
	fflush(stdin);		cin.getline(ten_file,20);
	
	file1.open(ten_file, ios::out | ios::binary);				// Mo tep nhi phan de ghi du lieu
		if(!file1)
		{
			cout << "Khong the tao duoc tep tin "; return 1;
		}
	
	char chuoi1[100];
	cout<<"Nhap 1 chuoi vao tep nhi phan: ";		fflush(stdin);
	cin.getline(chuoi1, 100);
	
	file1.write((char *)(chuoi1), sizeof(chuoi1)); 				// Ghi du lieu vao tep
	file1.close();												// Dong tep

	return 0;
} 
