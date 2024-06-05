#include<iostream>
using namespace std;

int main()
{
	int n,sl=0;
	cout<<"nhap menh gia tien muon doi:";cin>>n;
	for(int i=0; i<=n/1000; i++)
		for(int j=0; j<=n/2000; j++)
			for(int k=0; k<=n/50000; k++)
				for(int h=0; h<=n/100000; h++)
				if(i*1000 + j*2000 + k*5000 + h*10000 == n)
				{
					//cout<<i<<"to 1000,"<<j<<"to 2000,"<<k<<"to 5000,"<<h<<" to 10000"<<endl;
					sl++;
				}
	cout<<"Co tat ca "<<sl<<" cach doi tien!\n";
	return 0;
}
