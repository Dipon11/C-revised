/*Create two functions named Deposit and Withdraw.
The Deposit function will deposit
money to user account and the withdraw function will deduct money from the user account.*/

#include <bits/stdc++.h>
using namespace std;

int deposit(int x, int n)
{
    int sum = n + x;
    return sum;
}
int withdraw(int y, int n)
{
    int sum = n - y;
    return sum;
}
int main()
{

    int n;
    cout << "If tou want to deposit press 1 or 2 to withdraw " << endl;
    cin >> n;
    int balance = 1000;
    if (n == 1)
    {

        int x;
        cin >> x;
        int f = deposit(x, balance);
        cout << "Amount deposited " << x << "  " <<"total balance" << f << endl;
    }
    else if (n == 2)
    {
        int y;
        cin >> y;
        int g = withdraw(y, balance);
        cout << "Amount withdrawed " << g << endl;
    }

    return 0;
}
