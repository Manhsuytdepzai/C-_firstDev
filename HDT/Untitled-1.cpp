#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1(cin>>name, cin>>age);
    Student s2(cin>>name, cin>>age);
    s1.display();
    s2.display();
    return 0;
}