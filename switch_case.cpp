#include<iostream>

using namespace std;


int main(){

 int x=6;


 switch(x){

    case 1: // if(x==1)
        cout<<"one";
           break;
        case 2:
        cout<<"two";
        break;
        case 3:
        cout<<"three";
        break;
         case 4:
        cout<<"four";
        break;  

        case 5: 

        cout<<"five";
        break;
        default: 

        cout<<"nothigs matching!"<< endl;

 }

//  if(x==1){

//     cout<<"one";
//  }
//  else if(x==2){
//      cout<<"two";
    
//  }
//   else if(x==3){
//      cout<<"three";
    
//  }
//  else {

//     cout<<"five";
//  }

    return 0;
}