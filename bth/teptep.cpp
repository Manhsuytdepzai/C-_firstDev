#include<iostream>
#include<fstream>
using namespace std;
int ucln(int x, int y) 
{
    if (y == 0) 
	return x;
	if (x % y == 0) 
    return y;
    return ucln(y, x % y);
}
void UCLN(ofstream &f1,int x, int y)
{
    f1<<ucln(x,y);
}
int main(){

    ofstream f("luu.txt");
    int a,b;
    cout<<"nhap a, b : ";cin>>a>>b;
    if(!f)
    {
        cout<<"Khong the ghi tep"<<endl;
        exit(1);
    }
    ucln(a,b);
    UCLN(f,a,b);
    f.close();
    cout<<"da ghi tep !";
    return 0;
}