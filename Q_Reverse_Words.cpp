#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    getline(cin, s);

    stringstream ig(s);

    string word;

    while(ig>>word){
        
        reverse(word.begin(), word.end() );
        cout<<word<<" ";
    }

    return 0;

}