#include<iostream>
using namespace std;
int Fibonaci(int n)
{
    if(n==0) 
	return 0;
    else 
		if(n==1) 
		return 1;
		else
    	return Fibonaci(n-1)+Fibonaci(n-2);
}
int main()
{
    int n;
    cout<<"Nhap vao so nguyen can tinh: ";
    cin>>n;
    for(int i=1;i<=n;i++)
        cout<<Fibonaci(i)<<" ";
        cout<<"...";
    return 0; 
}
