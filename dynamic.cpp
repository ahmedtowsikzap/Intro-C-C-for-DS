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

int main(){
 
//  Student ahmed(16, 3, 3.55);

 Student *ahmed = new Student(16, 3, 3.55);
  cout<<(*ahmed).gpa;
    return 0;
}