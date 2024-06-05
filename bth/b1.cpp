#include<iostream>
using namespace std;

int main()
{
	int a[100];
	int n;
	cout<<"nhap n : ";cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"\nmang da nhap la : "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<a[i];
		cout<<endl;
	}
	for (int i = 0; i <= n-1; i++ )
	 	for ( int j = i+1; j < n; j++ )	
	 	if ( a[i] < a[j] )
		{
			int tg = a[i];
			a[i] = a[j];
			a[j] = tg;
		} 
	cout <<"\nmang sau khi sap xep la : "<<endl;
	int x;
	cout <<" x= ";cin>>x;
	for ( int i = 0; i <= n-1; i++ )
		cout<<a[i]<<endl;
		int o = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			cout<<"gia tri "<<x<<" co trong mang";
			o++;
		}
		
	}
	
	if(o == 0){
		cout<<"gia tri "<<x<<" khong co trong mang\n";
		cout<<"mang sau khi them "<<x<<endl;
		a[n] = x;
	
		for ( int j = 0; j <= n; j++ )
		cout << a[j] << endl;
	}	
	return 0;
}
