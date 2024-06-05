#include<iostream>
using namespace std;

void nhap(int a[10][10], int n){
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cout << "a[" << i << "][" << j << "] = "; cin >> a[i][j];
        }
    }
}
void xuat(int a[10][10], int n){
    for(int i = 0; i < n; i++){
        for(int j=0 ; j < n ; j++){
                cout << a[i][j] <<"  ";
        }
        cout << endl;
    }
}
void tbc(int a[10][10], int n){
    int s=0;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(a[i][j] % 7 == 4){
                s+=a[i][j];
            }
        }
    }
    cout<<s;
}
int mincheophu(int a[][10], int n)
{
	int i, j, min;
	min = a[0][0];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(min>a[i][j] && i==n-j-1)
				min = a[i][j];
	return min;
}
int main(){
    int a[10][10];   
    int n;              
    cout<<"Nhap cap cua ma tran: "; cin>>n;
    nhap(a, n);  
    cout<<"Mang da nhap: " << endl;
    xuat(a, n); 
    cout<<"trung binh cong so trong mang chia cho 7 du 4 la: "<<endl;
    tbc(a,n);
    cout<<"so nho nhat trong mang la: "<<endl;
    cout<<mincheophu(a,n);
    return 0;
}