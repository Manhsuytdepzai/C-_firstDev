#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

/*class student{
private:
    string name;
    int age;
public:
    static int number;
    student(string name, int age)
    {
        this-> name= name;
        this-> age=age;
    }
};

int student::number=0;
int main(){
    student s1("manh", 19);
    student s2("phuong", 18);
    s1.number=8;
    s2.number=9;
    cout<<s1.number<<" "<<s2.number;
    return 0;
}*/

int main(){
    int n;
    cout<<"nhap n= ";cin>>n;

    int *p;
    p = new int[n];
    /*for(int i=0;i<n;i++)
    {
        cout<<"nhap phan tu thu "<<i+1<<" : ";
        cin>>*(p+i);

    }*/
    srand ((unsigned)time(NULL));
    for(int i=0; i<n; i++)
    {
        *(p+i)=rand()%99 + 1;
    }
     cout<<"mang random : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<*(p+i)<<"\t";
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(*(p+i)>*(p+j))
            swap(*(p+i),*(p+j));
        }
    }
    cout<<"\nmang vua nhap la : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<*(p+i)<<"\t";
    }
}