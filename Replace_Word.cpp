#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
while(t--){

 string s;
    cin>>s;
    
    string word;
    cin>>word;
    int d = word.size();
    int t = s.find(word);
    while(t<s.size() ){

    s.replace(t,d, "#");
    t=s.find(word);

    }

    cout<<s<<endl;
    
}
    return 0;

   

}