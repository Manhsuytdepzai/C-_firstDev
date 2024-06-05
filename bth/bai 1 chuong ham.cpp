#include <iostream>
using namespace std;

double maximum(double, double, double, double);

int main()
{	double number1, number2, number3, number4;
	
	cout<<"Nhap vao 4 so thuc: "<<endl;
	cout<<"number1 = ";cin>>number1;
	cout<<"number2 = ";cin>>number2;
	cout<<"number3 = ";cin>>number3;
	cout<<"number4 = ";cin>>number4;
	
	cout<<"So lon nhat trong 4 so la: "<<maximum(number1,number2,number3,number4)<<endl;
	return 0;
}

	//dinh nghia ham maximum
double maximum(double x, double y, double z, double t) //x,y,z,t la tham so hinh thuc
{	double max;		//max la bien cuc bo
	max = x;
	if (y>max)	max = y;
	if (z>max)	max = z;
	if (t>max)  max = t;
	return max;
}
