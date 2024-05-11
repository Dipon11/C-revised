#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x, z;
    char y; 
    cin >> x >> y >> z;

    if(y == '<')
    {
         if(x < z)
        {
            cout<< "Right"  <<endl;
           
        }
        else{
             cout<< "Wrong"  <<endl;
            
        }

    }
    else if(y =='>')
    {
         if(x > z)
        {
            cout<< "Right"  <<endl;
           
        }
        else{
             cout<< "Wrong"  <<endl;
            
        }
    }
     else if(y =='=')
    {
         if(x == z)
        {
            cout<< "Right"  <<endl;
           
        }
        else{
             cout<< "Wrong"  <<endl;
            
        }
    }
    return 0;
}
