#include <iostream>
#include <iomanip>
using namespace std; 
int main(){
	int m,n;
	cout<<"nhap m : ";cin>>m;
	cout<<"nhap n : ";cin>>n;
	int a[m][n];
	for (int i=0; i<m; i++)
		for(int j=0; j<n; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	cout<<"Ma tran da nhap la: "<<endl;
	for(int i = 0; i < m; i++)
	{   for(int j = 0; j < n; j++)
			cout<<a[i][j]<<"\t";
    	cout<<endl;
	}	
	float S=0, dem=0;
	for(int i = 0; i < m; i++)
  		for(int j = 0;  j < n; j++)
  		    if (a[i][j] <0 )
  		{	
		  S = S + a[i][j]; 
		  dem++; 
		  }
	cout<<"Trung binh cong cac phan tu am cua ma tran la: "<<(float)S/dem<<endl;
		
	int max = a[0][0];	
	for(int i = 0; i < m; i++)
  		for(int j = 0;  j < n; j++)
		    if (a[i][j]> max) 
		     max=a[i][j];
	cout<<"gia tri lon nhat la : "<<max<<endl;
	
	cout<<" chia ht cho 5 la : "<<endl;	 
	for(int i = 0; i < m; i++)
  		for(int j = 0;  j < n; j++)
		    if (a[i][j]%5==0) 
				cout<<a[i][j]<<"\t";		 			      
	return 0; 
} 
