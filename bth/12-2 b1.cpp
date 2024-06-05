#include<iostream>
using namespace std;
int main()
{
	char kitu;
	cout<<"nhap ki tu : ";cin>>kitu;
	switch(kitu)
	{
		case 'a':
		case 'A':
			cout<<"xin chao"<<endl;
			break;
		case 'b':	
		case 'B':
			cout<<"hoan nghenh"<<endl;
			break;	
		default:
			cout<<"xin loi"<<endl;	
			break;	
	}
	return 0;
} 
