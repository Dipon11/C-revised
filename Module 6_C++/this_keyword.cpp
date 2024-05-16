#include <bits/stdc++.h>
using namespace std;
class Person
{

public:
    string name;
    int age;
    int marks1, marks2;
    Person(string name, int age, int marks1, int marks2)
    {
       this->age=age;
       this->name=name;
       this->marks1=marks1;
       this->marks2=marks2;
    }
    void print()
    {
        cout << name << " " << age << endl;
    }
    int total_marks()
    {
        return marks1+marks2;
    }
};

int main()
{

    Person rakib("Rahim Khan", 19, 95, 85);
    rakib.print();
    // cout << rakib.age << " " << rakib.name << endl;
    cout<< rakib.total_marks()  <<endl;
    
    return 0;
}
