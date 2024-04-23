#include<iostream>
using namespace std;

int main(){

    int value=0;
    cin>>value;

    switch (value)
    {
    case 1:
     cout<< "One"  <<endl;
    
        break;
    case 2:
     cout<< "Two"  <<endl;
    break;
    
    case 3:
     cout<< "Three"  <<endl;
    break;

    case 4:
     cout<< "Four"  <<endl;
    break;

    default:
     cout<< "Numbers didn't match"  <<endl;
    
        break;
    }







    return 0;
}