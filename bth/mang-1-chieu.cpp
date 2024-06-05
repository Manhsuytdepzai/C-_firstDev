#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	cout<<"nhap so n phan tu: ";
	cin>>n;
	int a[100000];
	for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
	int yeu_cau;
	cout<<"1. xuat mang (dang cot)\n";
	cout<<"2. sap xep giam dan\n";
	cout<<"3. tim kiem gia tri x\n";
	cout<<"4. them phan tu\n";
	cout<<"5. xoa phan tu\n";
	cout<<"\nyeu cau muon thuc hien la ";
	cin>>yeu_cau;
	if(1<=yeu_cau<=5)
	
		switch(yeu_cau)
		{
			case 1: 
			{for(int i=0;i < n; i++)
				cout<< a[i]<<"\n";
			break;	
			}
			case 2:
			{
				cout<<"\nmang sau khi sap xep\n";
				for (int i = 0; i < n; i++)
				{
					for(int j = i; j < n; j++){
						if (a[i] < a[j])
						{
							int temp = a[i];
							a[i] = a[j];
							a[j] = temp;
						}
					}
				}
				for(int i = 0; i < n; i++){
					cout << a[i] <<"\t";
				}
			break;	
            }
        
					
		}
	else
		cout<<"khong co yeu cau do"	;		
	return 0;
}
