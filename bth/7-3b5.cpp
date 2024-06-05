#include<iostream>
#include<math.h>
using namespace std;
void S(int n)
{
	int s=1;
	for(int i=1; i<=n; i++)
	{
		s*=pow(i, i);
	}
	cout<<s;
} 
int main()
{
	int n;
	cout<<"nhap n : ";cin>>n;
	S(n);
	return 0;
}
