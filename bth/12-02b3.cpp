#include<iostream>
using namespace std;
int main()
{
	char cv;
	cout<<"---------------MENU--------------"<<endl;
	cout<<"1.tinh dien tich tam giac !"<<endl;
	cout<<"2.tinh dien tich hinh chu nhat !"<<endl;
	cout<<"3.tinh dien tich hinh vuong !"<<endl;
	cout<<"4.tinh dien tich hinh thang !"<<endl;
	cout<<"5.tinh dien tich hinh tron !"<<endl;
	cout<<"6.tinh dien tich hinh binh hanh !"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"nhap cong viec muon lam : ";cin>>cv;
	switch(cv)
	{
		case '1':
			cout<<"tinh dien tich tam giac !"<<endl;
			break;
		case '2':
			cout<<"tinh dien tich hinh chu nhat !"<<endl;
			break;
		case '3':
			cout<<"tinh dien tich hinh vuong !"<<endl;
			break;
		case '4':
			cout<<"tinh dien tich hinh thang !"<<endl;
			break;
		case '5':
			cout<<"tinh dien tich hinh tron !"<<endl;
			break;
		case '6':
			cout<<"tinh dien tich hinh binh hanh !"<<endl;
			break;					
	}
}
