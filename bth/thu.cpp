#include <iostream>
using namespace std;
int main(){
    /*M?ng ban �?u m?i c� 4 gi� tr? c? th? ��?c kh?i t?o*/
    /*C�c v? tr� kh�c ch�a c� gi� tr? c? th? v� ch�ng ta c� th? th�m ph?n t? v�o*/
    int arr[6] = {1, 3, 4, 5};
    
    cout << ("Mang ban dau:\n");
    for(short i = 0; i < 6; i++) cout << arr[i] << ' ';

    /*Th�m ph?n t? v�o c�c v? tr� cu?i m?ng ch�a c� gi� tr? c? th?*/
    arr[4] = 4;
    arr[5] = 8;

    cout << ("\nMang sau khi them phan tu:\n");
    for(short i = 0; i < 6; i++) cout << arr[i] << ' ';
}

