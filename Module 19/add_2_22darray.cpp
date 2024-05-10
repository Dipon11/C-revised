#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ROWS = 2;
    int COLS = 2;

    int arr[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> arr[i][j];
        }
    }
    int brr[ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> brr[i][j];
        }
    }

    int add[2][2];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)

        {
            add[i][j] = arr[i][j] + brr[i][j];
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << add[i][j] <<" " ;
        }
         cout<<endl;
        //  commit
        
    }

    return 0;
}
