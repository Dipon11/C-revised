#include <iostream>
#include <cstring>
using namespace std;

struct Person {
    char name[20];
    int age;
    float salary;

    void display(const char* n, int a, float s) {
        strcpy(name, n);
        age = a;
        salary = s;

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    struct Person p1, p2;
    
    p1.display("Rahim", 19, 2000);
    p2.display("Paapon",15,2009);

    return 0;
}
