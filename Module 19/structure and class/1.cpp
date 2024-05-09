#include <bits/stdc++.h>
using namespace std;
class laptop
{
public:
   char name[100];
   char osname[100];
   int ram;
   int ssd;
   char section;
};
int main()
{

   laptop hp;
   char nm[100] = "Hp";
   strcpy(hp.name, nm);
   char ny[100] = "Windows";
   strcpy(hp.osname, ny);
   hp.ram = 8;
   hp.ssd = 128;

   laptop asus;
   char nt[100] = "Asus";
   strcpy(asus.name, nt);
   char nb[100] = "Windows";
   strcpy(asus.osname, nb);
   asus.ram = 8;
   asus.ssd = 256;

   cout << hp.ram << " " << asus.ram << endl;
   cout << hp.name << " " << asus.name << endl;

   return 0;
}
