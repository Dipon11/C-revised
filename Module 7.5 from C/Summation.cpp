#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int sum = 0;
    int n;
    cin >> n;
    vector<long long int> arr(n); // Using vector instead of array for dynamic size
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum < 0)
    {
        sum *= -1;
        cout << sum << endl;
    }
    else
    {
        cout << sum << endl;
    }
    return 0;
}
