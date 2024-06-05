#include<iostream>
using namespace std;

int main()
{
    int a[100][100],n,m;
    int s=0;
    cout<<"nhap so hang : ";cin>>n;
    cout<<"nhap so cot : ";cin>>m;
    cout<<" nhap pan tu mang : "<<endl;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    cout<<"mang da nhap la : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout<<a[i][j]<<"\t";
            cout<<endl;
    }
    cout<<"tong hang : ";
    for(int i=0; i<n; i++)
    {
        a[i][m]=0;
        for(int j=0; j<m; j++)
            a[i][m] = a[i][m] + a[i][j];
    return 0;        

}