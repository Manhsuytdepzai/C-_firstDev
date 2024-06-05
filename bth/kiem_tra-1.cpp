#include<iostream>
#include<iomanip>
using namespace std;

//phan a
int nhap_mang (int t,int a[])
{
	for(int i = 0; i < t; i++)
		{
			cout<<"a["<<i<<"] = ";
			cin>>a[i];
		}
}

int xuat_mang (int t,int a[])
{
	cout << setw(10)<< "vi tri" << setw(15) << "gia tri"<<endl;
	for ( int j = 0; j <= t; j++ )
	cout << setw(7) << j << setw(17) << a[j] << endl;
}
//phan b
void sap_xep (int n, int a[])
{
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << setw(10)<< "vi tri" << setw(15) << "gia tri"<<endl;
	for ( int j = 0; j < n; j++ )
	cout << setw(7) << j << setw(17) << a[j] << endl;
    
}
// c
void tim_x (int n, int a[], int x)
{
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
		cout << setw(10)<< "vi tri" << setw(15) << "gia tri"<<endl;
		for ( int j = 0; j <= n; j++ )
		cout << setw(7) << j << setw(17) << a[j] << endl;
	}
}

int main()
{
	int n;
	int a[10000];
	cout<<"so phan tu cua mang (chi duoc tu 0 den 100) la: ";
	cin>>n;
	if(0 < n && n < 100)
	{
		nhap_mang(n, a);
		xuat_mang(n, a);
		cout<<"mang sau khi sap xep giam dan: \n";
		sap_xep(n, a);	
	}
	else
	cout<<"\n so phan tu qua lon hoac qua nho";
	int x;
	cout<<"gia tri can tim la: ";
	cin>>x;
	tim_x(n,a,x);
	
	
	return 0;
}










