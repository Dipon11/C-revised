#include <bits/stdc++.h>
using namespace std;
void print(stringstream &s)
{
    string word;
    if (s >> word)
    {

        cout << word << endl;
        print(s);
    }
}
int main()
{

    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);

    return 0;
}
