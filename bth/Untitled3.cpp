#include<iostream>
#include<iomanip>

using namespace std;
typedef struct{
	char manv[30];
	char tennv[30];
	float hesl;
	int luongcb;
	int phucl;
	long long tong;
} nhanvien;

void nhap(nhanvien nv[], int n)
{
	
	for(int i = 0; i < n ; i++)
          {
			
                
		      cout<<"\n\t\t _____moi nhap nhan vien thu "<<i+1<<" :_____ "<<endl;
	                
		      cout<<"\n\t\t +>Ma nhan vien : ";   cin.getline(nv[i].manv, 31);
		      
		      cout<<"\n\t\t +>He so luong : ";    cin>>nv[i].hesl; 
		      
		      cin.ignore();
                
				cout<<"\n\t\t +>Ten nhan vien : ";  cin.getline(nv[i].tennv, 31);
                
           }
}	

void money(nhanvien nv[], int n)
{
	int i = 0;
          
	do{    
              
	    nv[i].luongcb = nv[i].hesl * 27500;
        	    
	    nv[i].phucl = nv[i].luongcb * 0.25;
        	    
	    nv[i].tong = nv[i].luongcb + nv[i].phucl;
              
	    i++;
	    
	} while( i < n);	
}

void bang(nhanvien nv[], int n)
{
	cout << "\n\n"<<setw(20) << left << "MA NHAN VIEN";
	cout << setw(15)<< left<<"TEN NHAN VIEN";
	cout <<setw(15)<< left<<"HE SO LUONG";
	cout <<setw(15)<< left<<"LUONG CO BAN";
	cout <<setw(15)<< left<<"LUONG PHU CAP";
	cout <<setw(15)<< left<<"TONG LUONG"<<endl;
          
	for(int i = 0; i < n ; i++)
 	{
                
  		cout<<setw(20)<< left<<nv[i].manv;
  		cout<<setw(15)<<nv[i].tennv;
		  cout <<setw(15)<< left<<nv[i].hesl;
		  cout <<setw(15)<< left <<nv[i].luongcb;
		  cout <<setw(15)<< left<<nv[i].phucl;
		  cout <<setw(15)<< left<<nv[i].tong<<endl;
                
  	}
}

void giamdan(nhanvien nv[], int n)
{
          for(int i = 0 ; i < n-1 ; i++)
	{
	         for(int j = i+1 ; j < n ; j++ )
	         {
	               if(nv[i].tong < nv[j].tong )
			     {
			             nhanvien tg = nv[i];
			             nv[i] = nv[j];
			             nv[j] = tg;
			     } 
	         } 
	} 
	
	bang(nv,n);
}

void xoa(nhanvien nv[], int n)	
{
				nhanvien vi_tri_xoa;
			    for (int i = n - 1; i >= vi_tri_xoa - 1; i--)
			   		for (int j=vi_tri_xoa -1; j<=n-1; j++ ) 
			 			 a[vi_tri_xoa-1] =a[vi_tri_xoa++];
			 			 n--; 
			    cout << ("Mang sau khi xoa:\n");
			    for(int i = 0; i < n; i++)
				{ 
					cout<<a[i];
			    	cout<<endl;
				}
}

main()
{
       int n;
       cout<<"\t\t\t\t\t NHAP SO NHAN VIEN : ";
       cin >> n;
       cin.ignore();
       nhanvien nv[n];
       nhap(nv,n);
       money(nv,n);
       bang(nv,n);
       cout<<"\n\n"<<setw(30)<<"BANG CAC NHAN VIEN CO NHIEU TIEN :";
       giamdan(nv,n);
       return 0; 
}
