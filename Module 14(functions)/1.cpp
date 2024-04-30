/*Write a function sum that takes two integer arguments a and b and returns their sum. In
your main function, prompt the user to enter two numbers, call the sum function with those
values, and print the result.*/


#include<bits/stdc++.h>
using namespace std;


int sum(int x,int y)
{

     int sum=x+y;
     return sum;
}

int main(){
     

     int a,b;
     cout<< "Give two integer number please :"  <<endl;
     cin>>a>>b;

     int f= sum(a,b);
     cout<<"The sum is : "<< f <<endl;
    

    return 0;
}
