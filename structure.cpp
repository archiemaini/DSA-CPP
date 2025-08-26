#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    float marks;
};

int main(){
    Student S1 = {"Archie",20,99.9};
    cout << "Name " << S1.name << endl;
    cout << "Age " << S1.age << endl;
    cout << "Marks " << S1.marks << endl;
    return 0;
}