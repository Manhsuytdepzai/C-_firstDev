#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int main(){
    char a[25][25];
    int n;
    int k;
    cout << "nhap so hoc sinh: ";cin >> n;
    for(int i = 0 ; i < n; i++){
	    cout << "nhap ten: " << i + 1 << " : ";
        if(i == 0){
            cin.ignore();
        }
        cin.getline(*(a + i), 25);
    }
    /*cout << "nhap ten thu n : "; cin >> k;
    cout << "in ra ten: " << *(a + k - 1) << endl;*/
    for(int i = 0 ; i < n; i++)
    {
        if(*(a+i) %2 == 0)
        cout<<"\t"<<*(a+i);
    }
    return 0;
}