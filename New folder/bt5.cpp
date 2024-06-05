#include<iostream>

using namespace std;
int main()
{
	int n, s=0;
	cout<<"nhap vao so n : ";cin>>n;
	for(int i=1; i<n; i++)
	{
		if(n%i==0)
			s=s+i;
	}
	if(s==n)
		cout<<"n la so hoan hao"<<endl;
	else
		cout<<"n khong phai la so hoan hao"<<endl;
	for(int i=1; i<n; i++)
	{
		int S=0;		
		for(int j=1; j<i; j++)
		{
			if(i%j==0)
				S=S+j;
		}
		if(S==i)
			cout<<i<<" ";
	}
	return 0;		
}
