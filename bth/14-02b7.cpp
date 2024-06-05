#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d; 
	for(int i=1000; i<=9999; i++)
	{
		for(a=1; a<=9; a++)
		for(b=0; b<=9; b++)
		for(c=0; c<=9; c++)
		for(d=0; d<=9; d++)
		if(a+b==c+d)
			cout<<a<<b<<c<<d<<" ";
	}
	return 0;
}
