#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the X coordinate : ";
    cin>>x;
    cout<<"Enter the Y coordinate : ";
    cin>>y;
    if(x>0 && y>0){
        cout<<"First Quadrant";
    }
    else if(x>0 && y<0){
        cout<<"Fourth Quadrant";
    }
    else if(x<0 && y>0){
        cout<<"Second Quadrant";
    }
    else if(x<0 && y<0){
        cout<<"Third Quadrant";
    }
    else{
        cout<<"The point is Origin";
    }

}