#include <iostream.h> 
#include <fstream.h> 
void doctep(char tentep[], int &m, int &n)    
{  fstream  f(tentep,ios::in);
   if(!f)		
   {	cout << "Khong the mo duoc tep tin "<<f<<endl;
		exit(1);
   }
   f>>m>>n;	
   f.close();
}
int UCLN(int m, int n)
{
	while(m!=n)
   		if(m>n) 
		   	m=m-n;
		else
       		n=n-m;    
    return m;
}
void ghitep(char tentep[], int &m, int & n)
{
     fstream  f1(tentep,ios::out);
     if(!f1)			
     { 	cout<<"Khong the tao duoc tep tin"<<f1<<endl;		
	 	exit(1);
     }
     f1<<"\n"<<"UCLN = "<<UCLN(m,n);   //ghi vao tep
}
int main() 
{ 
	char 	f[30];			  
  	int  	n, m;
  	cout<<"\n Nhap ten tep doc du lieu: "; cin.getline(f,30);
  	doctep(f, m, n);
  	cout<<"\n Nhap ten tep ghi du lieu: "; cin.getline(f,30);
  	ghitep(f, m, n);
  	
  	return 0;
}
