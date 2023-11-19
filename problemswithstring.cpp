#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
    int roll;
    char name[100];
    char section;
    int math_marks;
    int cls;

    Student(char *name, int roll, char section, int math_marks, int cls){
        this->roll = roll;
        strcpy(this->name, name);
        this->section = section;
        this->math_marks = math_marks;
        this->cls= cls;


    }

};

int main(){


    char name[100] = "ahmed";
    Student *ahmed = new Student(name, 25, 'A', 67, 12);


    (*ahmed).cls = 4; 
    cout<< (*ahmed).cls;

    return 0;
  


}