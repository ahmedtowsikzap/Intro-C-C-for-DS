#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin, s);

    stringstream ig(s);

    string word;
    int f = 0;
    while (ig >> word)
    {

        reverse(word.begin(), word.end());
        if (f == 0)
        {
            cout << word;
            f = 1;
        }
        else
        {

            cout << " " << word;
        }
    }

    return 0;
}