
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float a, b, c, d, delta; 
	cout<<"	nhap a : ";cin>> a;
	cout<<"	nhap b : ";cin>> b;
	cout<<"	nhap c : ";cin>> c;
	cout<<"	nhap d : ";cin>> d;
	if (a==0)
		{
			cout<<"	vui long nhap lai a : ";cin>>a;
		}
	cout<<"	Ta co bat phuong trinh : " <<a<<"X^2 + "<<b<<"X + "<<c<<" > "<<d<<endl;
	cout<<"	hay "<<a<<"X^2 + "<<b<<"X + "<<c-d<<" > "<<0<<endl;
	delta=b*b-4*a*(c-d);
	cout<<"	Giai phuong trinh bac 2 : "<<a<<"X^2 + "<<b<<"X + "<<c-d<<" = "<<0<<endl;
	if (delta==0)
			{
				if(a<0)
				{
					cout<<"	Tap nghiem cua BPT l rong"<<endl;
				}
			else
				{
					cout<<"	Tap  nghiem cua phuong trinh la R\ {"<<-b/2*a<<"}"<<endl;
				}
			}	
		if (delta<0)
			cout<<"	pt bac 2 co nghiem thuc ==> "<<endl;	
			{
				if (a<0)
				{
					cout<<"	Tap nghiem cua bat phuong trinh la rong "<<endl;
				}
			else 
				{
					cout<<"	Tap  nghiem cua phuong trinh la R"<<endl;
				}
			}
		if (delta>0)
			cout<<"	Pt co 2 nghiem phan biet x1 = "<<float((-b-sqrt(delta))/2.0*a)<<" ; x2 = "<<float((-b+sqrt(delta))/2.0*a)<<endl;	
			{
				if(a<0)
				{
					cout<<"	Tap  nghiem cua phuong trinh la : ( X < "<<float((-b-sqrt(delta))/2.0*a)<<") U ( X > "<<float((-b+sqrt(delta))/2.0*a)<<")"<<endl;
				}
			else
				{
					cout<<"	Tap  nghiem cua phuong trinh la : "<<float((-b-sqrt(delta))/2.0*a)<<";"<<float((-b+sqrt(delta))/2.0*a)<<endl;
				}
			}	
	return 0; 
} 
