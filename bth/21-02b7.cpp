#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float t,n,ls;
	float tong;
	cout<<"nhap so tien muon gui : ";cin>>t;
	cout<<"nhap thoi gian mong muon : ";cin>>n;
	cout<<"nhap lai suat : ";cin>>ls;
	for(int i=1; i<=n; i++)
	{
		tong = t * pow(1 + ls, n); 
	}
	cout<<"lai suat sau "<<n<<" thang la : "<<tong<<endl;
	return 0;
}
