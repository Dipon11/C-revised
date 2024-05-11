#include<bits/stdc++.h>
using namespace std;

int main(){
     
    //  65/90  => Capital
    //  97/122  =. Lower case a,b
     
    char x;
    cin>>x;
      
     
    if(x >= 65 && x <= 90)
    {
         cout<< "ALPHA"  <<endl;
          cout<< "IS CAPITAL" <<endl;
        } 
        else if (x >= 97 && x <= 122)
        {
               cout<< "ALPHA"  <<endl;
               cout<< "IS SMALL" <<endl;
        }
        else
         cout<< "IS DIGIT"  <<endl;
        
        
    


    return 0;

    }