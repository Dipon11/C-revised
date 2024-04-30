/*Create a function calculateArea (double radius) that calculates the area of a circle given its
radius (PI can be assumed as a constant). Call this function from main with a user-provided
radius and print the area.*/

#include <iostream>
using namespace std;

double calculateArea(double radius)
{
    double area = 3.14159 * (radius * radius); // Using accurate value of PI and double data type for area
    return area;
}

int main()
{
    int radius;
    cin >> radius;
    double f = calculateArea(radius);
    cout << f << endl;

    return 0;
}