#include<bits/stdc++.h>
using namespace std;

class Student{

    public:
    int roll;
    string name;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls){
        this->roll = roll;
        this->name = name;
        this->section = section;
        this->math_marks = math_marks;
        this->cls= cls;


    }
    


};

int main(){
    

    Student ahmed("ahmed", 25, 'A', 67, 12);


    cout<<ahmed.name;

    return 0;

}