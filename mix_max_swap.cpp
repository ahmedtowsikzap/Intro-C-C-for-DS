#include<iostream>

#include<algorithm>

using namespace std;

int main(){

int a,b,c,d;

cin>>a>>b>>c>>d;


int mn = max({a,b,c,d});

// int c = min(a,b);

// int d = max(a,b);

// cout<<c;
// cout<<d;

cout<<mn<<endl;
return 0;
}