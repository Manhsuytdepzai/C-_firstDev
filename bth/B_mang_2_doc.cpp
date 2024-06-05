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
	
	int n;
	cout<<"Nhap so phan tu can lay trong mang n = ";		cin>>n;
		
	int b[100];
	file2.read((char *)(b), sizeof(b)); 				// Doc du lieu tu tep
		for (int i = 0; i <n ; i++)
			cout << b[i] << " ";
	
	file2.close();										// Dong tep
	
	return 0;
} 
