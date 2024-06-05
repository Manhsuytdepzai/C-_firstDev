#include <iostream>
using namespace std; 

int square(int);	//khai bao nguyen mau ham

int main()
{ 	int n;
	cout<<"Nhap so nguyen n = "; cin>>n;
	
	cout<<"Binh phuong cua "<<n<<" la: "<<square(n)<<endl;
	
	return 0;
}
//dinh nghia ham
int square(int y)
{	
	return y*y;
}
