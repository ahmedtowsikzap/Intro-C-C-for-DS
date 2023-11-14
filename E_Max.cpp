#include<bits/stdc++.h>
using namespace std;


int main() {

   int n;

   cin>>n;

   int arr[n];


   for(int i=0; i<n; i++){


    cin>>arr[i];
   }

int maxx = INT_MIN;


for(int i=0; i<n; i++){

    maxx= max(maxx, arr[i]);
}


cout<<maxx<<endl;


 

    return 0;
}