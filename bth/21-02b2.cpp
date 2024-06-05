#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char ktu;
	cout<<"nhap vao so ki tu : ";cin>>ktu;
	int i=1, dem=0;
	do
	{
		dem++;
		i++;	
	}while(strcmp(i,"*")==0);
	cout<<dem; 
	return 0;
}
