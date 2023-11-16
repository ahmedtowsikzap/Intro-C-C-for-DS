#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
    int age;
    int semester;
    double gpa;

    Student(int age, int semester, double gpa){

        this->age= age;
        this->semester= semester;
        this->gpa = gpa;
    }
};


Student* fun(){

Student ahmed(21, 1, 3.67);

Student *p = &ahmed;
return p;

}
int main(){
    
  Student* result=fun();

  cout<<(*result).age<<" "<< (*result).semester<<" "<<(*result).gpa;

    return 0;

}