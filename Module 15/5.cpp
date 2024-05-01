/*Write a program which will ask the user to enter his/her
 marks (out of 100). Define a
function that will display grades 
according to the marks entered as below:

Marks Grade
91-100 AA
81-90 AB
71-80 BB
61-70 BC
51-60 CD
41-50 DD
<=40 Fail */


#include<bits/stdc++.h>
using namespace std;

void checkmarks(int n)
{
    char x;
  if(n >= 91 && n <=100)
  {
        cout<< "AA"  <<endl;
       
      
  }
  else if(n>=81 && n<=90)
  {
        cout<< "AB"  <<endl;
       
  }
  else if(n>=71 && n<=80)
  {
       cout<< "BB"  <<endl;
      
  }
  else if(n>=61 && n<=70)
  {
        cout<< "BC"  <<endl;
       
  }
  else if(n>=51 && n<=60)
  {
       cout<< "CD"  <<endl;
      
  }
  else if(n>=41 && n<=50)
  {
        cout<< "DD"  <<endl;
       
  }
  else if(n<=40)
  {
         cout<< "Fail"  <<endl;
    
  }

} 
int main(){
     
    int n;
    cin>>n;
    checkmarks(n); 
    //cout<< n  <<endl;
    
    return 0;
}
