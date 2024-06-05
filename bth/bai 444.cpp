#include<iostream>
using namespace std; 
#include<iomanip>
using namespace std;
int main(){
	int n;
	cout<<"nhap so phan tu cua mang : ";cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		{
			cout<<"a["<<i<<"]= ";
			cin>>a[i];
		}
	int dem=0, s=0;
	for (int i=0; i<=n-1; i++)
		if (a[i]<20)
		{
			s+=a[i];
			dem++;
		}
	cout<<"tong tbc cac so nho hon 20 trong day la : "<<s/dem<<endl;
	
	cout<<"\nmang truoc khi sap xep :";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
		}
	cout<<"\nmang sau khi sap xep la :"; 	
	for(int i=0;i<n;i++){
		for(int j=0;j<n+1;j++){
			if(a[i]<a[j]){
				int tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}	
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
		}		
	return 0;
}
