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

Student ahmed(21, 1, 3.67); // my memory is deleting the values or not retruning any values because of jumping fron function one to another 

Student *p = &ahmed;
return p;

}
int main(){
    
  Student* result=fun(); // when we are receiving the values here its basically empty!! and there is nothing there anymore even though I f I have the address of the value of ahmed object but in the end it dosent matter cause I lost the values that I gave before!!

  cout<<(*result).age<<" "<< (*result).semester<<" "<<(*result).gpa;

    return 0;

}