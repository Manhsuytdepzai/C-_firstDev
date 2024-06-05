#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>
const int SIZE = 10;
int  main() 
{
	fstream 	f;
	int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  b[SIZE];
	// Ghi du lieu
	f.open("a.dat", ios::out | ios::binary);
   	if(!f)			
   	{   cout <<"Khong the tao duoc tep tin "<< f <<endl; 	
	   	exit(1);
   	}
	f.write((char *)(a), sizeof(a));  // ghi du lieu vao tep
  	f.close();
  	// Doc du lieu
	f.open("a.dat", ios::in | ios::binary);  
	if(!f)			
	{	cout <<"Khong the mo duoc tep tin "<<f<< endl; 	
		exit(1);
	}
	f.read((char *)(b), sizeof(b)); //doc du lieu tu tep ghi ra mang b
	//in mang b ra man hinh
	cout<<setw(15)<<"Chi so"<<setw(15)<<"Gia tri"<<endl;
	for (int i = 0; i < SIZE; i++)
		cout<<setw(15)<<i<<setw(15)<< b[i] <<endl;
	cout << endl;
	f.close();    
	return 0;    
}		//end main


