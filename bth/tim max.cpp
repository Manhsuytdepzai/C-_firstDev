#include<iostream>
#include<fstream>
using namespace std;

void max(ofstream &f1, int a, int b, int c)
{
	int max = a;
	f1<<"so lon nhat la \n";
    if (b>max)
    		max = b;
    if (c>max) 
			max = c;	
   		 
} 

void min(ofstream &f1, int a, int b, int c)
{
	int min = a;
	f1<<"so be nhat la \n";
    if (b<min)
    		min = b;
    if (c<min) 
			min = c;
} 

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	ofstream f("bai_tep2.txt");	
	if(!f)  
	{ 	cout<<"Khong the ghi tep";
  		exit(1);
	}
	max(f,a,b,c);
	min(f,a,b,c);
	f.close();
	
	return 0;
}
