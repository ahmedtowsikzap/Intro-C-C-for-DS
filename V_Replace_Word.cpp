#include<bits/stdc++.h>
using namespace std;

int main(){
    

    string s;
    cin>>s;
    
    string word = "EGYPT";
    int t = s.find(word); // position
    while(t<s.size() ){

    s.replace(t,5, " "); //18
    t=s.find(word);

    }

    cout<<s;
    






 

    return 0;

}