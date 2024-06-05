#include<iostream>
#include<fstream>
using namespace std;

void max(ofstream &in1, int a, int b, int c)
{
	int max = a;
	in1<<"so lon nhat la \n";
    if (b>max)
    	if (c>b)
    		max = c;
    	else 
			max = b;	
   		 
} 

void min(ofstream &in1, int a, int b, int c)
{
	int min = a;
	in1<<"so be nhat la \n";
    if (b<min)
    	if (c<b)
    		min=c;
    	else 
			min=b;	
} 

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	ofstream f("bai_tep1.txt");	
	if(!f)  
	{ 	in1<<"Khong the ghi tep";
  		exit(1);
	}
	max(f,a,b,c);
	min(f,a,b,c);
	f.close();
	
	return 0;
} 
