/*Write a function isVowel (char ch) that takes a character ch and returns true if it's a vowel
(a, e, i, o, u), false otherwise. Use this function in main to check if a user-entered character
is a vowel or consonant.*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{

    bool ok = false;
  if(ch == 'a'|| ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
     {
      ok = true;
      return ok;
     }
    // if (ch == 'a')
    // {
    //     ok = true;
    //     return ok;
    // }
    // else if (ch == 'e')
    // {
    //     ok = true;
    //     return ok;
    // }
    // else if (ch == 'i')
    // {
    //     ok = true;
    //     return ok;
    // }
    // else if (ch == 'o')
    // {
    //     ok = true;
    //     return ok;
    // }
    // else if (ch == 'u')
    // {
    //     ok = true;
    //     return ok;
    // }
    else
        ok = false;
        return ok;
}

int main()
{

    char a;
    cin >> a;

    bool f = isVowel(a);

    if (f == true)
        cout << "Is Vowel " << endl;
    else
        cout << "Consonent" << endl;

}
