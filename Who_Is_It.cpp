#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    int id;
    char name[100];
    char section;
    int marks;
};
int main(){

    int t;
    cin>>t;
    while(t--){

Student a;
    cin >> a.id;
    cin >> a.name;
    cin >> a.section;
    cin >> a.marks;

    Student b;
    cin >> b.id;
    cin >> b.name;
    cin >> b.section;
    cin >> b.marks;

    Student c;
    cin >> c.id;
    cin >> c.name;
    cin >> c.section;
    cin >> c.marks;

  if(a.marks > b.marks && a.marks > c.marks){
    cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
  }
  else if(b.marks > a.marks && b.marks > c.marks){
     cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
  }
  else if(c.marks > a.marks && c.marks > b.marks){
      cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
  }
  else{
if(a.marks == b.marks && a.id<b.id){
    cout << a.id << " " << a.name << " " << a.section << " " << a.marks<<endl;
  }
  else if(b.marks == c.marks && b.id < c.id){
    cout << b.id << " " << b.name << " " << b.section << " " << b.marks<<endl;
  }
  else if(c.marks == a.marks && c.id < a.id){
    cout << c.id << " " << c.name << " " << c.section << " " << c.marks<<endl;
  }

  }
  

    }
    return 0;

    
}