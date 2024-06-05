#include <iostream>
using namespace std;
int main(){
	float so_thuc,s=0;
	int dem=0, demso0=0;
	do
	{
	cout<<"nhap 1 so thuc : ";cin>>so_thuc;
	if (so_thuc !=0)
	    {
	    	dem ++;
	    	s=s+so_thuc;
		}
	if (so_thuc<0)
	    demso0++;
   }while(so_thuc !=0);
    cout<<"so luong so thuc da nhap la : "<<dem<<endl;
    cout<<"so luong so thuc am la : "<<demso0<<endl;
    cout<<"tbc so thuc : "<<s/dem<<endl;
	return 0;
}
