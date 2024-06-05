#include <iostream.h>

void swap2(int *a, int *b)	//truyen bang tham chieu
{
int  tmp;
tmp = *a;  
*a = *b;  
*b = tmp;  
return;
}
int main()
{
	int x = 1, y = 2;
	swap2(&x, &y);		//tac dong gia tri goc
	cout<<"x = "<<x<<", y = "<<y<<endl;
	return 0;
}