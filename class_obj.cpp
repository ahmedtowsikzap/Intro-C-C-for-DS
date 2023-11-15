#include<bits/stdc++.h>
using namespace std;


class Student{

   public:

     char name[100];
     int roll;
     double cpga;


};

int main(){
    

Student a;

cout<<a.roll<<endl;
cin.getline(a.name,100);
cin>>a.roll>>a.name>>a.cpga;
getchar();







//DIrect decalration

//  a.roll =25;


//  a.cpga = 3.95;

// char tmp[100] = "rakib";

// strcpy(a.name, tmp);


    return 0;

}