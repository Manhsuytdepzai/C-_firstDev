#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	char ki_tu;
	int dem=0, demkituk=0;
	do
	{
	cout<<"nhap 1 ki tu : ";cin>>ki_tu;
	if ((char)ki_tu !='*')
	    dem ++;
	if ((char)ki_tu == 'k')
	    demkituk++;
   }while(ki_tu != '*');
    cout<<"so ki tu da nhap la : "<<dem<<endl;
    cout<<"so ki tu k la : "<<demkituk<<endl;
   
	return 0;
}
