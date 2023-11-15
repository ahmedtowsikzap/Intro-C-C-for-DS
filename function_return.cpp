#include<bits/stdc++.h>
using namespace std;

class Student{

    public:

    int roll;
    int cls;
    double gpa;
 

  //constructor create which is basically function!! will receive parameter!
    Student(int roll, int cls, int gpa){
     (*this).roll = roll;
     (*this).cls = cls;
     (*this).gpa = gpa;
    }
};

Student* fun(){


Student ahmed(27, 1, 3.66);

Student *p = &ahmed;
return p;

}


int main(){
    
Student* answer = fun();

// cout<<(*answer).roll;

cout<<answer->roll;

    return 0;

}