#include<iostream>
#include<math.h>
using namespace std;

typedef struct{
    int tu;
    int mau;
} phanSo;
void nhap(phanSo &x){
    cout << "nhap tu so: "; cin >> x.tu;
    do{
        cout << "nhap mau so: "; cin >> x.mau;
    }
    while(x.mau == 0);
}

int ucln(int a, int b){
	a = abs(a);
	b = abs(b);
	while( a!=b )
	{
		if(a>b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

void rutGon(phanSo &x)
{
	int c = ucln(x.tu , x.mau);
 	x.mau = x.mau/c;
}
string soSanh(phanSo &x, phanSo &y){
    string a = " > ", b = " < ";
    if((float)(x.tu*y.mau - y.tu*x.mau)/(x.mau*y.mau) > 0)
        return a;
    return b;
}
int main(){
    phanSo ps1, ps2;
    int c = ucln(ps1.tu , ps1.mau);
    cout << "nhap phan so thu nhat: " << endl;
    nhap(ps1);
    rutGon(ps1);
    cout << "sau khi rut gon: " << ps1.tu << "/" << ps1.mau <<endl;
    cout << "nhap phan so thu 2: " << endl;
    nhap(ps2);
    rutGon(ps2);
    cout << "sau khi rut gon: " << ps2.tu << "/" << ps2.mau <<endl;
    cout <<  ps1.tu << "/" << ps1.mau << soSanh(ps1, ps2) <<  ps2.tu << "/" << ps2.mau;
    return 0;
}