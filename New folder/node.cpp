#include<iostream>
#include<math.h>
using namespace std;

bool scp(int n)
{
    int x = sqrt(n);
    return (x*x == n);
}

int main()
{
	float n;
	cout<<"nhap n : ";cin>>n;
	for( int i=1; i<=n; i++ )
	{
		if(scp(i))
		cout<<i<<" ";
	}
	return 0;
}
