#include <iostream>
#include <iomanip>
#include <math.h> 
using namespace std; 
int main(){
	int n;
	cout<<"nhap n : ";cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		{
			cout<<"a["<<i<<"]= ";
			cin>>a[i];
		}
	cout<<"Ma tran da nhap la: "<<endl;
	for(int i = 0; i < n; i++)
	{
			cout<<a[i]<<"\t";
    	cout<<endl;
	}
	int max=a[1];
	for(int i = 0; i < n; i++)
		if (max<a[i])
		{
			max=a[i];
		}
	cout<<"so lon nhat la: "<<max<<endl;
	for(int i=0;i<n;i++) 
	{ 
		int S = 0;		
		for (int j = 1; j < a[i]; j++)    
			if ( a[i] % j == 0 )	
				S = S + j;	
 				if ( S == a[i] ) 
				 	cout<<"so hoan hao la: "<<a[i]<<endl; 
 }

	for (int i=1; i<n; i++) 
	      if (int (sqrt(a[i]))==sqrt (a[i])) 
 	cout<<"so chinh phuong trong day la  "<<a[i]<<"\t" ;
	return 0;
}
