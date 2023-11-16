#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    char section[100];
    int math_marks;
    int cls;

    Student(const char name[100], int roll, const char section[100], int math_marks, int cls) {
        strcpy(this->name, name);
        this->roll = roll;
        strcpy(this->section, section);
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main() {
    Student ahmed("towsik", 25, "A", 85, 12);
    

    return 0;
}
