#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
   char name[100];
   int roll;
   int cls;
   char section;
};
int main()
{

   Student rahim;
   rahim.roll = 29;
   rahim.cls = 9;
   rahim.section = 'A';
   char nm[100] = "Rahim";
   strcpy(rahim.name, nm);

   Student karim;
   karim.roll = 55;
   karim.cls = 9;
   karim.section = 'C';
   char nm2[100] = "Karim";
   strcpy(karim.name, nm2);

   cout << rahim.roll << " " << rahim.section << endl;

   cout << karim.roll << " " << karim.name << endl;

   return 0;
}
