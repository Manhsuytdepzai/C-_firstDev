#include<iostream>
using namespace std;

int ucln(int x, int y)
{
	if (x>y)
	{
		for(int i = x; i <= x; i--)
			if(x % i == 0 && y % i == 0)
		return i;
	}
	else
	{
		for(int i = y; i <= y; i--)
			if(x % i == 0 && y % i == 0)
			return i;
	}
}
int main()
{
	int a, b, c;
	cout<<"nhap a : ";cin>>a;
	cout<<"nhap b : ";cin>>b;
	cout<<"nhap c : ";cin>>c;
	cout<<ucln(ucln(a,b),ucln(b,c));
	return 0;
}
