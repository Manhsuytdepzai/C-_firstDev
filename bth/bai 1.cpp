//bai 1 : S = 2.3 + 3.4 + 4.5 + ... + n.(n+1)
#include<iostream> 
#include<iomanip> 
using namespace std;
int main(){
	int n;
	cout<<"nhap n: ";cin>>n;
	int s=0;
	cout<<"tong cua day la : ";
	for (int i=2; i<=n; i++)
	{
		s+= i*(i+1);	
	}
	cout<<s;
	return 0;
}
