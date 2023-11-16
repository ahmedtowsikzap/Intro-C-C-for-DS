#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;

    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    int i=0;
    int j=n-1;

    while(i<j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
  cout<<"YES";

    return 0;

}