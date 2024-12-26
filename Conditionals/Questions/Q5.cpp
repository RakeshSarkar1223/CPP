#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Enter another number : ";
    cin>>y;
    cout<<"Enter another number : ";
    cin>>z;
    if(x>y&&x>z){
        cout<<"The greatest number is : "<<x;
    }
    else if (y>x&&y>z){
        cout<<"The greatest number is : "<<y;
    }
    else if (z>x&&z>y){
        cout<<"The greatest number is : "<<z;
    }
    else{
        cout<<"All are equal";
    }
}