#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	float s=0;
	cout<<"nhap so duong n : ";cin>>n;
	for(int i=1; i<=n; i++)
	{
		s=s+1/(pow(2*n-1,2));
	}
	cout<<"tong cua day la : "<<s<<endl;
}
