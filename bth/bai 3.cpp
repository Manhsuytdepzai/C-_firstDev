#include <iostream>
#include <iomanip>
using namespace std; 
int main(){
	cout<<"*===============================*"<<endl;
	cout<<"      ***     menu     ***      	"<<endl;  
	cout<<"*===============================*"<<endl; 
	cout<<"1. yuat mang (dang cot) "<<endl;
	cout<<"2. Sap yep giam dan "<<endl; 
	cout<<"3. Tim kiem gia tri y "<<endl;
	cout<<"4. Them phan tu "<<endl;
	cout<<"5. yoa phan tu "<<endl;
	
	int n;
	cout<<"nhap so phan tu cua mang : ";cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		{
			cout<<"a["<<i<<"]= ";
			cin>>a[i];
		}
	char ch;
	cout<<"Nhap vao 1 cong viec muon lam : ";cin>>ch;
	switch(ch)
	{
		case '1': 
			{
			
				cout<<"Ma tran da nhap la: "<<endl;
				for(int i = 0; i < n; i++)
					{ 
						cout<<a[i];
				    	cout<<endl;
					}
			}
				break;
		case '2':
			{
				for (int i = 0; i <= n-1; i++ )
	 				for ( int j = i+1; j < n; j++ )	
	 					if ( a[i] < a[j] )
						{
					 		int tg = a[i];
					 		a[i] = a[j];
					 		a[j] = tg;
						} 
				cout <<"\nmang sau khi sap yep la : "<<endl;
				for ( int i = 0; i <= n-1; i++ )
				 	cout<<a[i]<<endl;
			}
				break; 
		case '3':
			{ 
				int y,g=0;
            	cout<<" y can tim kiem = ";
            	cin>>y;
            	for(int i = 0; i<n ; i++)
   					if(y==a[i])
   						{
						   cout<<"\ngia tri y o vi tri thu: "<< i <<endl;
						   g++;
   						}
   					if(g==0)
   					cout<<"khong co gia tri y trong mang"; 				
			}
				break;		
		case '4':	
		 	{
				int vi_tri, phan_tu;

			    cout << "\nNhapp vi tri chen phan tu: \n";
			    cin >>  vi_tri;
			 
			    cout << "Nhap phan tu muon chen: \n";
			    cin >>  phan_tu;
			    for (int i = n - 1; i >= vi_tri - 1; i--)
			    		a[i+1] = a[i];
			   
			    		a[vi_tri-1] = phan_tu;
			 
			    cout << ("Mang sau khi chen:\n");
			    for(int i = 0; i < n+1; i++)
				{ 
					cout<<a[i];
			    	cout<<endl;
				}
			}
				break;			
		case '5':
			{
				int vitrixoa;
			    cout << "\nNhapp vi tri yoa phan tu: \n";
			    cin >>  vitrixoa;
			    for (int i = n - 1; i >= vitrixoa - 1; i--)
			   		for (int j=vitrixoa -1; j<=n-1; j++ ) 
			 			 a[vitrixoa-1] =a[vitrixoa++];
			 			 n--; 
			    cout << ("Mang sau khi yoa:\n");
			    for(int i = 0; i < n; i++)
				{ 
					cout<<a[i];
			    	cout<<endl;
				}
			}
				break;				
			}
			cout<<"Hoan thanh cong viec !"<<endl;	
	return 0; 
}

