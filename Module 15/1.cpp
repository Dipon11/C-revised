/*Create a 2D array of size 4*5 and store values by taking input from user. Now, write a C++
program to find the maximum number from row 1, minimum number from row 2, even
numbers from row 3 and prime numbers from row 4 of the 2D array.
*/

#include <iostream>
#include <cmath>
using namespace std;



int main() {
    int ROWS = 4;
    int COLS = 5;
    
    int arr[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
        }
    }

    // Finding maximum number from row 1
    int max_row1 = 0;

    for (int j = 0; j < COLS; j++) 
    { 
        if (arr[0][j] > max_row1) {
            max_row1 = arr[0][j];
            
        }
    }

    cout << "Maximum number from row 1: " << max_row1 << endl;
    
    
    int min_row2 = arr[1][0];

    for (int j = 0; j < COLS; j++) 
    { 
        if (arr[1][j] < min_row2) {
           min_row2 = arr[0][j];
            
        }
    }
    cout << "Minimum number from row 2: " << min_row2<< endl;


    // Row 3 even 

    for (int j = 0; j < COLS; j++) 
    { 
        if (arr[2][j] % 2 ==0)
         {
           cout<< arr[2][j]  <<endl;
              
         }
    }

    // Prime 

//      for (int j = 0; j < COLS; j++) 
//     { 
//         if (arr[3][j] % 2 ==0)
         
//          {
           
//              isPr
              
//          }
//    }
   
    return 0;
}
