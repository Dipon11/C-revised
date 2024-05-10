/*Write overloaded versions of the calculateArea function (from question 3) to handle
calculations for squares and rectangles, taking appropriate arguments for length, width, or
side length.*/


#include <iostream>
using namespace std;
double calculateArea(double length ,double breadth ) //square
{
    double area= length*breadth;
    return area;

}

double calculateArea(double length ,double breadth, double height) //rectangle 
{
  double area= length*breadth *height;
    return area;

}

double calculateArea(double radius)
{
    double area = 3.14159 * (radius * radius); // circle
    return area;
}

int main()
{  
    cout<< "area of what 1 circle,2 square,3 rectangle "  <<endl;
   int n;
   cin>>n;
  
   if (n==1)
   {
    double radius;
    cin>>radius;
    double f = calculateArea(radius);
     cout<< f  <<endl;
   }
   else if (n==2)
   {
    double len,bred;
    cin>>len>>bred;
    double f = calculateArea(len,bred);
     cout<< f  <<endl;
   }
   else if(n==3)
   {
    double len,bred,hei;
    cin>>len>>bred>>hei;4
    
    double f = calculateArea(len,bred,hei);
     cout<< f  <<endl;
    
   }

    return 0;
}