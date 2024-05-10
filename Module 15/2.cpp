/* Create a function named StringSearch(string Name, string flower[8]) which takes a flower
name and an array which stores 8 flower names as parameters. Afterwards, the function
will search the flower name in the array. If the flower name is present in the array then the
function will print “The flower name is present in the array”, otherwise, “The flower name
is not present in the array”.*/

#include <bits/stdc++.h>
using namespace std;

void StringSearch(string Name, string flower[])

{
    bool ok = false;
    for (int i = 0; i < 8; i++)
    {
        if (flower[i] == Name)
        {
            ok = true;
        }
        else
            ok = false;
    }

    if (ok == true)
    {
        cout << "The flower name is present in the array" << endl;
    }
    else
    {
        cout << " The flower name is not present in the array" << endl;
    }
}

int main()
{
    char flower[100];
    cin >> flower;
    string fname[8] = {"Rose", "Sunflower", "Tulip", "Daisy", "Waterlily", "Lily", "joba", "Orchid"};

    StringSearch(flower, fname);
    int vm[100]={1,2,3};
     cout<<  <<endl;
    
    return 0;
}
