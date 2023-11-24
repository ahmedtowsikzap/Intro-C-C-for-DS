#include<bits/stdc++.h>
using namespace std;
class students{

    public:
    string name;
    int cls;
    string section;
    int id;
    int math_marks;
    int eng_marks;
};


int main(){
    
     int n;
     cin>>n;

     students student[n];
     for(int i=0; i<n; i++){

        cin>>student[i].name>>student[i].cls>>student[i].section>>student[i].id>>student[i].math_marks>>student[i].eng_marks;
     }

     for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){

            int st1 = student[i].math_marks + student[i].eng_marks;
            int st2 = student[j].math_marks + student[j].eng_marks;

            if(st1 < st2){
                swap(student[i], student[j]);
            }
             if(st1 == st2){
                 if(student[i].id > student[j].id){
                swap(student[i], student[j]);
            }
             }

        }
     }

     for(int i=0; i<n; i++){

        cout<<student[i].name<<" "<<student[i].cls<<" "<<student[i].section<<" "<<student[i].id<<" "<<student[i].math_marks<<" "<<student[i].eng_marks<<endl;
     }


    return 0;

}