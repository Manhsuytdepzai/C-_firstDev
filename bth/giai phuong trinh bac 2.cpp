#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b, c, delta, x1, x2;
	cout<<"nhap a=";cin>>a;
	cout<<"nhap b=";cin>>b;
	cout<<"nhap c=";cin>>c;
	delta==b*b-4*a*b;
	if (a==0) {
		if (b==0) {
			if (c==0) {
				cout<<"pt co vo so nghiem"<<endl;
			} else {
				cout<<"pt vo nghiem"<<endl;}
		} else {
			cout<<"pt co nghiem la"<<-c/b<<endl;
					}
	}else{
		if (delta==0){
			cout <<"pt co nghiem kep x1=x2="<<-b/2*a<<endl; 
		}
		if (delta>0) {
			cout<<"pt co nghiem la x1="<<-b-sqrt(delta)/(2*a)<<endl;
			cout<<"pt co nghiem la x2="<<-b+sqrt(delta)/(2*a)<<endl;
		}
		if (delta<0){
			cout<<"pt co nghiem thuc"<<endl;
		}
	}
	    
	return 0;
	}
