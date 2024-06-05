#include<iostream>
using namespace std;
int main()
{
	float a, i=1, s=0;
	cout<<"nhap vao so thuc a : ";cin>>a;
	if(a<1 || a>2)
	{
		cout<<"nhap lai a : ";cin>>a;
	}
	do
	{
		s=s+1.0/i;
		i++;
	}while(s<a);
	cout<<"so n nho nhat la : "<<float(i)<<endl;
	cout<<"tong la : "<<s<<endl;
	return 0;
}
