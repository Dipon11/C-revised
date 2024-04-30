/*Write a function isEven (int num) that takes an integer num as input and
returns true if num is even, false otherwise. In your main function, ask the user for a
number and use the isEven function to determine and display whether it's even or odd.*/


#include <iostream>
using namespace std;

int isEven(int x) {
   
    bool ok;
    if (x % 2 == 0)
        ok = true;
    else
        ok = false;
    return ok;

}

int main() {
    int n;
    cin >> n;
    int f = isEven(n);

    if (f == true)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}
