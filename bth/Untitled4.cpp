#include <iostream>
using namespace std;
 
int main()
{
    int i, j, k, h, sl = 0;
    for (i = 0; i <= 500; ++i)
        for (j = 0; j <= 250; ++j)
            for (k = 0; k <= 40; ++k)
            	for (h = 0; h <= 20; ++h)
                if (i * 1000 + j * 2000 + k * 5000 + h*10000 == 500000)
                {
                    //cout << i << " to 1000, " << j << " to 2000, " << k << " to 5000." << endl;
                    sl++;
                }
    cout << "Co tat ca " << sl << " Cach chon!\n";
    system("pause");
    return 0;
}
