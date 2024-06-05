// Nhap vao 1 mang vao n phan tu nguyen 
//a) Tim, in ra vi tri va gia tri phan tu lon nhat trong mang
//b) Tim va in ra cac so hoan hao trong mang
//c) Tim va in ra cac so chinh phuong trong mang
#include <iostream.h>
#include <iomanip.h>
#include <math.h>
int main()
{
	int n;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	int max=a[1],vt=0;
	for(int i = 0; i < n; i++)
		if (max<a[i])
		{
			max=a[i];
			vt=i+1;
		}
	cout<<"so lon nhat la: "<<max<<endl;
	cout<<"vi tri thu: "<<vt<<endl;
	for(int i=0;i<n;i++) 
	{ 
		int S = 0;		
		for (int j = 1; j < a[i]; j++)    
			if ( a[i] % j == 0 )	
				S = S + j;	
 				if ( S == a[i] ) 
				 	cout<<"so hoan hao la: "<<a[i]<<endl; 
 	}
 	for(int i=0;i<n;i++)
 	{
 		if ( int ( sqrt(a[i]) ) == sqrt(a[i]) )
 		cout<<"so chinh phuong la: "<<a[i]<<endl;
 	}
	return 0;
}
