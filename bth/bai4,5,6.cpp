#include<iostream>
#include<fstream>
#include<math.h>
using namespace std; 
//bai 4
void Nhap_Mang( int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
    	cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}

int ktsnt(ofstream &in2, int n)
{
    if (n<2) 
        return 0;
    for (int i=2; i<=sqrt(n); i++) 
        if (n%i==0) 
            return 0;
    return 1;
}
int lietkesnt(ofstream &in2, int a[], int n)
{
	in2<<"\nso nguyen to trong day la : ";
    for (int i=0; i<n; i++)
    if (ktsnt(in2, a[i])) 
	in2<<a[i]<<"\t";
	in2<<endl;
}
/*
void so_hoan_hao(ofstream &in2, int a[], int n)
{
	for ( int i = 0; i < n; i++ ) 
	{ 		int S = 0;		
			for (int j = 0; j < i+1; j++)
		 	{
		 		if ( a[i] % a[j] == 0 )		
				 S = S + a[j];	
 			if ( S == a[i] ) 	
			in2<<"so hoan hao "<< a[i] <<"\t";
			  } 
 	}
}

void so_doi_xung(ofstream &in2, int a[], int n)
{
	
}*/

void Xuat_Mang(ofstream &in2, int a[], int n)
{
	in2<<n<<endl;
    for (int i = 0; i < n; i++)
    {
    	in2<<a[i]<<"\t";
    }
}
int main()
{
	int n;
	cout<<"n = ";cin>>n;
	int a[n];
	Nhap_Mang(a,n);
	ofstream f("in2.txt");
	if(!f)  
	{ 	cout<<"Khong the ghi tep";
  		exit(1);
	}
	Xuat_Mang(f,a,n);
	ktsnt(f,n);
	lietkesnt(f,a,n);
	//so_hoan_hao(f, a, n);
	//so_doi_xung(f,a,n);
	cout<<"da ghi tep";
	return 0;
	
}
