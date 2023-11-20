#include<bits/stdc++.h>
using namespace std;

int main(){
    
 
  string s;
  getline(cin,s);
   

   stringstream para(s);
   string words;

  while(para>>words){

    cout<<words<<endl;
  }
    return 0;

}