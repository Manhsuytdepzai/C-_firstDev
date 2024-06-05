#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so phan tu mang : ";cin>>n;
	int a[n];
	for ( int i=0; i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	
	cout<<"mang da nhap la : "<<endl;
	for ( int i=0; i<n; i++ )
	{
		cout<<a[i];
		cout<<endl;
	}
	
	int x;
	cout<<"nhap x : ";cin>>x;
	for(int i=0; i<n; i++)
        if(a[i]==x)
    		cout<<" X can tim o vi tri "<<i<<endl;
		else
		{
			cout<<" X khong ton tai trong mang "<<endl;
		}  
    return 0;
}
