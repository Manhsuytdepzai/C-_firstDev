#include <iostream>
#include <iomanip>
using namespace std; 
int main()
{
	int a[3][4]; 
	//nhap mang
	for(int i = 0; i < 3; i++)
  		for(int j = 0;  j < 4; j++)
  		{
			cout<<"a[ "<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}

	//xuat mang
	cout<<"Ma tran da nhap la: "<<endl;
	for(int i = 0; i < 3; i++)
	{   for(int j = 0; j < 4; j++)
			cout<<a[i][j]<<"\t";
    	cout<<endl;
	}
	
	//tinh trung bình cong cac phan tu cua ma tran
	int S = 0;
	for(int i = 0; i < 3; i++)
  		for(int j = 0;  j < 4; j++)
  			S = S + a[i][j];
	cout<<"Trung binh cong cac phan tu cua ma tran la: "<<(float)S/(3*4)<<endl;
	return 0;
}
