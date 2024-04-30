#include<bits/stdc++.h>
using namespace std;
 
void divide(int, int);  //this declaring before a false function in the same name is known as function prototype 
int main(){
    
    // calling the function before declaration.
    divide(10, 2);
    return 0;
}
// defining function
void divide(int a, int b)
{
    cout << (a / b);
} 
    


