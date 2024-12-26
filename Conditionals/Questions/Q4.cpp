#include <iostream>
using namespace std;
int main(){//Tell if they can be the sides of a triangle 
    int x,y,z;
    cout<<"Enter a side of the triangle : ";
    cin>>x;
    cout<<"Enter another side of the triangle : ";
    cin>>y;
    cout<<"Enter another side of the triangle : ";
    cin>>z;
    if((x+y)>z&&(x+z)>y&&(y+z)>x){
        cout<<"These three sides can be a sides of triangle.";
    }
    else {
        cout<<"Invalid triangle";
    }
}