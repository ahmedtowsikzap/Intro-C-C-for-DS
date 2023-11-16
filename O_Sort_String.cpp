#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int n;

    cin>>n;

 int freq[26] = {0};

 for(int i=0; i<n; i++){

    char S;
    cin>>S;

int value = S-'a';
freq[value]++;

 }

 for(int i=0; i<26; i++){

    for(int j=0; j<freq[i]; j++){

        char p;
        p = i+'a';
        cout<<p;
    }
 }

    return 0;

}