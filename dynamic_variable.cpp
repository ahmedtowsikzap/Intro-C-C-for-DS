#include<iostream>

using namespace std;


int *fun(){

int *a= new int;
// cout<<a<<endl;
cout<<"fun"<<a<<endl;
*a=100;

return a;

}

int main() {


int *p = fun();

cout<<p<<endl;
// int x=10;

// int *a= new int;

// *a=150;

// cout<<*a;
  

    return 0;
}