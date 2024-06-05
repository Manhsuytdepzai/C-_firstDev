#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a, b, c;
	cout<<"nhap a = ";cin>>a;
	cout<<"nhap b = ";cin>>b;
	cout<<"nhap c = ";cin>>c;
	float delta=b*b-4.0*a*c;
	if (a==0)
	{
		if (b==0)
		{
			if (c==0)
				cout <<"pt vo so nghiem !"<<endl;
			else 
				cout<<"pt vo nghiem !"<<endl;	
		}else
		{
			cout<<"pt co nghiem duy nhat la x = "<<float(-c/b)<<endl;
		}
	}else{
		if (delta==0)
			cout<<"pt co nghiem kep x1=x2= "<<float(-b/2.0*a)<<endl;
		if (delta<0)
			cout<<"pt co nghiem thuc "<<endl;
		if (delta>0)
			cout<<"pt co 2 nghiem phan biet x1 = "<<float((-b-sqrt(delta))/2.0*a)<<" ; x2 = "<<float((-b+sqrt(delta))/2.0*a)<<endl;	
	}
	return 0;
}
