#include<iostream>
#include<fstream>
#include<math.h>
using namespace std; 
//bai 1
void max(ofstream &in1, int a, int b, int c)
{
	in1<<"- so lon nhat la ";
	int max = a;
    if (b>max)
    	if (c>b)
    	{
    		max=c;
    		in1<<max;
		}
    	else 
		{
			max=b;
			in1<<max;
		}
	else 
		{
			max = a;
			in1<<a;
		}		
   		 
} 

void min(ofstream &in1, int a, int b, int c)
{
	in1<<"\n- so be nhat la : ";	
	int min = a;
    if (b<min)
    	if (c<b)
    	{
    		min=c;
    		in1<<min;
		}
    	else 
		{
			min=b;
			in1<<min;
		}
	else 
	{
		min = a;
		in1<<a;
	}								
}
//bai 2
void pt_bac2(ofstream &in1, int a, int b, int c)
{
	float delta = b*b - a*a*c;
	in1<<"\n- nnghiem cua phuong trinh"<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<" la :\n ";
	if (a==0) 
	{
	if (b==0) {
		if (c==0) {
			in1<<" + vo so nghiem"<<endl;
		} else {
				in1<<" + vo nghiem"<<endl;}
		} else {
			in1<<" + x = "<<-c/b<<endl;
				}
	}else{
		if (delta==0)
		{
			in1<<" + nghiem kep x1=x2="<<-b/2*a<<endl; 
		}
		if (delta>0) 
		{
			in1<<"+ x1="<<-b-sqrt(delta)/(2*a)<<endl;
			in1<<"+ x2="<<-b+sqrt(delta)/(2*a)<<endl;
		}
		if (delta<0)
		{
			in1<<" + nghiem thuc"<<endl;
		}
	}
}
//bai 3
void tam_giac(ofstream &in1, int a, int b, int c)
{
	in1<<"- xet 3 so a, b, c bat ky ta thay : "<<endl;
	if (a+b>c && (a>0 && b>0 && c>0))
		{
		   		in1<<"+ a, b, c la ba canh cua tam giac ";
                if (a==b && b==c)
				{
    	            in1<<"va la 3 canh cua 1 tam giac deu"<<endl;         
		        }else
		        if (sqrt(a*a+b*b)== c || sqrt(a*a+c*c)== b || sqrt(c*c+b*b)== a)
				{
		        	in1<<"va la 3 canh cua 1 tam giac vuong"<<endl;
		       	}else
		        if ((a==b && b!=c) || (b==c && b!=a))
				{
		        	in1<<"va la 3 canh cua 1 tam giac can, voi a,b la 2 canh ben"<<endl;
				}
	}else{
		   in1<<"+ a, b, c khong phai la 3 canh cua tam giac"<<endl;
	}
	cout<<"da ghi tep !"<<endl;
}

int main()
{
	int a, b, c;
	cout<<"nhap a = ";cin>>a;
	cout<<"nhap b = ";cin>>b;
	cout<<"nhap c = ";cin>>c;
	ofstream f("out1.txt");
	if(!f)  
	{ 	cout<<"Khong the ghi tep";
  		exit(1);
	}
	max(f, a, b, c);
	min(f, a, b, c);
	pt_bac2(f, a, b, c);
	tam_giac(f, a, b, c);
	f.close();
	
	return 0;	
}


