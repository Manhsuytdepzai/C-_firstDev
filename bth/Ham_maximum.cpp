#include <iostream>
using namespace std;

double maximum(double, double, double);

int main()
{	double number1, number2, number3;
	
	cout<<"Nhap vao 3 so thuc: "<<endl;
	cout<<"number1 = ";cin>>number1;
	cout<<"number2 = ";cin>>number2;
	cout<<"number3 = ";cin>>number3;
	
	cout<<"So lon nhat trong 3 so la: "<<maximum(number1,number2,number3)<<endl;
	return 0;
}

	//dinh nghia ham maximum
double maximum(double x, double y, double z) //x,y,z la tham so hinh thuc
{	double max;		//max la bien cuc bo
	max = x;
	if (y>max)	max = y;
	if (z>max)	max = z;
	
	return max;
}
