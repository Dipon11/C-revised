#include <iostream>
using namespace std;

int main()
{

    char value = 0;
    cin >> value;

    switch (value)
    {
    case 'a':
        cout << "Vowel" << endl;
        break;

    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;

    default:
        cout << "Consonenet" << endl;
        break;
    }

    return 0;
}