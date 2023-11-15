#include<bits/stdc++.h>
using namespace std;

class Student{

    public:


    int roll;
    int cls;
    double gpa;
  Student(int r, int c, double g){

 
 roll = r;
 cls = c;
 gpa = g;

  }

};

int main(){
    
 Student ahmed(25, 6, 5.77);

 cout<<ahmed.roll<<ahmed.gpa;


    return 0;

}