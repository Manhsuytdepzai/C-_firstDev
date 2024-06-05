#include<iostream>
#include<fstream>
using namespace std;

void Ghitep( ofstream &f1)
{
    int a[100];
    int n;
    cout<<"nhap n : ";cin>>n;
    f1<<"Day nguyen tu 1 -> n la \n";	//ghi vao tep
    for(int i = 1; i <= n; i++)
    {
           for(int i = 0; i < n; i++)
            {	cout<<"a["<<i<<"]= ";
                cin>>a[i];
            }		//ghi vao tep f1
    }
    cout<<"Da ghi tep";
}
int main()
{
	ofstream f("vao.txt");	//mo tep de ghi
	//kiem tra viec mo tep
	if(!f)  
	{ 	cout<<"Khong the ghi tep";
  		exit(1);
	}
	Ghitep(f);
	f.close();
	
	return 0;
} 