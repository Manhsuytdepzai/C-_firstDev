#include<iostream>
using namespace std;
int main()
{
	int n;
	int dem;
	cout<<"nhap n = ";cin>>n;
	for(int i=1; i<n; i++)
		for(int j=1; j<n; j++)
	{
		int dem;
		if(i%j==0)
			dem++;
	}
	if(dem == 2)
			cout<<i<<"\t";
	return 0;
}
  
