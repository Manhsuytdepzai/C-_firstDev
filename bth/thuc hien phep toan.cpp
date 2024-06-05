#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float a, b;
	cout<<" nhap a= ";cin>>a;
	cout<<" nhap b= ";cin>>b;
	char ki_tu;
	cout<<"nhap 1 ki tu : ";cin>>ki_tu;
	switch (ki_tu){
		case '+': cout<<"thuc hien phep cong a + b = "<<a+b<<endl;break;
		case '-': cout<<"thuc hien phep tru a - b = "<<a-b<<endl;break;
		case '*': cout<<"thuc hien phep nhan a * b = "<<a*b<<endl;break;
		case '/': cout<<"thuc hien phep chia a / b = "<<a/b<<endl;break;
	}
	return 0;
} 
