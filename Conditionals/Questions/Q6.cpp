#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your total number : ";
    cin>>x;
    if(x>80){
        cout<<"Very Good";
    }
    else if(x>60){
        cout<<"Good";
    }
    else if(x>40){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
    

}