#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b, c;
	in1<<"nhap a=";cin>>a;
	in1<<"nhap b=";cin>>b;
	in1<<"nhap c=";cin>>c;
		if (a+b>c)
		{
		   		in1<<"a, b, c la ba canh cua tam giac"<<endl;
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
		   in1<<"a, b, c khong phai la 3 canh cua tam giac"<<endl;
	}
	return 0;
}
