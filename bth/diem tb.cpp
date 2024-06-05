#include <iostream>

#include<math.h>

using namespace std;

int main () {
	
	float dktr, dgk, dck, dtb; // diem kiem tra, diem giua ki, diem cuoi ki, diem trung binh
	
	cout<<" nhap diem kiem tra : ";cin>>dktr;
	
	cout<<" nhap diem giua ki : ";cin>>dgk;
	
	cout<<" nhap diem cuoi ki : ";cin>>dck;
	
	dtb = (dktr+dgk+dck)/3;
	
    if (dtb>=9){
    	cout<<"hang A"<<endl;
	}
        
    if (7<=dtb&&dtb<9) {
    	 cout<<"hang B"<<endl;
	}
	   
	if (5<=dtb&&dtb<7){
		cout<<"hang C"<<endl;
	}
		
	if (dtb<5){
		cout<<"hang D"<<endl;
	}
		  
	return 0;
}
