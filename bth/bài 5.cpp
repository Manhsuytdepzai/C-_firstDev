#include <iostream>
#include<math.h> 
using namespace std;

int x(int n)
{
    int s = 0;
    if(n==0)
        return 1;
    for( int i = n; i<=n; i++)
        s = s + (pow(i,2)*x(n-i));
    return s;
}

int main()
{
    int n;
    cout << "Nhap n = "; cin >> n;
    cout << "Day x(n) = " << x(n) << endl;
    return 0;
}
