#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    getline(cin, s);

    stringstream ig(s);
    string word;
    int f = 0;

    while(ig>>word){

        if(word =="Jessica"){
            f=1;
        }
    }
   {
   if(f ==1){

    cout<<"YES";
   }
   else{
    cout<<"NO";
   }


    return 0;
   }
}