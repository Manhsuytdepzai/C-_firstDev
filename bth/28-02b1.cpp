#include<iostream>
using namespace std;


int max(int x, int y)
{
	if (x > y)
		return x;
	else 
		return y;	
}

int main()
{
	int a, b, c, d;
	cout<<"nhap a : ";cin>>a;
	cout<<"nhap b : ";cin>>b;
	cout<<"nhap c : ";cin>>c;
	cout<<"nhap d : ";cin>>d;
	cout<<max(a,b)<<max(c,d);
	return 0;
} 
