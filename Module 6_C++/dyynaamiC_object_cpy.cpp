#include <bits/stdc++.h>
using namespace std;
class Person
{

public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
};

int main()
{

    Person *rakib = new Person("Rahim Khan", 19);
    Person *sakib = new Person("Sakib Khan", 21);

    // rakib=sakib;
    //  delete sakib; ??  Segnmentation Fault - Eigther the memory that is trying to be accesed dosent exist or doesnt have acess too
    //  rakib->name=sakib->name;
    //  delete sakib;
    // Easier waay to copy dynamic classes
    *rakib = *sakib;
    delete sakib;
    cout << rakib->name << " " << rakib->age << endl;
    delete sakib;

    return 0;
}
