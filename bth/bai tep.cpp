#include<iostream>
#include<fstream>
using namespace std; 
void GhiSoChan(ofstream &f1)
{
    int dem = 0;
    f1<<"Day so chan tu 1 -> 100 la \n";	//ghi vao tep
    for(int a = 1; a <= 100; a++)
    {
        if(a%2 == 0)
        {
            dem ++;
            f1 << a;		//ghi vao tep f1
        }
       if(dem % 10 == 0)
               f1 << "\n";	//tao ra 1 ngat dong
       if(dem % 10 != 0)
               f1 << "\t";  //tao ra 1 khoang tab 
     }
    cout<<"Da ghi tep";
}

int main()
{
	ofstream f("bai_tep.txt");	//mo tep de ghi
	//kiem tra viec mo tep
	if(!f)  
	{ 	cout<<"Khong the ghi tep";
  		exit(1);
	}
	GhiSoChan(f);
	f.close();
	
	return 0;
} 
