#include <iostream>
using namespace std;
int main(){
    /*M?ng ban ð?u m?i có 4 giá tr? c? th? ðý?c kh?i t?o*/
    /*Các v? trí khác chýa có giá tr? c? th? và chúng ta có th? thêm ph?n t? vào*/
    int arr[6] = {1, 3, 4, 5};
    
    cout << ("Mang ban dau:\n");
    for(short i = 0; i < 6; i++) cout << arr[i] << ' ';

    /*Thêm ph?n t? vào các v? trí cu?i m?ng chýa có giá tr? c? th?*/
    arr[4] = 4;
    arr[5] = 8;

    cout << ("\nMang sau khi them phan tu:\n");
    for(short i = 0; i < 6; i++) cout << arr[i] << ' ';
}

