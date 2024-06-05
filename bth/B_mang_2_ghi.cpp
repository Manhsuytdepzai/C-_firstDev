#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char ten_file[20];
	cout<<"Nhap ten file nhi phan can tao: ";		
	fflush(stdin);		cin.getline(ten_file,20);
	
	fstream file1;										// Khai bao luong du lieu ten file1
	file1.open(ten_file, ios::out | ios::binary);		// Mo tep nhi phan de ghi du lieu
		if(!file1)
		{
			cout << "Khong the tao duoc tep tin "; return 1;
		}
	
	int n, a[100];
	cout<<"\nNhap so phan tu cua mang de ghi vao file n = ";		cin>>n;
	for (int i=0; i<n; i++)
		{
			cout<<"Phan tu thu "	<<i+1	<<" : ";	cin>>a[i];
		}
	
	file1.write((char *)(a), sizeof(a));				// Ghi du lieu vao tep
	
	file1.close();										// Dong tep

	return 0;
} 
