#include <bits/stdc++.h>
using namespace std;

int main() {

    char s[100001];

    while (cin.getline(s, 100001)) {
        int frequency[26] = {0};

        for (int i = 0; s[i] != '\0'; i++) {
                frequency[s[i] - 'a']++;
            
        }

        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < frequency[i]; j++) {
                char p;

                p = i+'a';

                cout<<p;
            }
        }
        cout<<endl;

    }

    return 0;
}
