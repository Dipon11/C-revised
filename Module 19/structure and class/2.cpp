#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string EmployeeName;
    string EmployeeID;
    int JoiningYear;

private:
    float EmployeeSalary;

public:
    
    // Constructor
    Student() {}

    // Method to set student information
    void SetEmployeeInfo(string NM, string id, int jy, float es)
    {
        EmployeeName = NM;
        EmployeeID = id;
        JoiningYear = jy;
        EmployeeSalary = es;
    }

    // Method to print student information
    void DisplayInfo()
    {
        cout << "Student Name: " << EmployeeName << endl;
        cout << "Student ID: " << EmployeeID << endl;
        cout << "Joining Year: " << JoiningYear << endl;
        cout << "Student Salary: " << EmployeeSalary << endl;
    }
};
float SetBonus(int salary, int jy)
{
    int bonus;
    int total;
    if (salary > 25000 && jy < 2016)
    {
        bonus = 0.3 * salary;
        total = salary + bonus;
        return total;
        cout<< "Employee wil get 30% bonus "  <<endl;
        
    }
    else if (salary > 20000 && jy < 2018)
    {
        bonus = 0.2 * salary;
        total = salary + bonus;
        return total;
    }
    else
    {
        bonus = 0.05 * salary;
        total = salary + bonus;
        return total;
    }
}
int main()
{

    Student S1;

    S1.SetEmployeeInfo("Alpha", "ABC", 2023, 21000);
    S1.DisplayInfo();
    int f = SetBonus(20000, 2019);
    cout << f << endl;

    return 0;
}
