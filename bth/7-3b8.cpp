#include <iostream>
using namespace std;
int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}
int main()
{
    int n, k;
    cout<<"nhap k can tinh : ";
    cin>>k;
    cout << " nhap n : ";
	cin >> n;
    cout << "to hop chap k cua " << n << " la: " << giaiThua(n)/(giaiThua(k)*giaiThua(n-k));
    return 0;
}
