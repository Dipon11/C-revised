/*Create a function getAverage (int num1, int num2, int num3) that calculates the average of
three integers. Call this function in main with user-provided numbers and print the average.*/

#include<bits/stdc++.h>
using namespace std;

double getAverage (double num1, double num2, double num3)
{

    double avg;
    avg=(num1+num2+num3)/3;
     return avg;

}

int main(){
     
     double a,b,c;
     cin>>a>>b>>c;

     double f=getAverage(a,b,c);

      cout<< f  <<endl;
     
    

    return 0;
}
