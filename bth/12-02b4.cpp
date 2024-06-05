#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	char cv;
	cout<<"---------------MENU--------------"<<endl;
	cout<<"1.tinh tong a+b+c !"<<endl;
	cout<<"2.tinh tich a*b*c !"<<endl;
	cout<<"3.giai phuong trinh ax + b = c !"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"nhap cong viec muon lam : ";cin>>cv;
	switch(cv)
	{
		case '1':
			{
				cout<<"nhap 3 so a, b, c : ";cin>>a>>b>>c;
				cout<<"tong a+b+c = "<<a+b+c<<endl;
			}
			break;
		case '2':
			{
				cout<<"nhap 3 so a, b, c : ";cin>>a>>b>>c;
				cout<<"tich a*b*c = "<<a*b*c<<endl;
			}
			break;
		case '3':
			{
				cout<<"nhap 3 so a, b, c : ";cin>>a>>b>>c;
				if (a==0) 
				{
					if (b-c==0) 
						cout<<"pt co vo so nghiem"<<endl;
					else 
						cout<<"pt vo nghiem"<<endl;
				}
				else
					cout<<"pt co nghiem la : "<<(c-b)/a<<endl;
			}		
			break;		
	}
	return 0;
}
