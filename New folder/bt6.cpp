#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float n;
	cout<<" nhap so tu nhien n : ";cin>>n;
	for(float i=1; i<=n; i++)
	{
		for(float j=1; j<=n; j++)
		{
			for(float k=1; k<=n; k++)
			if(pow(i,3)+pow(j,3)+pow(k,3)==n)
			cout<<i<<" "<<j<<" "<<k;
		}
	}
}
