#include<iostream>
using namespace std;
int main()
{
	char pheptinh;
	float x, y;
	cout<<"nhap vao 2 so : ";cin>>x>>y;
	cout<<"nhap phep tinh can thuc hien : ";cin>>pheptinh;
	switch(pheptinh)
	{
		case '+':
			cout<<"tong 2 so la : x + y = "<<x+y<<endl;
			break;
		case '-':
			cout<<"hieu 2 so la : x - y = "<<x-y<<endl;
			break;
		case '*':
			cout<<"tich 2 so la : x * y = "<<x*y<<endl;
			break;
		case '/':
			if(y==0)
			{
				cout<<"so chia bang 0 nen khong thuc hien duoc phep tinh !"<<endl;
				cout<<"nhap lai y = ";cin>>y;
				cout<<"thuong 2 so la : x / y = "<<x/y<<endl;
			}
			else
			cout<<"thuong 2 so la : x / y = "<<x/y<<endl;
			break;			
	}
	return 0;
}
