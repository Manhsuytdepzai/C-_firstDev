#include<iostream>
using namespace std;
int main()
{
	int n, s=0, i=1;
	cout<<"nhap n : ";cin>>n;
	/*while( i<=n)
	{
		s+=i;
		i++;
	}*/
	do
	{
		s+=i;
		i++;
	}
	while(i<=n);
	cout<<" tong s : "<<s<<endl;
	return 0;
}
