#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char ten_file[20];
	cout<<"Nhap ten file nhi phan can lay du lieu: ";		
	fflush(stdin);		cin.getline(ten_file,20);
	
	fstream file2;										// Khai bao luong du lieu ten file2
	file2.open(ten_file, ios::in | ios::binary);		// Mo tep nhi phan de doc du lieu
		if(!file2)
		{ 
			cout << "Khong the mo duoc tep tin ";	return 1;
		}
	
	
	char chuoi1[100];
	
	file2.read((char *)(chuoi1), sizeof(chuoi1)); 		// Doc du lieu tu tep
	while (!file2.eof())
		{
			file2>> chuoi1;		cout<<chuoi1		<<"\t";	
		}
		
	file2.close();										// Dong tep
	return 0;
} 
