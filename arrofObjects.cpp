#include<bits/stdc++.h>
using namespace std;

class Student{

    public:

    string name;
    int roll;
    int marks;
};

int main(){

    int n;
    cin>>n;

    Student a[n];
    for(int i=0; i<n; i++){

        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }


    return 0;

}