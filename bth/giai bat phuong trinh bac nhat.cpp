#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, b, x;
	cout<<"nhap a=";cin>>a;
	cout<<"nhap b=";cin>>b;
	if (a>0){
		if (b==0)
		{
			cout<<"pt co nghiem x>0"<<endl;
		}
		else
		{
			cout<<"pt co nghiem x>"<<-b/a<<endl;
		}
	}
		else
		{
			if (b==0) 
			{
				cout<<"pt co nghiem x<0"<<endl;	
			}
			else
			{
			    cout<<"pt co nghiem x<"<<-b/a<<endl;	
			}
		}
	return 0;
}
