/*Write a function isPositive (int num) that takes an integer num and returns true if it's
positive, false otherwise Use this function in main to check if a user-entered number is
positive, negative, or zero.*/


#include<bits/stdc++.h>
using namespace std;
 
bool isPositive (int num)
{
    bool ok;
   if(num>0){
     ok=true;
     return ok;
   }
    else
    ok=false;
   return ok;   
}
int main(){
     
     int num;       
     cin>>num;
     bool g=isPositive(num);
     
    if(g=false )
    {
      if (num<0)
      cout<< "Negetive "  <<endl;
      else if (num==0)
      cout<< "Zero"  <<endl;
    }
    return 0;
}
