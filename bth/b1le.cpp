#include <iostream>
#include <math.h>
using namespace std;

bool chinhPhuong(int n) {
    if(pow(sqrt(n), 2) == n) {
        return true;
    }
    return false;
}

bool pitago(int i, int j, int n) {
    if(chinhPhuong(i) && chinhPhuong(j)) {
        if(i + j == n) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "nhap so n: "; cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(pitago(i, j, n)) {
                cout << n << " = " << i << " + " << j << endl;
            }
        }
    }
    return 0;
}