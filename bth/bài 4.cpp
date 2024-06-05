#include<iostream>
using namespace std;

int ucln(int x, int y) 
{
    if (y == 0) 
	return x;
	if (x % y == 0) 
    return y;
    return ucln(y, x % y);
}
int main()
{
	int a,b,c;
	cout<<"nhap a : ";cin>>a;
	cout<<"nhap b : ";cin>>b;
	cout<<"nhap c : ";cin>>c;
	cout<<"uoc chung lon nhat cua 3 so la : "<<ucln(ucln(a,b),ucln(b,c));
	return 0;
}
