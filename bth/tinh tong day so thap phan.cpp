#include <iostream>
#include <math.h>

using namespace std ;
int main(){
	float n, i;
	float sum = 0;
	cout<<"nhap n : ";cin>>n;
	for (i=1; i<=n;i++ )	 
		sum=sum+1/i;
		cout<<"tong = "<<sum<<endl;
	return 0;
}
