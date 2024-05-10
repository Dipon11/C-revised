/*Create a 2D array of size 4*5 and store values by taking input from user. Now, write a C++
program to find the maximum number from row 1, minimum number from row 2, even
numbers from row 3 and prime numbers from row 4 of the 2D array.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ROWS = 4;
    int COLS = 5;

    int arr[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Finding maximum number from row 1
    int max_col1 = 0;

    for (int j = 0; j < ROWS; j++)
    {
        if (arr[j][0] > max_col1)
        {
            max_col1 = arr[j][0];
        }
    }

    cout << "Maximum number from row 1: " << max_col1 << endl;

    int min_row2 = arr[1][0];

    for (int j = 0; j < COLS; j++)
    {
        if (arr[1][j] < min_row2)
        {
            min_row2 = arr[0][j];
        }
    }
    cout << "Minimum number from row 2: " << min_row2 << endl;

    // Row 3 even

    for (int j = 0; j < COLS; j++)
    {
        if (arr[2][j] % 2 == 0)
        {
            cout << "Even numbers" << " " << arr[2][j];
        }
        cout << endl;
    }

    // Prime

    int prime = 0;
    
    for (int j = 0; j < COLS; j++)
    {
        int n = arr[3][j];

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                break;
            }
            else
            {
                prime = arr[3][j];
                cout << "Prime Number " << prime << endl;
                break;
            }
        }
    }

    return 0;
}
